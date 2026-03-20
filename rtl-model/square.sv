`include "quadra.vh"

module square
(
    input  x_t x2,
    output y_t sq
);
    // Compute x2^2:
    always_comb sq = x2 * x2;

endmodule    
