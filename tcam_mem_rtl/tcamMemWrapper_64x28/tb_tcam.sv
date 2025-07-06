`timescale 1ns/1ps
module tb_tcam;

    // DUT signals
    logic in_clk;
    logic in_csb;
    logic in_web;
    logic [3:0] in_wmask;
    logic [27:0] in_addr;
    logic [31:0] in_wdata;
    logic [5:0] out_pma;

    // Instantiate DUT
    top_tcam_mem dut (
        .in_clk(in_clk),
        .in_csb(in_csb),
        .in_web(in_web),
        .in_wmask(in_wmask),
        .in_addr(in_addr),
        .in_wdata(in_wdata),
        .out_pma(out_pma)
    );

    // Clock generation
    initial in_clk = 0;
    always #5 in_clk = ~in_clk; // 100MHz clock

    initial begin
        // Initialize signals
        in_csb = 1;
        in_web = 1;
        in_wmask = 4'b1111;
        in_addr = 28'h0;
        in_wdata = 32'h0;

        #100;
        
        // Write to all 4 blocks, both lower and upper halves
        in_csb = 0;
        in_web = 0;
        in_wmask = 4'b1111;
        
        // Block 0: in_addr[9:8]=00
        // Lower half (address 5)
        in_addr = {18'b0, 2'b00, 1'b1, 7'b0000101};
        in_wdata = 32'b00000000000000000000000000010000;
        #100;
        $display("Write Block 0 Lower: addr = %b, data = %b", in_addr, in_wdata);
        #100;
        $display("[Confirm] Block 0 out_rdata = %b", dut.out_rdata0);
        // Upper half (address 133 = 10000101)
        in_addr = {18'b0, 2'b00, 1'b0, 7'b0000101};
        in_wdata = 32'b00000000000000000000000000000000;
        #100;
        $display("Write Block 0 Upper: addr = %b, data = %b", in_addr, in_wdata);
        #100;
        $display("[Confirm] Block 0 out_rdata = %b", dut.out_rdata0);
        
        // Block 1: in_addr[9:8]=01
        // Lower half (address 5)
        in_addr = {18'b0, 2'b01, 1'b1, 7'b0000101};
        in_wdata = 32'b00000000000000000000000000010000;
        #100;
        $display("Write Block 1 Lower: addr = %b, data = %b", in_addr, in_wdata);
        #100;
        $display("[Confirm] Block 1 out_rdata = %b", dut.out_rdata1);
        // Upper half (address 133 = 10000101)
        in_addr = {18'b0, 2'b01, 1'b0, 7'b0000101};
        in_wdata = 32'b00000000000000000000000000000000;
        #100;
        $display("Write Block 1 Upper: addr = %b, data = %b", in_addr, in_wdata);
        #100;
        $display("[Confirm] Block 1 out_rdata = %b", dut.out_rdata1);
        
        // Block 2: in_addr[9:8]=10
        // Lower half (address 5)
        in_addr = {18'b0, 2'b10, 1'b1, 7'b0000101};
        in_wdata = 32'b00000000000000000000000000010000;
        #100;
        $display("Write Block 2 Lower: addr = %b, data = %b", in_addr, in_wdata);
        #100;
        $display("[Confirm] Block 2 out_rdata = %b", dut.out_rdata2);
        // Upper half (address 133 = 10000101)
        in_addr = {18'b0, 2'b10, 1'b0, 7'b0000101};
        in_wdata = 32'b00000000000000000000000000000000;
        #100;
        $display("Write Block 2 Upper: addr = %b, data = %b", in_addr, in_wdata);
        #100;
        $display("[Confirm] Block 2 out_rdata = %b", dut.out_rdata2);
        
        // Block 3: in_addr[9:8]=11
        // Lower half (address 5)
        in_addr = {18'b0, 2'b11, 1'b1, 7'b0000101};
        in_wdata = 32'b00000000000000000000000000010000;
        #100;
        $display("Write Block 3 Lower: addr = %b, data = %b", in_addr, in_wdata);
        #100;
        $display("[Confirm] Block 3 out_rdata = %b", dut.out_rdata3);
        // Upper half (address 133 = 10000101)
        in_addr = {18'b0, 2'b11, 1'b0, 7'b0000101};
        in_wdata = 32'b00000000000000000000000000000000;
        #100;
        $display("Write Block 3 Upper: addr = %b, data = %b", in_addr, in_wdata);
        #100;
        $display("[Confirm] Block 3 out_rdata = %b", dut.out_rdata3);
        
        // Search operation
        in_web = 1;
        in_addr = 28'b0000101000010100001010000101;  // Search key: all substrings = 0000101
        $display("Search substrings:");
        $display("Block 0 search addr = %b", in_addr[6:0]);
        $display("Block 1 search addr = %b", in_addr[13:7]);
        $display("Block 2 search addr = %b", in_addr[20:14]);
        $display("Block 3 search addr = %b", in_addr[27:21]);
        #100;
        $display("Search result for query 0x%h: out_pma = %0d", in_addr, out_pma);
        $display("Block 0 out_rdata = %b", dut.out_rdata0);
        $display("Block 1 out_rdata = %b", dut.out_rdata1);
        $display("Block 2 out_rdata = %b", dut.out_rdata2);
        $display("Block 3 out_rdata = %b", dut.out_rdata3);
        $display("ANDed result (out_andgate) = %b", dut.out_andgate);
        $display("Priority encoder output (out_pma) = %0d", out_pma);

        // Finish simulation
        #100;
        $finish;
    end
endmodule
