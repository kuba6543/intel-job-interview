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

logic [33:0]  x_squared; // somehow wider data gives smaller errors

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

always_ff @(posedge clk) begin                                                                   

    // Phase 2 - shift right to fit Y_W width

    if(!rst_b) begin
        a_shift     <= '0; 
        bx_shift    <= '0; 
        cx2_shift   <= '0; 
    end else begin
        a_shift   <= a_lut >>> (A_F - Y_F);                                                             // shift by 27-23=4 bits
        bx_shift  <= Y_W'( (64'($signed(b_lut)) * 64'($signed({1'b0, x_lut}))) >>> (B_F + X_F - Y_F) ); // shift by 16+23-23=16 bits
        cx2_shift <= Y_W'( (64'($signed(c_lut)) * 64'($signed({1'b0, x_squared}))) >>> (C_F + Y_F)   ); // shift by 11+23=34 bits
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
