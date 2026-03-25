`include "quadra.vh"

module square
(
    input  x_t x2,
    output logic unsigned [(2*X_W)-1:0] sq // bigger precision give less errors
);
    // Compute x2^2:
    always_comb sq = x2 * x2;

endmodule    
