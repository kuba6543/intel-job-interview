//
// Quadratic polynomial:  f(x) = a + b*x2 + c*(x2^2)
//

`include "quadra.vh"

module quadra
(
    input  clk,
    input  rst_b,
    input  x_t  x,
    input  dv_t x_dv,
    input  a_t  a,
    input  b_t  b,
    input  c_t  c,
    output y_t  y
);

x_t  x_lut;
a_t  a_lut;
b_t  b_lut;
c_t  c_lut;

logic [33:0]  x_squared; // wider data (2*(x_t-x_lut)) gives smaller errors

logic signed [63:0] b_mult;
logic signed [63:0] c_mult;
logic signed [63:0] a_plus_half;
logic signed [63:0] b_plus_half;
logic signed [63:0] c_plus_half;

y_t a_shift;
y_t bx_shift;
y_t cx2_shift;

square squarer (
    .x2 (x_lut),
    .sq (x_squared)
);

always_ff @(posedge clk) begin

    // Phase 1 - get values from LUT

    if(!rst_b) begin
        x_lut <= '0;
        a_lut <= '0;
        b_lut <= '0;
        c_lut <= '0;
    end if(x_dv) begin
        x_lut <= x;
        a_lut <= a;
        b_lut <= b;
        c_lut <= c;
    end
end

always_comb begin
    b_mult = 64'($signed(b_lut)) * 64'($signed({1'b0, x_lut}));
    c_mult = 64'($signed(c_lut)) * 64'($signed({1'b0, x_squared}));

    a_plus_half = a_lut  + (1 << (A_F - Y_F - 1));
    b_plus_half = b_mult + (1 << (B_F + X_F - Y_F - 1));
    c_plus_half = c_mult + (1 << (C_F + Y_F - 1));
end

always_ff @(posedge clk) begin                                                                   

    // Phase 2 - shift right to fit Y_W width

    if(!rst_b) begin
        a_shift     <= '0; 
        bx_shift    <= '0; 
        cx2_shift   <= '0; 
    end else begin
        a_shift     <= Y_W'(a_plus_half >>> (A_F - Y_F));
        // add 0.5 and shift by 27-23=4 bits to round up
        bx_shift    <= Y_W'(b_plus_half >>> (B_F + X_F - Y_F)); 
        // add 0.5 and shift by 16+23-23=16 bits to round up
        cx2_shift   <= Y_W'(c_plus_half >>> (C_F + Y_F));
        // add 0.5 and shift by 11+23=34 bits to round up
    end
end

always_ff @(posedge clk) begin

    // Phase 3 - calculate value of polynomial

    if(!rst_b) begin
        y <= 0;
    end else begin
        y <= a_shift + bx_shift + cx2_shift;
    end
end

endmodule
