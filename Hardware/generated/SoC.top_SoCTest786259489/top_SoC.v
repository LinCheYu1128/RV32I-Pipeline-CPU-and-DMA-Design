module Reg_IF(
  input         clock,
  input         reset,
  input         io_Stall,
  input  [14:0] io_next_pc_in,
  output [14:0] io_pc
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [14:0] pcReg; // @[Reg_IF.scala 15:24]
  assign io_pc = pcReg; // @[Reg_IF.scala 23:11]
  always @(posedge clock) begin
    if (reset) begin // @[Reg_IF.scala 15:24]
      pcReg <= 15'h0; // @[Reg_IF.scala 15:24]
    end else if (!(io_Stall)) begin // @[Reg_IF.scala 17:19]
      pcReg <= io_next_pc_in; // @[Reg_IF.scala 20:15]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pcReg = _RAND_0[14:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Reg_ID(
  input         clock,
  input         reset,
  input         io_Flush,
  input         io_Stall,
  input  [14:0] io_pc_in,
  input  [31:0] io_inst_in,
  output [14:0] io_pc,
  output [31:0] io_inst
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] InstReg; // @[Reg_ID.scala 19:26]
  reg [14:0] pcReg; // @[Reg_ID.scala 20:25]
  assign io_pc = pcReg; // @[Reg_ID.scala 36:11]
  assign io_inst = InstReg; // @[Reg_ID.scala 35:13]
  always @(posedge clock) begin
    if (reset) begin // @[Reg_ID.scala 19:26]
      InstReg <= 32'h0; // @[Reg_ID.scala 19:26]
    end else if (!(io_Stall)) begin // @[Reg_ID.scala 24:19]
      if (io_Flush) begin // @[Reg_ID.scala 27:25]
        InstReg <= 32'h0; // @[Reg_ID.scala 28:17]
      end else begin
        InstReg <= io_inst_in; // @[Reg_ID.scala 31:17]
      end
    end
    if (reset) begin // @[Reg_ID.scala 20:25]
      pcReg <= 15'h0; // @[Reg_ID.scala 20:25]
    end else if (!(io_Stall)) begin // @[Reg_ID.scala 24:19]
      if (io_Flush) begin // @[Reg_ID.scala 27:25]
        pcReg <= 15'h0; // @[Reg_ID.scala 29:15]
      end else begin
        pcReg <= io_pc_in; // @[Reg_ID.scala 32:15]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  InstReg = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  pcReg = _RAND_1[14:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Reg_EXE(
  input         clock,
  input         reset,
  input         io_Flush,
  input         io_Stall,
  input  [31:0] io_inst_in,
  input  [14:0] io_pc_in,
  input  [31:0] io_rs1_rdata_in,
  input  [31:0] io_rs2_rdata_in,
  input  [31:0] io_imm_in,
  output [31:0] io_inst,
  output [14:0] io_pc,
  output [31:0] io_rs1_rdata,
  output [31:0] io_rs2_rdata,
  output [31:0] io_imm
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg [14:0] pcReg; // @[Reg_EXE.scala 27:25]
  reg [31:0] InstReg; // @[Reg_EXE.scala 28:26]
  reg [31:0] immReg; // @[Reg_EXE.scala 29:25]
  reg [31:0] rs1Reg; // @[Reg_EXE.scala 30:25]
  reg [31:0] rs2Reg; // @[Reg_EXE.scala 31:25]
  assign io_inst = InstReg; // @[Reg_EXE.scala 54:13]
  assign io_pc = pcReg; // @[Reg_EXE.scala 56:11]
  assign io_rs1_rdata = rs1Reg; // @[Reg_EXE.scala 57:18]
  assign io_rs2_rdata = rs2Reg; // @[Reg_EXE.scala 58:18]
  assign io_imm = immReg; // @[Reg_EXE.scala 55:12]
  always @(posedge clock) begin
    if (reset) begin // @[Reg_EXE.scala 27:25]
      pcReg <= 15'h0; // @[Reg_EXE.scala 27:25]
    end else if (!(io_Stall)) begin // @[Reg_EXE.scala 34:19]
      if (io_Flush) begin // @[Reg_EXE.scala 40:25]
        pcReg <= 15'h0; // @[Reg_EXE.scala 43:15]
      end else begin
        pcReg <= io_pc_in; // @[Reg_EXE.scala 49:15]
      end
    end
    if (reset) begin // @[Reg_EXE.scala 28:26]
      InstReg <= 32'h0; // @[Reg_EXE.scala 28:26]
    end else if (!(io_Stall)) begin // @[Reg_EXE.scala 34:19]
      if (io_Flush) begin // @[Reg_EXE.scala 40:25]
        InstReg <= 32'h0; // @[Reg_EXE.scala 42:17]
      end else begin
        InstReg <= io_inst_in; // @[Reg_EXE.scala 47:17]
      end
    end
    if (reset) begin // @[Reg_EXE.scala 29:25]
      immReg <= 32'h0; // @[Reg_EXE.scala 29:25]
    end else if (!(io_Stall)) begin // @[Reg_EXE.scala 34:19]
      if (io_Flush) begin // @[Reg_EXE.scala 40:25]
        immReg <= 32'h0; // @[Reg_EXE.scala 41:16]
      end else begin
        immReg <= io_imm_in; // @[Reg_EXE.scala 48:16]
      end
    end
    if (reset) begin // @[Reg_EXE.scala 30:25]
      rs1Reg <= 32'h0; // @[Reg_EXE.scala 30:25]
    end else if (!(io_Stall)) begin // @[Reg_EXE.scala 34:19]
      if (io_Flush) begin // @[Reg_EXE.scala 40:25]
        rs1Reg <= 32'h0; // @[Reg_EXE.scala 44:16]
      end else begin
        rs1Reg <= io_rs1_rdata_in; // @[Reg_EXE.scala 50:16]
      end
    end
    if (reset) begin // @[Reg_EXE.scala 31:25]
      rs2Reg <= 32'h0; // @[Reg_EXE.scala 31:25]
    end else if (!(io_Stall)) begin // @[Reg_EXE.scala 34:19]
      if (io_Flush) begin // @[Reg_EXE.scala 40:25]
        rs2Reg <= 32'h0; // @[Reg_EXE.scala 45:16]
      end else begin
        rs2Reg <= io_rs2_rdata_in; // @[Reg_EXE.scala 51:16]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pcReg = _RAND_0[14:0];
  _RAND_1 = {1{`RANDOM}};
  InstReg = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  immReg = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  rs1Reg = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  rs2Reg = _RAND_4[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Reg_MEM(
  input         clock,
  input         reset,
  input         io_Stall,
  input  [14:0] io_pc_in,
  input  [31:0] io_inst_in,
  input  [31:0] io_alu_out_in,
  input  [31:0] io_DM_wdata_in,
  output [14:0] io_pc,
  output [31:0] io_inst,
  output [31:0] io_alu_out,
  output [31:0] io_DM_wdata
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] InstReg; // @[Reg_MEM.scala 22:26]
  reg [14:0] pcReg; // @[Reg_MEM.scala 23:25]
  reg [31:0] aluReg; // @[Reg_MEM.scala 24:25]
  reg [31:0] wdataReg; // @[Reg_MEM.scala 25:27]
  assign io_pc = pcReg; // @[Reg_MEM.scala 41:11]
  assign io_inst = InstReg; // @[Reg_MEM.scala 40:13]
  assign io_alu_out = aluReg; // @[Reg_MEM.scala 42:16]
  assign io_DM_wdata = wdataReg; // @[Reg_MEM.scala 43:17]
  always @(posedge clock) begin
    if (reset) begin // @[Reg_MEM.scala 22:26]
      InstReg <= 32'h0; // @[Reg_MEM.scala 22:26]
    end else if (!(io_Stall)) begin // @[Reg_MEM.scala 28:19]
      InstReg <= io_inst_in; // @[Reg_MEM.scala 34:17]
    end
    if (reset) begin // @[Reg_MEM.scala 23:25]
      pcReg <= 15'h0; // @[Reg_MEM.scala 23:25]
    end else if (!(io_Stall)) begin // @[Reg_MEM.scala 28:19]
      pcReg <= io_pc_in; // @[Reg_MEM.scala 35:15]
    end
    if (reset) begin // @[Reg_MEM.scala 24:25]
      aluReg <= 32'h0; // @[Reg_MEM.scala 24:25]
    end else if (!(io_Stall)) begin // @[Reg_MEM.scala 28:19]
      aluReg <= io_alu_out_in; // @[Reg_MEM.scala 36:16]
    end
    if (reset) begin // @[Reg_MEM.scala 25:27]
      wdataReg <= 32'h0; // @[Reg_MEM.scala 25:27]
    end else if (!(io_Stall)) begin // @[Reg_MEM.scala 28:19]
      wdataReg <= io_DM_wdata_in; // @[Reg_MEM.scala 37:18]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  InstReg = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  pcReg = _RAND_1[14:0];
  _RAND_2 = {1{`RANDOM}};
  aluReg = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  wdataReg = _RAND_3[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Reg_WB(
  input         clock,
  input         reset,
  input         io_Stall,
  input  [14:0] io_pc_plus4_in,
  input  [31:0] io_inst_in,
  input  [31:0] io_alu_out_in,
  input  [31:0] io_ld_data_in,
  output [14:0] io_pc_plus4,
  output [31:0] io_inst,
  output [31:0] io_alu_out,
  output [31:0] io_ld_data
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  reg [14:0] pc_plus4_Reg; // @[Reg_WB.scala 22:32]
  reg [31:0] InstReg; // @[Reg_WB.scala 23:26]
  reg [31:0] alu_out_Reg; // @[Reg_WB.scala 24:30]
  reg [31:0] ld_data_Reg; // @[Reg_WB.scala 25:30]
  assign io_pc_plus4 = pc_plus4_Reg; // @[Reg_WB.scala 40:17]
  assign io_inst = InstReg; // @[Reg_WB.scala 41:13]
  assign io_alu_out = alu_out_Reg; // @[Reg_WB.scala 42:16]
  assign io_ld_data = ld_data_Reg; // @[Reg_WB.scala 43:16]
  always @(posedge clock) begin
    if (reset) begin // @[Reg_WB.scala 22:32]
      pc_plus4_Reg <= 15'h0; // @[Reg_WB.scala 22:32]
    end else if (!(io_Stall)) begin // @[Reg_WB.scala 28:19]
      pc_plus4_Reg <= io_pc_plus4_in; // @[Reg_WB.scala 34:22]
    end
    if (reset) begin // @[Reg_WB.scala 23:26]
      InstReg <= 32'h0; // @[Reg_WB.scala 23:26]
    end else if (!(io_Stall)) begin // @[Reg_WB.scala 28:19]
      InstReg <= io_inst_in; // @[Reg_WB.scala 35:17]
    end
    if (reset) begin // @[Reg_WB.scala 24:30]
      alu_out_Reg <= 32'h0; // @[Reg_WB.scala 24:30]
    end else if (!(io_Stall)) begin // @[Reg_WB.scala 28:19]
      alu_out_Reg <= io_alu_out_in; // @[Reg_WB.scala 36:21]
    end
    if (reset) begin // @[Reg_WB.scala 25:30]
      ld_data_Reg <= 32'h0; // @[Reg_WB.scala 25:30]
    end else if (!(io_Stall)) begin // @[Reg_WB.scala 28:19]
      ld_data_Reg <= io_ld_data_in; // @[Reg_WB.scala 37:21]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  pc_plus4_Reg = _RAND_0[14:0];
  _RAND_1 = {1{`RANDOM}};
  InstReg = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  alu_out_Reg = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  ld_data_Reg = _RAND_3[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Path_IF(
  input  [1:0]  io_PCSel,
  input  [14:0] io_IF_pc_in,
  input  [14:0] io_EXE_pc_in,
  input  [14:0] io_EXE_target_pc_in,
  input  [31:0] io_Mem_data,
  output [14:0] io_next_pc,
  output [14:0] io_Mem_Addr,
  output [31:0] io_inst
);
  wire [14:0] _io_next_pc_T_1 = io_IF_pc_in + 15'h4; // @[Path_IF.scala 23:52]
  wire [14:0] _io_next_pc_T_5 = io_EXE_pc_in + 15'h4; // @[Path_IF.scala 25:40]
  wire [14:0] _io_next_pc_T_7 = 2'h0 == io_PCSel ? _io_next_pc_T_1 : _io_next_pc_T_1; // @[Mux.scala 81:58]
  wire [14:0] _io_next_pc_T_9 = 2'h1 == io_PCSel ? _io_next_pc_T_5 : _io_next_pc_T_7; // @[Mux.scala 81:58]
  assign io_next_pc = 2'h2 == io_PCSel ? io_EXE_target_pc_in : _io_next_pc_T_9; // @[Mux.scala 81:58]
  assign io_Mem_Addr = io_IF_pc_in; // @[Path_IF.scala 29:17]
  assign io_inst = io_Mem_data; // @[Path_IF.scala 30:13]
endmodule
module RegFile(
  input         clock,
  input         reset,
  input         io_wen,
  input  [4:0]  io_waddr,
  input  [31:0] io_wdata,
  input  [4:0]  io_raddr_0,
  input  [4:0]  io_raddr_1,
  output [31:0] io_rdata_0,
  output [31:0] io_rdata_1,
  output [31:0] io_regs_1,
  output [31:0] io_regs_2,
  output [31:0] io_regs_3,
  output [31:0] io_regs_4,
  output [31:0] io_regs_5,
  output [31:0] io_regs_6,
  output [31:0] io_regs_7,
  output [31:0] io_regs_8,
  output [31:0] io_regs_9,
  output [31:0] io_regs_10,
  output [31:0] io_regs_11,
  output [31:0] io_regs_12,
  output [31:0] io_regs_13,
  output [31:0] io_regs_14,
  output [31:0] io_regs_15,
  output [31:0] io_regs_16,
  output [31:0] io_regs_17,
  output [31:0] io_regs_18,
  output [31:0] io_regs_19,
  output [31:0] io_regs_20,
  output [31:0] io_regs_21,
  output [31:0] io_regs_22,
  output [31:0] io_regs_23,
  output [31:0] io_regs_24,
  output [31:0] io_regs_25,
  output [31:0] io_regs_26,
  output [31:0] io_regs_27,
  output [31:0] io_regs_28,
  output [31:0] io_regs_29,
  output [31:0] io_regs_30,
  output [31:0] io_regs_31
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] regs_1; // @[RegFile.scala 16:21]
  reg [31:0] regs_2; // @[RegFile.scala 16:21]
  reg [31:0] regs_3; // @[RegFile.scala 16:21]
  reg [31:0] regs_4; // @[RegFile.scala 16:21]
  reg [31:0] regs_5; // @[RegFile.scala 16:21]
  reg [31:0] regs_6; // @[RegFile.scala 16:21]
  reg [31:0] regs_7; // @[RegFile.scala 16:21]
  reg [31:0] regs_8; // @[RegFile.scala 16:21]
  reg [31:0] regs_9; // @[RegFile.scala 16:21]
  reg [31:0] regs_10; // @[RegFile.scala 16:21]
  reg [31:0] regs_11; // @[RegFile.scala 16:21]
  reg [31:0] regs_12; // @[RegFile.scala 16:21]
  reg [31:0] regs_13; // @[RegFile.scala 16:21]
  reg [31:0] regs_14; // @[RegFile.scala 16:21]
  reg [31:0] regs_15; // @[RegFile.scala 16:21]
  reg [31:0] regs_16; // @[RegFile.scala 16:21]
  reg [31:0] regs_17; // @[RegFile.scala 16:21]
  reg [31:0] regs_18; // @[RegFile.scala 16:21]
  reg [31:0] regs_19; // @[RegFile.scala 16:21]
  reg [31:0] regs_20; // @[RegFile.scala 16:21]
  reg [31:0] regs_21; // @[RegFile.scala 16:21]
  reg [31:0] regs_22; // @[RegFile.scala 16:21]
  reg [31:0] regs_23; // @[RegFile.scala 16:21]
  reg [31:0] regs_24; // @[RegFile.scala 16:21]
  reg [31:0] regs_25; // @[RegFile.scala 16:21]
  reg [31:0] regs_26; // @[RegFile.scala 16:21]
  reg [31:0] regs_27; // @[RegFile.scala 16:21]
  reg [31:0] regs_28; // @[RegFile.scala 16:21]
  reg [31:0] regs_29; // @[RegFile.scala 16:21]
  reg [31:0] regs_30; // @[RegFile.scala 16:21]
  reg [31:0] regs_31; // @[RegFile.scala 16:21]
  wire [31:0] _GEN_1 = 5'h1 == io_raddr_0 ? regs_1 : 32'h0; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_2 = 5'h2 == io_raddr_0 ? regs_2 : _GEN_1; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_3 = 5'h3 == io_raddr_0 ? regs_3 : _GEN_2; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_4 = 5'h4 == io_raddr_0 ? regs_4 : _GEN_3; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_5 = 5'h5 == io_raddr_0 ? regs_5 : _GEN_4; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_6 = 5'h6 == io_raddr_0 ? regs_6 : _GEN_5; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_7 = 5'h7 == io_raddr_0 ? regs_7 : _GEN_6; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_8 = 5'h8 == io_raddr_0 ? regs_8 : _GEN_7; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_9 = 5'h9 == io_raddr_0 ? regs_9 : _GEN_8; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_10 = 5'ha == io_raddr_0 ? regs_10 : _GEN_9; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_11 = 5'hb == io_raddr_0 ? regs_11 : _GEN_10; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_12 = 5'hc == io_raddr_0 ? regs_12 : _GEN_11; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_13 = 5'hd == io_raddr_0 ? regs_13 : _GEN_12; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_14 = 5'he == io_raddr_0 ? regs_14 : _GEN_13; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_15 = 5'hf == io_raddr_0 ? regs_15 : _GEN_14; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_16 = 5'h10 == io_raddr_0 ? regs_16 : _GEN_15; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_17 = 5'h11 == io_raddr_0 ? regs_17 : _GEN_16; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_18 = 5'h12 == io_raddr_0 ? regs_18 : _GEN_17; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_19 = 5'h13 == io_raddr_0 ? regs_19 : _GEN_18; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_20 = 5'h14 == io_raddr_0 ? regs_20 : _GEN_19; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_21 = 5'h15 == io_raddr_0 ? regs_21 : _GEN_20; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_22 = 5'h16 == io_raddr_0 ? regs_22 : _GEN_21; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_23 = 5'h17 == io_raddr_0 ? regs_23 : _GEN_22; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_24 = 5'h18 == io_raddr_0 ? regs_24 : _GEN_23; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_25 = 5'h19 == io_raddr_0 ? regs_25 : _GEN_24; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_26 = 5'h1a == io_raddr_0 ? regs_26 : _GEN_25; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_27 = 5'h1b == io_raddr_0 ? regs_27 : _GEN_26; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_28 = 5'h1c == io_raddr_0 ? regs_28 : _GEN_27; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_29 = 5'h1d == io_raddr_0 ? regs_29 : _GEN_28; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_30 = 5'h1e == io_raddr_0 ? regs_30 : _GEN_29; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_33 = 5'h1 == io_raddr_1 ? regs_1 : 32'h0; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_34 = 5'h2 == io_raddr_1 ? regs_2 : _GEN_33; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_35 = 5'h3 == io_raddr_1 ? regs_3 : _GEN_34; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_36 = 5'h4 == io_raddr_1 ? regs_4 : _GEN_35; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_37 = 5'h5 == io_raddr_1 ? regs_5 : _GEN_36; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_38 = 5'h6 == io_raddr_1 ? regs_6 : _GEN_37; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_39 = 5'h7 == io_raddr_1 ? regs_7 : _GEN_38; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_40 = 5'h8 == io_raddr_1 ? regs_8 : _GEN_39; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_41 = 5'h9 == io_raddr_1 ? regs_9 : _GEN_40; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_42 = 5'ha == io_raddr_1 ? regs_10 : _GEN_41; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_43 = 5'hb == io_raddr_1 ? regs_11 : _GEN_42; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_44 = 5'hc == io_raddr_1 ? regs_12 : _GEN_43; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_45 = 5'hd == io_raddr_1 ? regs_13 : _GEN_44; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_46 = 5'he == io_raddr_1 ? regs_14 : _GEN_45; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_47 = 5'hf == io_raddr_1 ? regs_15 : _GEN_46; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_48 = 5'h10 == io_raddr_1 ? regs_16 : _GEN_47; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_49 = 5'h11 == io_raddr_1 ? regs_17 : _GEN_48; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_50 = 5'h12 == io_raddr_1 ? regs_18 : _GEN_49; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_51 = 5'h13 == io_raddr_1 ? regs_19 : _GEN_50; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_52 = 5'h14 == io_raddr_1 ? regs_20 : _GEN_51; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_53 = 5'h15 == io_raddr_1 ? regs_21 : _GEN_52; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_54 = 5'h16 == io_raddr_1 ? regs_22 : _GEN_53; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_55 = 5'h17 == io_raddr_1 ? regs_23 : _GEN_54; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_56 = 5'h18 == io_raddr_1 ? regs_24 : _GEN_55; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_57 = 5'h19 == io_raddr_1 ? regs_25 : _GEN_56; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_58 = 5'h1a == io_raddr_1 ? regs_26 : _GEN_57; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_59 = 5'h1b == io_raddr_1 ? regs_27 : _GEN_58; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_60 = 5'h1c == io_raddr_1 ? regs_28 : _GEN_59; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_61 = 5'h1d == io_raddr_1 ? regs_29 : _GEN_60; // @[RegFile.scala 22:{52,52}]
  wire [31:0] _GEN_62 = 5'h1e == io_raddr_1 ? regs_30 : _GEN_61; // @[RegFile.scala 22:{52,52}]
  assign io_rdata_0 = 5'h1f == io_raddr_0 ? regs_31 : _GEN_30; // @[RegFile.scala 22:{52,52}]
  assign io_rdata_1 = 5'h1f == io_raddr_1 ? regs_31 : _GEN_62; // @[RegFile.scala 22:{52,52}]
  assign io_regs_1 = regs_1; // @[RegFile.scala 26:11]
  assign io_regs_2 = regs_2; // @[RegFile.scala 26:11]
  assign io_regs_3 = regs_3; // @[RegFile.scala 26:11]
  assign io_regs_4 = regs_4; // @[RegFile.scala 26:11]
  assign io_regs_5 = regs_5; // @[RegFile.scala 26:11]
  assign io_regs_6 = regs_6; // @[RegFile.scala 26:11]
  assign io_regs_7 = regs_7; // @[RegFile.scala 26:11]
  assign io_regs_8 = regs_8; // @[RegFile.scala 26:11]
  assign io_regs_9 = regs_9; // @[RegFile.scala 26:11]
  assign io_regs_10 = regs_10; // @[RegFile.scala 26:11]
  assign io_regs_11 = regs_11; // @[RegFile.scala 26:11]
  assign io_regs_12 = regs_12; // @[RegFile.scala 26:11]
  assign io_regs_13 = regs_13; // @[RegFile.scala 26:11]
  assign io_regs_14 = regs_14; // @[RegFile.scala 26:11]
  assign io_regs_15 = regs_15; // @[RegFile.scala 26:11]
  assign io_regs_16 = regs_16; // @[RegFile.scala 26:11]
  assign io_regs_17 = regs_17; // @[RegFile.scala 26:11]
  assign io_regs_18 = regs_18; // @[RegFile.scala 26:11]
  assign io_regs_19 = regs_19; // @[RegFile.scala 26:11]
  assign io_regs_20 = regs_20; // @[RegFile.scala 26:11]
  assign io_regs_21 = regs_21; // @[RegFile.scala 26:11]
  assign io_regs_22 = regs_22; // @[RegFile.scala 26:11]
  assign io_regs_23 = regs_23; // @[RegFile.scala 26:11]
  assign io_regs_24 = regs_24; // @[RegFile.scala 26:11]
  assign io_regs_25 = regs_25; // @[RegFile.scala 26:11]
  assign io_regs_26 = regs_26; // @[RegFile.scala 26:11]
  assign io_regs_27 = regs_27; // @[RegFile.scala 26:11]
  assign io_regs_28 = regs_28; // @[RegFile.scala 26:11]
  assign io_regs_29 = regs_29; // @[RegFile.scala 26:11]
  assign io_regs_30 = regs_30; // @[RegFile.scala 26:11]
  assign io_regs_31 = regs_31; // @[RegFile.scala 26:11]
  always @(posedge clock) begin
    if (reset) begin // @[RegFile.scala 16:21]
      regs_1 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h1 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_1 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_2 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h2 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_2 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_3 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h3 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_3 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_4 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h4 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_4 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_5 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h5 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_5 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_6 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h6 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_6 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_7 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h7 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_7 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_8 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h8 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_8 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_9 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h9 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_9 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_10 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'ha == io_waddr) begin // @[RegFile.scala 23:32]
        regs_10 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_11 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'hb == io_waddr) begin // @[RegFile.scala 23:32]
        regs_11 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_12 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'hc == io_waddr) begin // @[RegFile.scala 23:32]
        regs_12 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_13 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'hd == io_waddr) begin // @[RegFile.scala 23:32]
        regs_13 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_14 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'he == io_waddr) begin // @[RegFile.scala 23:32]
        regs_14 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_15 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'hf == io_waddr) begin // @[RegFile.scala 23:32]
        regs_15 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_16 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h10 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_16 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_17 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h11 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_17 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_18 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h12 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_18 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_19 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h13 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_19 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_20 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h14 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_20 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_21 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h15 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_21 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_22 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h16 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_22 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_23 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h17 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_23 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_24 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h18 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_24 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_25 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h19 == io_waddr) begin // @[RegFile.scala 23:32]
        regs_25 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_26 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h1a == io_waddr) begin // @[RegFile.scala 23:32]
        regs_26 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_27 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h1b == io_waddr) begin // @[RegFile.scala 23:32]
        regs_27 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_28 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h1c == io_waddr) begin // @[RegFile.scala 23:32]
        regs_28 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_29 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h1d == io_waddr) begin // @[RegFile.scala 23:32]
        regs_29 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_30 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h1e == io_waddr) begin // @[RegFile.scala 23:32]
        regs_30 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
    if (reset) begin // @[RegFile.scala 16:21]
      regs_31 <= 32'h0; // @[RegFile.scala 16:21]
    end else if (io_wen) begin // @[RegFile.scala 23:16]
      if (5'h1f == io_waddr) begin // @[RegFile.scala 23:32]
        regs_31 <= io_wdata; // @[RegFile.scala 23:32]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  regs_1 = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  regs_2 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  regs_3 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  regs_4 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  regs_5 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  regs_6 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  regs_7 = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  regs_8 = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  regs_9 = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  regs_10 = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  regs_11 = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  regs_12 = _RAND_11[31:0];
  _RAND_12 = {1{`RANDOM}};
  regs_13 = _RAND_12[31:0];
  _RAND_13 = {1{`RANDOM}};
  regs_14 = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  regs_15 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  regs_16 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  regs_17 = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  regs_18 = _RAND_17[31:0];
  _RAND_18 = {1{`RANDOM}};
  regs_19 = _RAND_18[31:0];
  _RAND_19 = {1{`RANDOM}};
  regs_20 = _RAND_19[31:0];
  _RAND_20 = {1{`RANDOM}};
  regs_21 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  regs_22 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  regs_23 = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  regs_24 = _RAND_23[31:0];
  _RAND_24 = {1{`RANDOM}};
  regs_25 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  regs_26 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  regs_27 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  regs_28 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  regs_29 = _RAND_28[31:0];
  _RAND_29 = {1{`RANDOM}};
  regs_30 = _RAND_29[31:0];
  _RAND_30 = {1{`RANDOM}};
  regs_31 = _RAND_30[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ImmGen(
  input  [24:0] io_inst_31_7,
  input  [2:0]  io_ImmSel,
  output [31:0] io_imm
);
  wire [31:0] inst_shift = {io_inst_31_7,7'h0}; // @[Cat.scala 33:92]
  wire [11:0] _simm_T_1 = inst_shift[31:20]; // @[ImmGen.scala 25:37]
  wire [12:0] _simm_T_7 = {inst_shift[31],inst_shift[7],inst_shift[30:25],inst_shift[11:8],1'h0}; // @[ImmGen.scala 32:28]
  wire [11:0] _simm_T_13 = {inst_shift[31],inst_shift[30:25],inst_shift[11:8],inst_shift[7]}; // @[ImmGen.scala 38:32]
  wire [31:0] _simm_T_16 = {inst_shift[31:12],12'h0}; // @[ImmGen.scala 41:52]
  wire [20:0] _simm_T_22 = {inst_shift[31],inst_shift[19:12],inst_shift[20],inst_shift[30:21],1'h0}; // @[ImmGen.scala 48:28]
  wire [11:0] _simm_T_26 = 3'h1 == io_ImmSel ? $signed(_simm_T_1) : $signed(12'sh0); // @[Mux.scala 81:58]
  wire [12:0] _simm_T_28 = 3'h3 == io_ImmSel ? $signed(_simm_T_7) : $signed({{1{_simm_T_26[11]}},_simm_T_26}); // @[Mux.scala 81:58]
  wire [12:0] _simm_T_30 = 3'h2 == io_ImmSel ? $signed({{1{_simm_T_13[11]}},_simm_T_13}) : $signed(_simm_T_28); // @[Mux.scala 81:58]
  wire [31:0] _simm_T_32 = 3'h5 == io_ImmSel ? $signed(_simm_T_16) : $signed({{19{_simm_T_30[12]}},_simm_T_30}); // @[Mux.scala 81:58]
  assign io_imm = 3'h4 == io_ImmSel ? $signed({{11{_simm_T_22[20]}},_simm_T_22}) : $signed(_simm_T_32); // @[ImmGen.scala 52:20]
endmodule
module Path_ID(
  input         clock,
  input         reset,
  input  [31:0] io_ID_inst_in,
  input  [4:0]  io_WB_index,
  input  [31:0] io_WB_wdata,
  input         io_WB_RegWEn,
  input  [2:0]  io_ImmSel,
  output [31:0] io_ID_rs1_rdata,
  output [31:0] io_ID_rs2_rdata,
  output [31:0] io_imm,
  output [31:0] io_regs_1,
  output [31:0] io_regs_2,
  output [31:0] io_regs_3,
  output [31:0] io_regs_4,
  output [31:0] io_regs_5,
  output [31:0] io_regs_6,
  output [31:0] io_regs_7,
  output [31:0] io_regs_8,
  output [31:0] io_regs_9,
  output [31:0] io_regs_10,
  output [31:0] io_regs_11,
  output [31:0] io_regs_12,
  output [31:0] io_regs_13,
  output [31:0] io_regs_14,
  output [31:0] io_regs_15,
  output [31:0] io_regs_16,
  output [31:0] io_regs_17,
  output [31:0] io_regs_18,
  output [31:0] io_regs_19,
  output [31:0] io_regs_20,
  output [31:0] io_regs_21,
  output [31:0] io_regs_22,
  output [31:0] io_regs_23,
  output [31:0] io_regs_24,
  output [31:0] io_regs_25,
  output [31:0] io_regs_26,
  output [31:0] io_regs_27,
  output [31:0] io_regs_28,
  output [31:0] io_regs_29,
  output [31:0] io_regs_30,
  output [31:0] io_regs_31
);
  wire  rf_clock; // @[Path_ID.scala 27:20]
  wire  rf_reset; // @[Path_ID.scala 27:20]
  wire  rf_io_wen; // @[Path_ID.scala 27:20]
  wire [4:0] rf_io_waddr; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_wdata; // @[Path_ID.scala 27:20]
  wire [4:0] rf_io_raddr_0; // @[Path_ID.scala 27:20]
  wire [4:0] rf_io_raddr_1; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_rdata_0; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_rdata_1; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_1; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_2; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_3; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_4; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_5; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_6; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_7; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_8; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_9; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_10; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_11; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_12; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_13; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_14; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_15; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_16; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_17; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_18; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_19; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_20; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_21; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_22; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_23; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_24; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_25; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_26; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_27; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_28; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_29; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_30; // @[Path_ID.scala 27:20]
  wire [31:0] rf_io_regs_31; // @[Path_ID.scala 27:20]
  wire [24:0] ig_io_inst_31_7; // @[Path_ID.scala 38:20]
  wire [2:0] ig_io_ImmSel; // @[Path_ID.scala 38:20]
  wire [31:0] ig_io_imm; // @[Path_ID.scala 38:20]
  RegFile rf ( // @[Path_ID.scala 27:20]
    .clock(rf_clock),
    .reset(rf_reset),
    .io_wen(rf_io_wen),
    .io_waddr(rf_io_waddr),
    .io_wdata(rf_io_wdata),
    .io_raddr_0(rf_io_raddr_0),
    .io_raddr_1(rf_io_raddr_1),
    .io_rdata_0(rf_io_rdata_0),
    .io_rdata_1(rf_io_rdata_1),
    .io_regs_1(rf_io_regs_1),
    .io_regs_2(rf_io_regs_2),
    .io_regs_3(rf_io_regs_3),
    .io_regs_4(rf_io_regs_4),
    .io_regs_5(rf_io_regs_5),
    .io_regs_6(rf_io_regs_6),
    .io_regs_7(rf_io_regs_7),
    .io_regs_8(rf_io_regs_8),
    .io_regs_9(rf_io_regs_9),
    .io_regs_10(rf_io_regs_10),
    .io_regs_11(rf_io_regs_11),
    .io_regs_12(rf_io_regs_12),
    .io_regs_13(rf_io_regs_13),
    .io_regs_14(rf_io_regs_14),
    .io_regs_15(rf_io_regs_15),
    .io_regs_16(rf_io_regs_16),
    .io_regs_17(rf_io_regs_17),
    .io_regs_18(rf_io_regs_18),
    .io_regs_19(rf_io_regs_19),
    .io_regs_20(rf_io_regs_20),
    .io_regs_21(rf_io_regs_21),
    .io_regs_22(rf_io_regs_22),
    .io_regs_23(rf_io_regs_23),
    .io_regs_24(rf_io_regs_24),
    .io_regs_25(rf_io_regs_25),
    .io_regs_26(rf_io_regs_26),
    .io_regs_27(rf_io_regs_27),
    .io_regs_28(rf_io_regs_28),
    .io_regs_29(rf_io_regs_29),
    .io_regs_30(rf_io_regs_30),
    .io_regs_31(rf_io_regs_31)
  );
  ImmGen ig ( // @[Path_ID.scala 38:20]
    .io_inst_31_7(ig_io_inst_31_7),
    .io_ImmSel(ig_io_ImmSel),
    .io_imm(ig_io_imm)
  );
  assign io_ID_rs1_rdata = rf_io_rdata_0; // @[Path_ID.scala 33:21]
  assign io_ID_rs2_rdata = rf_io_rdata_1; // @[Path_ID.scala 34:21]
  assign io_imm = ig_io_imm; // @[Path_ID.scala 41:12]
  assign io_regs_1 = rf_io_regs_1; // @[Path_ID.scala 35:13]
  assign io_regs_2 = rf_io_regs_2; // @[Path_ID.scala 35:13]
  assign io_regs_3 = rf_io_regs_3; // @[Path_ID.scala 35:13]
  assign io_regs_4 = rf_io_regs_4; // @[Path_ID.scala 35:13]
  assign io_regs_5 = rf_io_regs_5; // @[Path_ID.scala 35:13]
  assign io_regs_6 = rf_io_regs_6; // @[Path_ID.scala 35:13]
  assign io_regs_7 = rf_io_regs_7; // @[Path_ID.scala 35:13]
  assign io_regs_8 = rf_io_regs_8; // @[Path_ID.scala 35:13]
  assign io_regs_9 = rf_io_regs_9; // @[Path_ID.scala 35:13]
  assign io_regs_10 = rf_io_regs_10; // @[Path_ID.scala 35:13]
  assign io_regs_11 = rf_io_regs_11; // @[Path_ID.scala 35:13]
  assign io_regs_12 = rf_io_regs_12; // @[Path_ID.scala 35:13]
  assign io_regs_13 = rf_io_regs_13; // @[Path_ID.scala 35:13]
  assign io_regs_14 = rf_io_regs_14; // @[Path_ID.scala 35:13]
  assign io_regs_15 = rf_io_regs_15; // @[Path_ID.scala 35:13]
  assign io_regs_16 = rf_io_regs_16; // @[Path_ID.scala 35:13]
  assign io_regs_17 = rf_io_regs_17; // @[Path_ID.scala 35:13]
  assign io_regs_18 = rf_io_regs_18; // @[Path_ID.scala 35:13]
  assign io_regs_19 = rf_io_regs_19; // @[Path_ID.scala 35:13]
  assign io_regs_20 = rf_io_regs_20; // @[Path_ID.scala 35:13]
  assign io_regs_21 = rf_io_regs_21; // @[Path_ID.scala 35:13]
  assign io_regs_22 = rf_io_regs_22; // @[Path_ID.scala 35:13]
  assign io_regs_23 = rf_io_regs_23; // @[Path_ID.scala 35:13]
  assign io_regs_24 = rf_io_regs_24; // @[Path_ID.scala 35:13]
  assign io_regs_25 = rf_io_regs_25; // @[Path_ID.scala 35:13]
  assign io_regs_26 = rf_io_regs_26; // @[Path_ID.scala 35:13]
  assign io_regs_27 = rf_io_regs_27; // @[Path_ID.scala 35:13]
  assign io_regs_28 = rf_io_regs_28; // @[Path_ID.scala 35:13]
  assign io_regs_29 = rf_io_regs_29; // @[Path_ID.scala 35:13]
  assign io_regs_30 = rf_io_regs_30; // @[Path_ID.scala 35:13]
  assign io_regs_31 = rf_io_regs_31; // @[Path_ID.scala 35:13]
  assign rf_clock = clock;
  assign rf_reset = reset;
  assign rf_io_wen = io_WB_RegWEn; // @[Path_ID.scala 28:15]
  assign rf_io_waddr = io_WB_index; // @[Path_ID.scala 29:17]
  assign rf_io_wdata = io_WB_wdata; // @[Path_ID.scala 30:17]
  assign rf_io_raddr_0 = io_ID_inst_in[19:15]; // @[Path_ID.scala 23:34]
  assign rf_io_raddr_1 = io_ID_inst_in[24:20]; // @[Path_ID.scala 24:34]
  assign ig_io_inst_31_7 = io_ID_inst_in[31:7]; // @[Path_ID.scala 40:37]
  assign ig_io_ImmSel = io_ImmSel; // @[Path_ID.scala 39:18]
endmodule
module BranchComp(
  input         io_BrUn,
  input  [31:0] io_src1,
  input  [31:0] io_src2,
  output        io_BrEq,
  output        io_BrLT
);
  wire  _T = io_src1 < io_src2; // @[BranchComp.scala 20:20]
  wire  _T_3 = $signed(io_src1) < $signed(io_src2); // @[BranchComp.scala 22:27]
  assign io_BrEq = io_src1 == io_src2; // @[BranchComp.scala 25:22]
  assign io_BrLT = io_BrUn ? _T : _T_3; // @[BranchComp.scala 19:18]
endmodule
module ALU(
  input  [31:0] io_src1,
  input  [31:0] io_src2,
  input  [14:0] io_ALUSel,
  output [31:0] io_out
);
  wire [31:0] _io_out_T_1 = io_src1 + io_src2; // @[ALU.scala 35:31]
  wire [62:0] _GEN_123 = {{31'd0}, io_src1}; // @[ALU.scala 36:32]
  wire [62:0] _io_out_T_3 = _GEN_123 << io_src2[4:0]; // @[ALU.scala 36:32]
  wire [31:0] _io_out_T_4 = io_src1; // @[ALU.scala 37:36]
  wire [31:0] _io_out_T_5 = io_src2; // @[ALU.scala 37:53]
  wire  _io_out_T_6 = $signed(io_src1) < $signed(io_src2); // @[ALU.scala 37:43]
  wire  _io_out_T_8 = io_src1 < io_src2; // @[ALU.scala 38:36]
  wire [31:0] _io_out_T_10 = io_src1 ^ io_src2; // @[ALU.scala 39:32]
  wire [31:0] _io_out_T_12 = io_src1 >> io_src2[4:0]; // @[ALU.scala 40:32]
  wire [31:0] _io_out_T_13 = io_src1 | io_src2; // @[ALU.scala 41:32]
  wire [31:0] _io_out_T_14 = io_src1 & io_src2; // @[ALU.scala 42:32]
  wire [31:0] _io_out_T_16 = io_src1 - io_src2; // @[ALU.scala 43:32]
  wire [31:0] _io_out_T_20 = $signed(io_src1) >>> io_src2[4:0]; // @[ALU.scala 44:57]
  wire  _GEN_23 = 15'h3009 == io_ALUSel & io_src1[15:0] == 16'h0; // @[ALU.scala 28:13 34:20 57:17]
  wire  _GEN_32 = 15'h3001 == io_ALUSel ? io_src1[31:16] == 16'h0 : _GEN_23; // @[ALU.scala 34:20 46:17]
  wire  _GEN_42 = 15'h20fd == io_ALUSel ? 1'h0 : _GEN_32; // @[ALU.scala 28:13 34:20]
  wire  _GEN_51 = 15'h20f8 == io_ALUSel ? 1'h0 : _GEN_42; // @[ALU.scala 28:13 34:20]
  wire  _GEN_60 = 15'hff == io_ALUSel ? 1'h0 : _GEN_51; // @[ALU.scala 28:13 34:20]
  wire  _GEN_69 = 15'hfe == io_ALUSel ? 1'h0 : _GEN_60; // @[ALU.scala 28:13 34:20]
  wire  _GEN_78 = 15'hfd == io_ALUSel ? 1'h0 : _GEN_69; // @[ALU.scala 28:13 34:20]
  wire  _GEN_87 = 15'hfc == io_ALUSel ? 1'h0 : _GEN_78; // @[ALU.scala 28:13 34:20]
  wire  _GEN_96 = 15'hfb == io_ALUSel ? 1'h0 : _GEN_87; // @[ALU.scala 28:13 34:20]
  wire  _GEN_105 = 15'hfa == io_ALUSel ? 1'h0 : _GEN_96; // @[ALU.scala 28:13 34:20]
  wire  _GEN_114 = 15'hf9 == io_ALUSel ? 1'h0 : _GEN_105; // @[ALU.scala 28:13 34:20]
  wire  result__4 = 15'hf8 == io_ALUSel ? 1'h0 : _GEN_114; // @[ALU.scala 28:13 34:20]
  wire [15:0] _val16_T_2 = result__4 ? io_src1[15:0] : io_src1[31:16]; // @[ALU.scala 47:23]
  wire [15:0] _val16_T_5 = result__4 ? io_src1[31:16] : io_src1[15:0]; // @[ALU.scala 58:23]
  wire [15:0] _GEN_24 = 15'h3009 == io_ALUSel ? _val16_T_5 : 16'h0; // @[ALU.scala 29:10 34:20 58:17]
  wire [15:0] _GEN_33 = 15'h3001 == io_ALUSel ? _val16_T_2 : _GEN_24; // @[ALU.scala 34:20 47:17]
  wire [15:0] _GEN_43 = 15'h20fd == io_ALUSel ? 16'h0 : _GEN_33; // @[ALU.scala 29:10 34:20]
  wire [15:0] _GEN_52 = 15'h20f8 == io_ALUSel ? 16'h0 : _GEN_43; // @[ALU.scala 29:10 34:20]
  wire [15:0] _GEN_61 = 15'hff == io_ALUSel ? 16'h0 : _GEN_52; // @[ALU.scala 29:10 34:20]
  wire [15:0] _GEN_70 = 15'hfe == io_ALUSel ? 16'h0 : _GEN_61; // @[ALU.scala 29:10 34:20]
  wire [15:0] _GEN_79 = 15'hfd == io_ALUSel ? 16'h0 : _GEN_70; // @[ALU.scala 29:10 34:20]
  wire [15:0] _GEN_88 = 15'hfc == io_ALUSel ? 16'h0 : _GEN_79; // @[ALU.scala 29:10 34:20]
  wire [15:0] _GEN_97 = 15'hfb == io_ALUSel ? 16'h0 : _GEN_88; // @[ALU.scala 29:10 34:20]
  wire [15:0] _GEN_106 = 15'hfa == io_ALUSel ? 16'h0 : _GEN_97; // @[ALU.scala 29:10 34:20]
  wire [15:0] _GEN_115 = 15'hf9 == io_ALUSel ? 16'h0 : _GEN_106; // @[ALU.scala 29:10 34:20]
  wire [15:0] val16 = 15'hf8 == io_ALUSel ? 16'h0 : _GEN_115; // @[ALU.scala 29:10 34:20]
  wire  _GEN_25 = 15'h3009 == io_ALUSel & val16[7:0] == 8'h0; // @[ALU.scala 27:13 34:20 59:17]
  wire  _GEN_34 = 15'h3001 == io_ALUSel ? val16[15:8] == 8'h0 : _GEN_25; // @[ALU.scala 34:20 48:17]
  wire  _GEN_44 = 15'h20fd == io_ALUSel ? 1'h0 : _GEN_34; // @[ALU.scala 27:13 34:20]
  wire  _GEN_53 = 15'h20f8 == io_ALUSel ? 1'h0 : _GEN_44; // @[ALU.scala 27:13 34:20]
  wire  _GEN_62 = 15'hff == io_ALUSel ? 1'h0 : _GEN_53; // @[ALU.scala 27:13 34:20]
  wire  _GEN_71 = 15'hfe == io_ALUSel ? 1'h0 : _GEN_62; // @[ALU.scala 27:13 34:20]
  wire  _GEN_80 = 15'hfd == io_ALUSel ? 1'h0 : _GEN_71; // @[ALU.scala 27:13 34:20]
  wire  _GEN_89 = 15'hfc == io_ALUSel ? 1'h0 : _GEN_80; // @[ALU.scala 27:13 34:20]
  wire  _GEN_98 = 15'hfb == io_ALUSel ? 1'h0 : _GEN_89; // @[ALU.scala 27:13 34:20]
  wire  _GEN_107 = 15'hfa == io_ALUSel ? 1'h0 : _GEN_98; // @[ALU.scala 27:13 34:20]
  wire  _GEN_116 = 15'hf9 == io_ALUSel ? 1'h0 : _GEN_107; // @[ALU.scala 27:13 34:20]
  wire  result__3 = 15'hf8 == io_ALUSel ? 1'h0 : _GEN_116; // @[ALU.scala 27:13 34:20]
  wire [7:0] _val8_T_2 = result__3 ? val16[7:0] : val16[15:8]; // @[ALU.scala 49:23]
  wire [7:0] _val8_T_5 = result__3 ? val16[15:8] : val16[7:0]; // @[ALU.scala 60:23]
  wire [7:0] _GEN_26 = 15'h3009 == io_ALUSel ? _val8_T_5 : 8'h0; // @[ALU.scala 30:10 34:20 60:17]
  wire [7:0] _GEN_35 = 15'h3001 == io_ALUSel ? _val8_T_2 : _GEN_26; // @[ALU.scala 34:20 49:17]
  wire [7:0] _GEN_45 = 15'h20fd == io_ALUSel ? 8'h0 : _GEN_35; // @[ALU.scala 30:10 34:20]
  wire [7:0] _GEN_54 = 15'h20f8 == io_ALUSel ? 8'h0 : _GEN_45; // @[ALU.scala 30:10 34:20]
  wire [7:0] _GEN_63 = 15'hff == io_ALUSel ? 8'h0 : _GEN_54; // @[ALU.scala 30:10 34:20]
  wire [7:0] _GEN_72 = 15'hfe == io_ALUSel ? 8'h0 : _GEN_63; // @[ALU.scala 30:10 34:20]
  wire [7:0] _GEN_81 = 15'hfd == io_ALUSel ? 8'h0 : _GEN_72; // @[ALU.scala 30:10 34:20]
  wire [7:0] _GEN_90 = 15'hfc == io_ALUSel ? 8'h0 : _GEN_81; // @[ALU.scala 30:10 34:20]
  wire [7:0] _GEN_99 = 15'hfb == io_ALUSel ? 8'h0 : _GEN_90; // @[ALU.scala 30:10 34:20]
  wire [7:0] _GEN_108 = 15'hfa == io_ALUSel ? 8'h0 : _GEN_99; // @[ALU.scala 30:10 34:20]
  wire [7:0] _GEN_117 = 15'hf9 == io_ALUSel ? 8'h0 : _GEN_108; // @[ALU.scala 30:10 34:20]
  wire [7:0] val8 = 15'hf8 == io_ALUSel ? 8'h0 : _GEN_117; // @[ALU.scala 30:10 34:20]
  wire  _GEN_27 = 15'h3009 == io_ALUSel & val8[3:0] == 4'h0; // @[ALU.scala 26:13 34:20 61:17]
  wire  _GEN_36 = 15'h3001 == io_ALUSel ? val8[7:4] == 4'h0 : _GEN_27; // @[ALU.scala 34:20 50:17]
  wire  _GEN_46 = 15'h20fd == io_ALUSel ? 1'h0 : _GEN_36; // @[ALU.scala 26:13 34:20]
  wire  _GEN_55 = 15'h20f8 == io_ALUSel ? 1'h0 : _GEN_46; // @[ALU.scala 26:13 34:20]
  wire  _GEN_64 = 15'hff == io_ALUSel ? 1'h0 : _GEN_55; // @[ALU.scala 26:13 34:20]
  wire  _GEN_73 = 15'hfe == io_ALUSel ? 1'h0 : _GEN_64; // @[ALU.scala 26:13 34:20]
  wire  _GEN_82 = 15'hfd == io_ALUSel ? 1'h0 : _GEN_73; // @[ALU.scala 26:13 34:20]
  wire  _GEN_91 = 15'hfc == io_ALUSel ? 1'h0 : _GEN_82; // @[ALU.scala 26:13 34:20]
  wire  _GEN_100 = 15'hfb == io_ALUSel ? 1'h0 : _GEN_91; // @[ALU.scala 26:13 34:20]
  wire  _GEN_109 = 15'hfa == io_ALUSel ? 1'h0 : _GEN_100; // @[ALU.scala 26:13 34:20]
  wire  _GEN_118 = 15'hf9 == io_ALUSel ? 1'h0 : _GEN_109; // @[ALU.scala 26:13 34:20]
  wire  result__2 = 15'hf8 == io_ALUSel ? 1'h0 : _GEN_118; // @[ALU.scala 26:13 34:20]
  wire [3:0] _val4_T_2 = result__2 ? val8[3:0] : val8[7:4]; // @[ALU.scala 51:23]
  wire [3:0] _val4_T_5 = result__2 ? val8[7:4] : val8[3:0]; // @[ALU.scala 62:23]
  wire [3:0] _GEN_28 = 15'h3009 == io_ALUSel ? _val4_T_5 : 4'h0; // @[ALU.scala 31:10 34:20 62:17]
  wire [3:0] _GEN_37 = 15'h3001 == io_ALUSel ? _val4_T_2 : _GEN_28; // @[ALU.scala 34:20 51:17]
  wire [3:0] _GEN_47 = 15'h20fd == io_ALUSel ? 4'h0 : _GEN_37; // @[ALU.scala 31:10 34:20]
  wire [3:0] _GEN_56 = 15'h20f8 == io_ALUSel ? 4'h0 : _GEN_47; // @[ALU.scala 31:10 34:20]
  wire [3:0] _GEN_65 = 15'hff == io_ALUSel ? 4'h0 : _GEN_56; // @[ALU.scala 31:10 34:20]
  wire [3:0] _GEN_74 = 15'hfe == io_ALUSel ? 4'h0 : _GEN_65; // @[ALU.scala 31:10 34:20]
  wire [3:0] _GEN_83 = 15'hfd == io_ALUSel ? 4'h0 : _GEN_74; // @[ALU.scala 31:10 34:20]
  wire [3:0] _GEN_92 = 15'hfc == io_ALUSel ? 4'h0 : _GEN_83; // @[ALU.scala 31:10 34:20]
  wire [3:0] _GEN_101 = 15'hfb == io_ALUSel ? 4'h0 : _GEN_92; // @[ALU.scala 31:10 34:20]
  wire [3:0] _GEN_110 = 15'hfa == io_ALUSel ? 4'h0 : _GEN_101; // @[ALU.scala 31:10 34:20]
  wire [3:0] _GEN_119 = 15'hf9 == io_ALUSel ? 4'h0 : _GEN_110; // @[ALU.scala 31:10 34:20]
  wire [3:0] val4 = 15'hf8 == io_ALUSel ? 4'h0 : _GEN_119; // @[ALU.scala 31:10 34:20]
  wire  _GEN_29 = 15'h3009 == io_ALUSel & val4[1:0] == 2'h0; // @[ALU.scala 25:13 34:20 63:17]
  wire  _GEN_38 = 15'h3001 == io_ALUSel ? val4[3:2] == 2'h0 : _GEN_29; // @[ALU.scala 34:20 52:17]
  wire  _GEN_48 = 15'h20fd == io_ALUSel ? 1'h0 : _GEN_38; // @[ALU.scala 25:13 34:20]
  wire  _GEN_57 = 15'h20f8 == io_ALUSel ? 1'h0 : _GEN_48; // @[ALU.scala 25:13 34:20]
  wire  _GEN_66 = 15'hff == io_ALUSel ? 1'h0 : _GEN_57; // @[ALU.scala 25:13 34:20]
  wire  _GEN_75 = 15'hfe == io_ALUSel ? 1'h0 : _GEN_66; // @[ALU.scala 25:13 34:20]
  wire  _GEN_84 = 15'hfd == io_ALUSel ? 1'h0 : _GEN_75; // @[ALU.scala 25:13 34:20]
  wire  _GEN_93 = 15'hfc == io_ALUSel ? 1'h0 : _GEN_84; // @[ALU.scala 25:13 34:20]
  wire  _GEN_102 = 15'hfb == io_ALUSel ? 1'h0 : _GEN_93; // @[ALU.scala 25:13 34:20]
  wire  _GEN_111 = 15'hfa == io_ALUSel ? 1'h0 : _GEN_102; // @[ALU.scala 25:13 34:20]
  wire  _GEN_120 = 15'hf9 == io_ALUSel ? 1'h0 : _GEN_111; // @[ALU.scala 25:13 34:20]
  wire  result__1 = 15'hf8 == io_ALUSel ? 1'h0 : _GEN_120; // @[ALU.scala 25:13 34:20]
  wire  _result_0_T_4 = result__1 ? ~val4[1] : ~val4[3]; // @[ALU.scala 53:23]
  wire  _result_0_T_7 = result__1 ? val4[3] : val4[1]; // @[ALU.scala 64:23]
  wire  _GEN_30 = 15'h3009 == io_ALUSel & _result_0_T_7; // @[ALU.scala 24:13 34:20 64:17]
  wire  _GEN_39 = 15'h3001 == io_ALUSel ? _result_0_T_4 : _GEN_30; // @[ALU.scala 34:20 53:17]
  wire  _GEN_49 = 15'h20fd == io_ALUSel ? 1'h0 : _GEN_39; // @[ALU.scala 24:13 34:20]
  wire  _GEN_58 = 15'h20f8 == io_ALUSel ? 1'h0 : _GEN_49; // @[ALU.scala 24:13 34:20]
  wire  _GEN_67 = 15'hff == io_ALUSel ? 1'h0 : _GEN_58; // @[ALU.scala 24:13 34:20]
  wire  _GEN_76 = 15'hfe == io_ALUSel ? 1'h0 : _GEN_67; // @[ALU.scala 24:13 34:20]
  wire  _GEN_85 = 15'hfd == io_ALUSel ? 1'h0 : _GEN_76; // @[ALU.scala 24:13 34:20]
  wire  _GEN_94 = 15'hfc == io_ALUSel ? 1'h0 : _GEN_85; // @[ALU.scala 24:13 34:20]
  wire  _GEN_103 = 15'hfb == io_ALUSel ? 1'h0 : _GEN_94; // @[ALU.scala 24:13 34:20]
  wire  _GEN_112 = 15'hfa == io_ALUSel ? 1'h0 : _GEN_103; // @[ALU.scala 24:13 34:20]
  wire  _GEN_121 = 15'hf9 == io_ALUSel ? 1'h0 : _GEN_112; // @[ALU.scala 24:13 34:20]
  wire  result__0 = 15'hf8 == io_ALUSel ? 1'h0 : _GEN_121; // @[ALU.scala 24:13 34:20]
  wire [4:0] _io_out_T_21 = {result__4,result__3,result__2,result__1,result__0}; // @[Cat.scala 33:92]
  wire [1:0] _result_T_32 = io_src1[0] + io_src1[1]; // @[Bitwise.scala 51:90]
  wire [1:0] _result_T_34 = io_src1[2] + io_src1[3]; // @[Bitwise.scala 51:90]
  wire [2:0] _result_T_36 = _result_T_32 + _result_T_34; // @[Bitwise.scala 51:90]
  wire [1:0] _result_T_38 = io_src1[4] + io_src1[5]; // @[Bitwise.scala 51:90]
  wire [1:0] _result_T_40 = io_src1[6] + io_src1[7]; // @[Bitwise.scala 51:90]
  wire [2:0] _result_T_42 = _result_T_38 + _result_T_40; // @[Bitwise.scala 51:90]
  wire [3:0] _result_T_44 = _result_T_36 + _result_T_42; // @[Bitwise.scala 51:90]
  wire [1:0] _result_T_46 = io_src1[8] + io_src1[9]; // @[Bitwise.scala 51:90]
  wire [1:0] _result_T_48 = io_src1[10] + io_src1[11]; // @[Bitwise.scala 51:90]
  wire [2:0] _result_T_50 = _result_T_46 + _result_T_48; // @[Bitwise.scala 51:90]
  wire [1:0] _result_T_52 = io_src1[12] + io_src1[13]; // @[Bitwise.scala 51:90]
  wire [1:0] _result_T_54 = io_src1[14] + io_src1[15]; // @[Bitwise.scala 51:90]
  wire [2:0] _result_T_56 = _result_T_52 + _result_T_54; // @[Bitwise.scala 51:90]
  wire [3:0] _result_T_58 = _result_T_50 + _result_T_56; // @[Bitwise.scala 51:90]
  wire [4:0] _result_T_60 = _result_T_44 + _result_T_58; // @[Bitwise.scala 51:90]
  wire [1:0] _result_T_62 = io_src1[16] + io_src1[17]; // @[Bitwise.scala 51:90]
  wire [1:0] _result_T_64 = io_src1[18] + io_src1[19]; // @[Bitwise.scala 51:90]
  wire [2:0] _result_T_66 = _result_T_62 + _result_T_64; // @[Bitwise.scala 51:90]
  wire [1:0] _result_T_68 = io_src1[20] + io_src1[21]; // @[Bitwise.scala 51:90]
  wire [1:0] _result_T_70 = io_src1[22] + io_src1[23]; // @[Bitwise.scala 51:90]
  wire [2:0] _result_T_72 = _result_T_68 + _result_T_70; // @[Bitwise.scala 51:90]
  wire [3:0] _result_T_74 = _result_T_66 + _result_T_72; // @[Bitwise.scala 51:90]
  wire [1:0] _result_T_76 = io_src1[24] + io_src1[25]; // @[Bitwise.scala 51:90]
  wire [1:0] _result_T_78 = io_src1[26] + io_src1[27]; // @[Bitwise.scala 51:90]
  wire [2:0] _result_T_80 = _result_T_76 + _result_T_78; // @[Bitwise.scala 51:90]
  wire [1:0] _result_T_82 = io_src1[28] + io_src1[29]; // @[Bitwise.scala 51:90]
  wire [1:0] _result_T_84 = io_src1[30] + io_src1[31]; // @[Bitwise.scala 51:90]
  wire [2:0] _result_T_86 = _result_T_82 + _result_T_84; // @[Bitwise.scala 51:90]
  wire [3:0] _result_T_88 = _result_T_80 + _result_T_86; // @[Bitwise.scala 51:90]
  wire [4:0] _result_T_90 = _result_T_74 + _result_T_88; // @[Bitwise.scala 51:90]
  wire [5:0] _result_T_92 = _result_T_60 + _result_T_90; // @[Bitwise.scala 51:90]
  wire [31:0] _io_out_T_23 = ~io_src2; // @[ALU.scala 72:34]
  wire [31:0] _io_out_T_24 = io_src1 & _io_out_T_23; // @[ALU.scala 72:32]
  wire [31:0] _io_out_T_26 = io_src1 | _io_out_T_23; // @[ALU.scala 73:32]
  wire [31:0] _io_out_T_28 = io_src1 ^ _io_out_T_23; // @[ALU.scala 74:32]
  wire [31:0] _io_out_T_32 = _io_out_T_6 ? io_src1 : io_src2; // @[ALU.scala 75:27]
  wire [31:0] _io_out_T_36 = _io_out_T_6 ? io_src2 : io_src1; // @[ALU.scala 76:27]
  wire [31:0] _io_out_T_38 = _io_out_T_8 ? io_src1 : io_src2; // @[ALU.scala 77:27]
  wire [31:0] _io_out_T_40 = _io_out_T_8 ? io_src2 : io_src1; // @[ALU.scala 78:27]
  wire [23:0] _io_out_T_43 = io_src1[7] ? 24'hffffff : 24'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_out_T_45 = {_io_out_T_43,io_src1[7:0]}; // @[Cat.scala 33:92]
  wire [15:0] _io_out_T_48 = io_src1[15] ? 16'hffff : 16'h0; // @[Bitwise.scala 77:12]
  wire [31:0] _io_out_T_50 = {_io_out_T_48,io_src1[15:0]}; // @[Cat.scala 33:92]
  wire [31:0] _io_out_T_53 = 32'h1 << io_src2[4:0]; // @[ALU.scala 81:40]
  wire [31:0] _io_out_T_54 = io_src1 | _io_out_T_53; // @[ALU.scala 81:33]
  wire [31:0] _io_out_T_58 = ~_io_out_T_53; // @[ALU.scala 82:35]
  wire [31:0] _io_out_T_59 = io_src1 & _io_out_T_58; // @[ALU.scala 82:33]
  wire [31:0] _io_out_T_63 = io_src1 ^ _io_out_T_53; // @[ALU.scala 84:33]
  wire [5:0] _GEN_131 = {{1'd0}, io_src2[4:0]}; // @[ALU.scala 86:80]
  wire [5:0] _io_out_T_74 = 6'h20 - _GEN_131; // @[ALU.scala 86:80]
  wire [94:0] _GEN_124 = {{63'd0}, io_src1}; // @[ALU.scala 86:71]
  wire [94:0] _io_out_T_75 = _GEN_124 << _io_out_T_74; // @[ALU.scala 86:71]
  wire [94:0] _GEN_132 = {{63'd0}, _io_out_T_12}; // @[ALU.scala 86:60]
  wire [94:0] _io_out_T_76 = _GEN_132 | _io_out_T_75; // @[ALU.scala 86:60]
  wire [31:0] _io_out_T_84 = io_src1 >> _io_out_T_74; // @[ALU.scala 87:71]
  wire [62:0] _GEN_134 = {{31'd0}, _io_out_T_84}; // @[ALU.scala 87:60]
  wire [62:0] _io_out_T_85 = _io_out_T_3 | _GEN_134; // @[ALU.scala 87:60]
  wire [32:0] _io_out_T_86 = {io_src1, 1'h0}; // @[ALU.scala 88:45]
  wire [32:0] _GEN_135 = {{1'd0}, io_src2}; // @[ALU.scala 88:34]
  wire [32:0] _io_out_T_88 = _GEN_135 + _io_out_T_86; // @[ALU.scala 88:34]
  wire [33:0] _GEN_136 = {io_src1, 2'h0}; // @[ALU.scala 89:45]
  wire [34:0] _io_out_T_89 = {{1'd0}, _GEN_136}; // @[ALU.scala 89:45]
  wire [34:0] _GEN_137 = {{3'd0}, io_src2}; // @[ALU.scala 89:34]
  wire [34:0] _io_out_T_91 = _GEN_137 + _io_out_T_89; // @[ALU.scala 89:34]
  wire [34:0] _io_out_T_92 = {io_src1, 3'h0}; // @[ALU.scala 90:45]
  wire [34:0] _io_out_T_94 = _GEN_137 + _io_out_T_92; // @[ALU.scala 90:34]
  wire [31:0] _io_out_T_99 = {io_src1[7:0],io_src1[15:8],io_src1[23:16],io_src1[31:24]}; // @[Cat.scala 33:92]
  wire [31:0] _io_out_T_100 = io_src1 & 32'hffff; // @[ALU.scala 92:34]
  wire [7:0] _io_out_T_104 = io_src1[31:24] == 8'h0 ? 8'h0 : 8'hff; // @[ALU.scala 94:10]
  wire [7:0] _io_out_T_108 = io_src1[23:16] == 8'h0 ? 8'h0 : 8'hff; // @[ALU.scala 95:10]
  wire [7:0] _io_out_T_112 = io_src1[15:8] == 8'h0 ? 8'h0 : 8'hff; // @[ALU.scala 96:10]
  wire [7:0] _io_out_T_116 = io_src1[7:0] == 8'h0 ? 8'h0 : 8'hff; // @[ALU.scala 97:10]
  wire [31:0] _io_out_T_117 = {_io_out_T_104,_io_out_T_108,_io_out_T_112,_io_out_T_116}; // @[Cat.scala 33:92]
  wire [63:0] _io_out_T_118 = io_src1 * io_src2; // @[ALU.scala 100:33]
  wire [63:0] _GEN_0 = 15'h1f8 == io_ALUSel ? _io_out_T_118 : 64'h0; // @[ALU.scala 34:20 100:22 33:10]
  wire [63:0] _GEN_1 = 15'h143d == io_ALUSel ? {{32'd0}, _io_out_T_117} : _GEN_0; // @[ALU.scala 34:20 93:23]
  wire [63:0] _GEN_2 = 15'h404 == io_ALUSel ? {{32'd0}, _io_out_T_100} : _GEN_1; // @[ALU.scala 34:20 92:23]
  wire [63:0] _GEN_3 = 15'h34c5 == io_ALUSel ? {{32'd0}, _io_out_T_99} : _GEN_2; // @[ALU.scala 34:20 91:23]
  wire [63:0] _GEN_4 = 15'h10fe == io_ALUSel ? {{29'd0}, _io_out_T_94} : _GEN_3; // @[ALU.scala 34:20 90:23]
  wire [63:0] _GEN_5 = 15'h10fc == io_ALUSel ? {{29'd0}, _io_out_T_91} : _GEN_4; // @[ALU.scala 34:20 89:23]
  wire [63:0] _GEN_6 = 15'h10fa == io_ALUSel ? {{31'd0}, _io_out_T_88} : _GEN_5; // @[ALU.scala 34:20 88:23]
  wire [63:0] _GEN_7 = 15'h30f9 == io_ALUSel ? {{1'd0}, _io_out_T_85} : _GEN_6; // @[ALU.scala 34:20 87:22]
  wire [94:0] _GEN_8 = 15'h30fd == io_ALUSel ? _io_out_T_76 : {{31'd0}, _GEN_7}; // @[ALU.scala 34:20 86:22]
  wire [94:0] _GEN_9 = 15'h24fd == io_ALUSel ? {{94'd0}, _io_out_T_12[0]} : _GEN_8; // @[ALU.scala 34:20 85:22]
  wire [94:0] _GEN_10 = 15'h34f9 == io_ALUSel ? {{63'd0}, _io_out_T_63} : _GEN_9; // @[ALU.scala 34:20 84:22]
  wire [94:0] _GEN_11 = 15'h24f9 == io_ALUSel ? {{63'd0}, _io_out_T_59} : _GEN_10; // @[ALU.scala 34:20 82:22]
  wire [94:0] _GEN_12 = 15'h14f9 == io_ALUSel ? {{63'd0}, _io_out_T_54} : _GEN_11; // @[ALU.scala 34:20 81:22]
  wire [94:0] _GEN_13 = 15'h3029 == io_ALUSel ? {{63'd0}, _io_out_T_50} : _GEN_12; // @[ALU.scala 34:20 80:23]
  wire [94:0] _GEN_14 = 15'h3021 == io_ALUSel ? {{63'd0}, _io_out_T_45} : _GEN_13; // @[ALU.scala 34:20 79:23]
  wire [94:0] _GEN_15 = 15'h5ff == io_ALUSel ? {{63'd0}, _io_out_T_40} : _GEN_14; // @[ALU.scala 34:20 78:21]
  wire [94:0] _GEN_16 = 15'h5fd == io_ALUSel ? {{63'd0}, _io_out_T_38} : _GEN_15; // @[ALU.scala 34:20 77:21]
  wire [94:0] _GEN_17 = 15'h5fe == io_ALUSel ? {{63'd0}, _io_out_T_36} : _GEN_16; // @[ALU.scala 34:20 76:21]
  wire [94:0] _GEN_18 = 15'h5fc == io_ALUSel ? {{63'd0}, _io_out_T_32} : _GEN_17; // @[ALU.scala 34:20 75:21]
  wire [94:0] _GEN_19 = 15'h20fc == io_ALUSel ? {{63'd0}, _io_out_T_28} : _GEN_18; // @[ALU.scala 34:20 74:21]
  wire [94:0] _GEN_20 = 15'h20fe == io_ALUSel ? {{63'd0}, _io_out_T_26} : _GEN_19; // @[ALU.scala 34:20 73:21]
  wire [94:0] _GEN_21 = 15'h20ff == io_ALUSel ? {{63'd0}, _io_out_T_24} : _GEN_20; // @[ALU.scala 34:20 72:21]
  wire [4:0] result_1 = _result_T_92[4:0]; // @[ALU.scala 68:24 69:14]
  wire [94:0] _GEN_22 = 15'h3011 == io_ALUSel ? {{90'd0}, result_1} : _GEN_21; // @[ALU.scala 34:20 70:14]
  wire [94:0] _GEN_31 = 15'h3009 == io_ALUSel ? {{90'd0}, _io_out_T_21} : _GEN_22; // @[ALU.scala 34:20 65:14]
  wire [94:0] _GEN_40 = 15'h3001 == io_ALUSel ? {{90'd0}, _io_out_T_21} : _GEN_31; // @[ALU.scala 34:20 54:14]
  wire [94:0] _GEN_41 = 15'h20fd == io_ALUSel ? {{63'd0}, _io_out_T_20} : _GEN_40; // @[ALU.scala 34:20 44:21]
  wire [94:0] _GEN_50 = 15'h20f8 == io_ALUSel ? {{63'd0}, _io_out_T_16} : _GEN_41; // @[ALU.scala 34:20 43:21]
  wire [94:0] _GEN_59 = 15'hff == io_ALUSel ? {{63'd0}, _io_out_T_14} : _GEN_50; // @[ALU.scala 34:20 42:21]
  wire [94:0] _GEN_68 = 15'hfe == io_ALUSel ? {{63'd0}, _io_out_T_13} : _GEN_59; // @[ALU.scala 34:20 41:21]
  wire [94:0] _GEN_77 = 15'hfd == io_ALUSel ? {{63'd0}, _io_out_T_12} : _GEN_68; // @[ALU.scala 34:20 40:21]
  wire [94:0] _GEN_86 = 15'hfc == io_ALUSel ? {{63'd0}, _io_out_T_10} : _GEN_77; // @[ALU.scala 34:20 39:21]
  wire [94:0] _GEN_95 = 15'hfb == io_ALUSel ? {{94'd0}, io_src1 < io_src2} : _GEN_86; // @[ALU.scala 34:20 38:21]
  wire [94:0] _GEN_104 = 15'hfa == io_ALUSel ? {{94'd0}, $signed(_io_out_T_4) < $signed(_io_out_T_5)} : _GEN_95; // @[ALU.scala 34:20 37:21]
  wire [94:0] _GEN_113 = 15'hf9 == io_ALUSel ? {{32'd0}, _io_out_T_3} : _GEN_104; // @[ALU.scala 34:20 36:21]
  wire [94:0] _GEN_122 = 15'hf8 == io_ALUSel ? {{63'd0}, _io_out_T_1} : _GEN_113; // @[ALU.scala 34:20 35:21]
  assign io_out = _GEN_122[31:0];
endmodule
module Path_EXE(
  input  [14:0] io_EXE_pc_in,
  input  [31:0] io_EXE_imm_in,
  input  [31:0] io_EXE_rs1_rdata_in,
  input  [31:0] io_EXE_rs2_rdata_in,
  input  [1:0]  io_E_ASel,
  input         io_E_BSel,
  input         io_E_BrUn,
  input  [14:0] io_E_ALUSel,
  output [14:0] io_EXE_target_pc_out,
  output [31:0] io_EXE_alu_out,
  output [31:0] io_EXE_rs2_rdata_out,
  output        io_E_BrEq,
  output        io_E_BrLT,
  output [31:0] io_alu_src1,
  output [31:0] io_alu_src2,
  output [31:0] io_EXE_src1,
  output [31:0] io_EXE_src2
);
  wire  bc_io_BrUn; // @[Path_EXE.scala 36:20]
  wire [31:0] bc_io_src1; // @[Path_EXE.scala 36:20]
  wire [31:0] bc_io_src2; // @[Path_EXE.scala 36:20]
  wire  bc_io_BrEq; // @[Path_EXE.scala 36:20]
  wire  bc_io_BrLT; // @[Path_EXE.scala 36:20]
  wire [31:0] alu_io_src1; // @[Path_EXE.scala 44:21]
  wire [31:0] alu_io_src2; // @[Path_EXE.scala 44:21]
  wire [14:0] alu_io_ALUSel; // @[Path_EXE.scala 44:21]
  wire [31:0] alu_io_out; // @[Path_EXE.scala 44:21]
  wire [31:0] _alu_src1_T_3 = 2'h1 == io_E_ASel ? {{17'd0}, io_EXE_pc_in} : io_EXE_rs1_rdata_in; // @[Mux.scala 81:58]
  BranchComp bc ( // @[Path_EXE.scala 36:20]
    .io_BrUn(bc_io_BrUn),
    .io_src1(bc_io_src1),
    .io_src2(bc_io_src2),
    .io_BrEq(bc_io_BrEq),
    .io_BrLT(bc_io_BrLT)
  );
  ALU alu ( // @[Path_EXE.scala 44:21]
    .io_src1(alu_io_src1),
    .io_src2(alu_io_src2),
    .io_ALUSel(alu_io_ALUSel),
    .io_out(alu_io_out)
  );
  assign io_EXE_target_pc_out = alu_io_out[14:0]; // @[Path_EXE.scala 61:39]
  assign io_EXE_alu_out = alu_io_out; // @[Path_EXE.scala 57:20]
  assign io_EXE_rs2_rdata_out = io_EXE_rs2_rdata_in; // @[Path_EXE.scala 60:26]
  assign io_E_BrEq = bc_io_BrEq; // @[Path_EXE.scala 40:15]
  assign io_E_BrLT = bc_io_BrLT; // @[Path_EXE.scala 41:15]
  assign io_alu_src1 = 2'h2 == io_E_ASel ? 32'h0 : _alu_src1_T_3; // @[Mux.scala 81:58]
  assign io_alu_src2 = io_E_BSel ? io_EXE_imm_in : io_EXE_rs2_rdata_in; // @[Mux.scala 81:58]
  assign io_EXE_src1 = io_EXE_rs1_rdata_in; // @[Path_EXE.scala 64:17]
  assign io_EXE_src2 = io_EXE_rs2_rdata_in; // @[Path_EXE.scala 65:17]
  assign bc_io_BrUn = io_E_BrUn; // @[Path_EXE.scala 37:16]
  assign bc_io_src1 = io_EXE_rs1_rdata_in; // @[Path_EXE.scala 38:16]
  assign bc_io_src2 = io_EXE_rs2_rdata_in; // @[Path_EXE.scala 39:16]
  assign alu_io_src1 = 2'h2 == io_E_ASel ? 32'h0 : _alu_src1_T_3; // @[Mux.scala 81:58]
  assign alu_io_src2 = io_E_BSel ? io_EXE_imm_in : io_EXE_rs2_rdata_in; // @[Mux.scala 81:58]
  assign alu_io_ALUSel = io_E_ALUSel; // @[Path_EXE.scala 56:19]
endmodule
module Path_MEM(
  input  [14:0] io_MEM_pc_in,
  input  [31:0] io_MEM_alu_out_in,
  input  [31:0] io_MEM_DM_wdata_in,
  output [14:0] io_MEM_pc_plus_4,
  output [31:0] io_MEM_alu_out,
  output [31:0] io_MEM_ld_data,
  output [14:0] io_Mem_Addr,
  output [31:0] io_Mem_Write_Data,
  input  [31:0] io_Mem_Data
);
  assign io_MEM_pc_plus_4 = io_MEM_pc_in + 15'h4; // @[Path_MEM.scala 24:38]
  assign io_MEM_alu_out = io_MEM_alu_out_in; // @[Path_MEM.scala 32:20]
  assign io_MEM_ld_data = io_Mem_Data; // @[Path_MEM.scala 29:20]
  assign io_Mem_Addr = io_MEM_alu_out_in[14:0]; // @[Path_MEM.scala 27:37]
  assign io_Mem_Write_Data = io_MEM_DM_wdata_in; // @[Path_MEM.scala 28:23]
endmodule
module Path_WB(
  input  [14:0] io_WB_pc_plus4_in,
  input  [31:0] io_WB_alu_out_in,
  input  [31:0] io_WB_ld_data_in,
  input  [1:0]  io_W_WBSel,
  output [31:0] io_WB_wdata
);
  wire [14:0] _io_WB_wdata_T_1 = 2'h0 == io_W_WBSel ? io_WB_pc_plus4_in : 15'h0; // @[Mux.scala 81:58]
  wire [31:0] _io_WB_wdata_T_3 = 2'h1 == io_W_WBSel ? io_WB_alu_out_in : {{17'd0}, _io_WB_wdata_T_1}; // @[Mux.scala 81:58]
  assign io_WB_wdata = 2'h2 == io_W_WBSel ? io_WB_ld_data_in : _io_WB_wdata_T_3; // @[Mux.scala 81:58]
endmodule
module Controller(
  output        io_DM_Mem_R,
  output        io_DM_Mem_W,
  input         io_E_BrEq,
  input         io_E_BrLT,
  output        io_E_Branch_taken,
  input  [14:0] io_ID_pc,
  input  [14:0] io_EXE_target_pc,
  output        io_Flush_DH,
  output        io_Flush_BH,
  output        io_Stall_DH,
  output        io_Stall_MA,
  input  [31:0] io_IF_Inst,
  input  [31:0] io_ID_Inst,
  input  [31:0] io_EXE_Inst,
  input  [31:0] io_MEM_Inst,
  input  [31:0] io_WB_Inst,
  output [1:0]  io_PCSel,
  output [2:0]  io_D_ImmSel,
  output        io_W_RegWEn,
  output        io_E_BrUn,
  output [1:0]  io_E_ASel,
  output        io_E_BSel,
  output [14:0] io_E_ALUSel,
  output [1:0]  io_W_WBSel,
  output        io_Hcf
);
  wire [6:0] IF_opcode = io_IF_Inst[6:0]; // @[Controller.scala 67:29]
  wire [6:0] ID_opcode = io_ID_Inst[6:0]; // @[Controller.scala 69:29]
  wire [4:0] ID_rs1 = io_ID_Inst[19:15]; // @[Controller.scala 70:26]
  wire [4:0] ID_rs2 = io_ID_Inst[24:20]; // @[Controller.scala 71:26]
  wire [6:0] EXE_opcode = io_EXE_Inst[6:0]; // @[Controller.scala 74:31]
  wire [2:0] EXE_funct3 = io_EXE_Inst[14:12]; // @[Controller.scala 75:31]
  wire [6:0] EXE_funct7 = io_EXE_Inst[31:25]; // @[Controller.scala 76:31]
  wire [4:0] EXE_rd = io_EXE_Inst[11:7]; // @[Controller.scala 77:27]
  wire [4:0] EXE_rs2 = io_EXE_Inst[24:20]; // @[Controller.scala 79:28]
  wire [6:0] MEM_opcode = io_MEM_Inst[6:0]; // @[Controller.scala 81:31]
  wire [4:0] MEM_rd = io_MEM_Inst[11:7]; // @[Controller.scala 83:27]
  wire [6:0] WB_opcode = io_WB_Inst[6:0]; // @[Controller.scala 85:29]
  wire [4:0] WB_rd = io_WB_Inst[11:7]; // @[Controller.scala 86:25]
  wire  E_En = EXE_opcode == 7'h63 | EXE_opcode == 7'h6f | EXE_opcode == 7'h67; // @[Controller.scala 90:52]
  wire  _E_Branch_taken_T = ~io_E_BrEq; // @[Controller.scala 95:20]
  wire  _E_Branch_taken_T_1 = ~io_E_BrLT; // @[Controller.scala 97:20]
  wire  _E_Branch_taken_T_6 = 3'h1 == EXE_funct3 ? _E_Branch_taken_T : 3'h0 == EXE_funct3 & io_E_BrEq; // @[Mux.scala 81:58]
  wire  _E_Branch_taken_T_8 = 3'h4 == EXE_funct3 ? io_E_BrLT : _E_Branch_taken_T_6; // @[Mux.scala 81:58]
  wire  _E_Branch_taken_T_10 = 3'h5 == EXE_funct3 ? _E_Branch_taken_T_1 : _E_Branch_taken_T_8; // @[Mux.scala 81:58]
  wire  _E_Branch_taken_T_12 = 3'h6 == EXE_funct3 ? io_E_BrLT : _E_Branch_taken_T_10; // @[Mux.scala 81:58]
  wire  _E_Branch_taken_T_14 = 3'h7 == EXE_funct3 ? _E_Branch_taken_T_1 : _E_Branch_taken_T_12; // @[Mux.scala 81:58]
  wire  E_Branch_taken = 7'h67 == EXE_opcode | (7'h6f == EXE_opcode | 7'h63 == EXE_opcode & _E_Branch_taken_T_14); // @[Mux.scala 81:58]
  wire  Predict_Miss = E_En & E_Branch_taken & io_ID_pc != io_EXE_target_pc; // @[Controller.scala 110:43]
  wire  _io_D_ImmSel_T_5 = 7'h3 == ID_opcode | (7'h67 == ID_opcode | 7'h13 == ID_opcode); // @[Mux.scala 81:58]
  wire [1:0] _io_D_ImmSel_T_7 = 7'h63 == ID_opcode ? 2'h3 : {{1'd0}, _io_D_ImmSel_T_5}; // @[Mux.scala 81:58]
  wire [1:0] _io_D_ImmSel_T_9 = 7'h23 == ID_opcode ? 2'h2 : _io_D_ImmSel_T_7; // @[Mux.scala 81:58]
  wire [2:0] _io_D_ImmSel_T_11 = 7'h37 == ID_opcode ? 3'h5 : {{1'd0}, _io_D_ImmSel_T_9}; // @[Mux.scala 81:58]
  wire [2:0] _io_D_ImmSel_T_13 = 7'h17 == ID_opcode ? 3'h5 : _io_D_ImmSel_T_11; // @[Mux.scala 81:58]
  wire  _io_E_ASel_T_5 = 7'h6f == EXE_opcode | (7'h63 == EXE_opcode | 7'h17 == EXE_opcode); // @[Mux.scala 81:58]
  wire [9:0] _EXE_funct5_T = {EXE_funct7,EXE_funct3}; // @[Cat.scala 33:92]
  wire [4:0] _EXE_funct5_T_2 = 10'h181 == _EXE_funct5_T ? EXE_rs2 : 5'h1f; // @[Mux.scala 81:58]
  wire [4:0] _EXE_funct5_T_4 = 10'h1a5 == _EXE_funct5_T ? EXE_rs2 : _EXE_funct5_T_2; // @[Mux.scala 81:58]
  wire [4:0] EXE_funct5 = 10'ha5 == _EXE_funct5_T ? EXE_rs2 : _EXE_funct5_T_4; // @[Mux.scala 81:58]
  wire  use_funct7 = EXE_funct3 == 3'h1 | EXE_funct3 == 3'h5; // @[Controller.scala 155:42]
  wire  zext_check = EXE_funct3 == 3'h4 & EXE_funct7 == 7'h4 & EXE_rs2 == 5'h0; // @[Controller.scala 157:73]
  wire [4:0] _io_E_ALUSel_T_1 = zext_check ? EXE_rs2 : 5'h1f; // @[Controller.scala 161:31]
  wire [14:0] _io_E_ALUSel_T_2 = {EXE_funct7,_io_E_ALUSel_T_1,EXE_funct3}; // @[Cat.scala 33:92]
  wire [14:0] _io_E_ALUSel_T_3 = {EXE_funct7,EXE_funct5,EXE_funct3}; // @[Cat.scala 33:92]
  wire [14:0] _io_E_ALUSel_T_4 = {7'h0,EXE_funct5,EXE_funct3}; // @[Cat.scala 33:92]
  wire [14:0] _io_E_ALUSel_T_5 = use_funct7 ? _io_E_ALUSel_T_3 : _io_E_ALUSel_T_4; // @[Controller.scala 162:18]
  wire [14:0] _io_E_ALUSel_T_7 = 7'h33 == EXE_opcode ? _io_E_ALUSel_T_2 : 15'hf8; // @[Mux.scala 81:58]
  wire  _io_DM_Mem_R_T = MEM_opcode == 7'h3; // @[Controller.scala 166:29]
  wire  _io_DM_Mem_W_T = MEM_opcode == 7'h23; // @[Controller.scala 167:29]
  wire  _io_W_RegWEn_T_1 = 7'h63 == WB_opcode ? 1'h0 : 1'h1; // @[Mux.scala 81:58]
  wire  _io_W_RegWEn_T_3 = 7'h23 == WB_opcode ? 1'h0 : _io_W_RegWEn_T_1; // @[Mux.scala 81:58]
  wire  _io_W_RegWEn_T_5 = 7'hb == WB_opcode ? 1'h0 : _io_W_RegWEn_T_3; // @[Mux.scala 81:58]
  wire [1:0] _io_W_WBSel_T_1 = 7'h3 == WB_opcode ? 2'h2 : 2'h1; // @[Mux.scala 81:58]
  wire [1:0] _io_W_WBSel_T_3 = 7'h6f == WB_opcode ? 2'h0 : _io_W_WBSel_T_1; // @[Mux.scala 81:58]
  wire  _is_D_use_rs1_T_1 = 7'h6f == ID_opcode ? 1'h0 : 1'h1; // @[Mux.scala 81:58]
  wire  _is_D_use_rs1_T_3 = 7'h37 == ID_opcode ? 1'h0 : _is_D_use_rs1_T_1; // @[Mux.scala 81:58]
  wire  _is_D_use_rs1_T_5 = 7'h17 == ID_opcode ? 1'h0 : _is_D_use_rs1_T_3; // @[Mux.scala 81:58]
  wire  is_D_use_rs1 = 7'hb == ID_opcode ? 1'h0 : _is_D_use_rs1_T_5; // @[Mux.scala 81:58]
  wire  is_D_use_rs2 = 7'h23 == ID_opcode | (7'h33 == ID_opcode | 7'h63 == ID_opcode); // @[Mux.scala 81:58]
  wire  _is_M_use_rd_T_1 = 7'h63 == MEM_opcode ? 1'h0 : 1'h1; // @[Mux.scala 81:58]
  wire  _is_M_use_rd_T_3 = 7'h23 == MEM_opcode ? 1'h0 : _is_M_use_rd_T_1; // @[Mux.scala 81:58]
  wire  is_M_use_rd = 7'hb == MEM_opcode ? 1'h0 : _is_M_use_rd_T_3; // @[Mux.scala 81:58]
  wire  _is_E_use_rd_T_1 = 7'h63 == EXE_opcode ? 1'h0 : 1'h1; // @[Mux.scala 81:58]
  wire  _is_E_use_rd_T_3 = 7'h23 == EXE_opcode ? 1'h0 : _is_E_use_rd_T_1; // @[Mux.scala 81:58]
  wire  is_E_use_rd = 7'hb == EXE_opcode ? 1'h0 : _is_E_use_rd_T_3; // @[Mux.scala 81:58]
  wire  _is_D_rs1_W_rd_overlap_T_3 = WB_rd != 5'h0; // @[Controller.scala 247:88]
  wire  is_D_rs1_W_rd_overlap = is_D_use_rs1 & _io_W_RegWEn_T_5 & ID_rs1 == WB_rd & WB_rd != 5'h0; // @[Controller.scala 247:78]
  wire  is_D_rs2_W_rd_overlap = is_D_use_rs2 & _io_W_RegWEn_T_5 & ID_rs2 == WB_rd & _is_D_rs1_W_rd_overlap_T_3; // @[Controller.scala 248:78]
  wire  _is_D_rs1_M_rd_overlap_T_3 = MEM_rd != 5'h0; // @[Controller.scala 252:90]
  wire  is_D_rs1_M_rd_overlap = is_D_use_rs1 & is_M_use_rd & ID_rs1 == MEM_rd & MEM_rd != 5'h0; // @[Controller.scala 252:79]
  wire  is_D_rs2_M_rd_overlap = is_D_use_rs2 & is_M_use_rd & ID_rs2 == MEM_rd & _is_D_rs1_M_rd_overlap_T_3; // @[Controller.scala 253:79]
  wire  _is_D_rs1_E_rd_overlap_T_3 = EXE_rd != 5'h0; // @[Controller.scala 257:90]
  wire  is_D_rs1_E_rd_overlap = is_D_use_rs1 & is_E_use_rd & ID_rs1 == EXE_rd & EXE_rd != 5'h0; // @[Controller.scala 257:79]
  wire  is_D_rs2_E_rd_overlap = is_D_use_rs2 & is_E_use_rd & ID_rs2 == EXE_rd & _is_D_rs1_E_rd_overlap_T_3; // @[Controller.scala 258:79]
  wire  _io_Stall_DH_T_1 = is_D_rs1_E_rd_overlap | is_D_rs2_E_rd_overlap; // @[Controller.scala 263:41]
  wire  _io_Stall_DH_T_2 = is_D_rs1_W_rd_overlap | is_D_rs2_W_rd_overlap | _io_Stall_DH_T_1; // @[Controller.scala 262:67]
  wire  _io_Stall_DH_T_3 = is_D_rs1_M_rd_overlap | is_D_rs2_M_rd_overlap; // @[Controller.scala 264:41]
  assign io_DM_Mem_R = MEM_opcode == 7'h3; // @[Controller.scala 166:29]
  assign io_DM_Mem_W = MEM_opcode == 7'h23; // @[Controller.scala 167:29]
  assign io_E_Branch_taken = 7'h67 == EXE_opcode | (7'h6f == EXE_opcode | 7'h63 == EXE_opcode & _E_Branch_taken_T_14); // @[Mux.scala 81:58]
  assign io_Flush_DH = _io_Stall_DH_T_2 | _io_Stall_DH_T_3; // @[Controller.scala 277:67]
  assign io_Flush_BH = E_En & E_Branch_taken & io_ID_pc != io_EXE_target_pc; // @[Controller.scala 110:43]
  assign io_Stall_DH = _io_Stall_DH_T_2 | _io_Stall_DH_T_3; // @[Controller.scala 263:67]
  assign io_Stall_MA = _io_DM_Mem_R_T | _io_DM_Mem_W_T; // @[Controller.scala 273:29]
  assign io_PCSel = Predict_Miss ? 2'h2 : 2'h0; // @[Controller.scala 113:21 114:14 116:14]
  assign io_D_ImmSel = 7'h6f == ID_opcode ? 3'h4 : _io_D_ImmSel_T_13; // @[Mux.scala 81:58]
  assign io_W_RegWEn = 7'hb == WB_opcode ? 1'h0 : _io_W_RegWEn_T_3; // @[Mux.scala 81:58]
  assign io_E_BrUn = io_EXE_Inst[13]; // @[Controller.scala 120:28]
  assign io_E_ASel = 7'h37 == EXE_opcode ? 2'h2 : {{1'd0}, _io_E_ASel_T_5}; // @[Mux.scala 81:58]
  assign io_E_BSel = EXE_opcode == 7'h33 ? 1'h0 : 1'h1; // @[Controller.scala 144:19]
  assign io_E_ALUSel = 7'h13 == EXE_opcode ? _io_E_ALUSel_T_5 : _io_E_ALUSel_T_7; // @[Mux.scala 81:58]
  assign io_W_WBSel = 7'h67 == WB_opcode ? 2'h0 : _io_W_WBSel_T_3; // @[Mux.scala 81:58]
  assign io_Hcf = IF_opcode == 7'hb; // @[Controller.scala 191:24]
endmodule
module PiplinedCPU(
  input         clock,
  input         reset,
  output [14:0] io_InstMem_raddr,
  input  [31:0] io_InstMem_rdata,
  input         io_DataMem_aw_ready,
  output        io_DataMem_aw_valid,
  input         io_DataMem_w_ready,
  output        io_DataMem_w_valid,
  output [31:0] io_DataMem_w_bits_data,
  output        io_DataMem_b_ready,
  input         io_DataMem_b_valid,
  input         io_DataMem_ar_ready,
  output        io_DataMem_ar_valid,
  output        io_DataMem_r_ready,
  input  [31:0] io_DataMem_r_bits_data,
  output [31:0] io_regs_1,
  output [31:0] io_regs_2,
  output [31:0] io_regs_3,
  output [31:0] io_regs_4,
  output [31:0] io_regs_5,
  output [31:0] io_regs_6,
  output [31:0] io_regs_7,
  output [31:0] io_regs_8,
  output [31:0] io_regs_9,
  output [31:0] io_regs_10,
  output [31:0] io_regs_11,
  output [31:0] io_regs_12,
  output [31:0] io_regs_13,
  output [31:0] io_regs_14,
  output [31:0] io_regs_15,
  output [31:0] io_regs_16,
  output [31:0] io_regs_17,
  output [31:0] io_regs_18,
  output [31:0] io_regs_19,
  output [31:0] io_regs_20,
  output [31:0] io_regs_21,
  output [31:0] io_regs_22,
  output [31:0] io_regs_23,
  output [31:0] io_regs_24,
  output [31:0] io_regs_25,
  output [31:0] io_regs_26,
  output [31:0] io_regs_27,
  output [31:0] io_regs_28,
  output [31:0] io_regs_29,
  output [31:0] io_regs_30,
  output [31:0] io_regs_31,
  output        io_Hcf,
  output        io_E_Branch_taken,
  output        io_Flush,
  output        io_Stall_MA,
  output        io_Stall_DH,
  output [14:0] io_IF_PC,
  output [14:0] io_ID_PC,
  output [14:0] io_EXE_PC,
  output [14:0] io_MEM_PC,
  output [14:0] io_WB_PC,
  output [31:0] io_EXE_src1,
  output [31:0] io_EXE_src2,
  output [31:0] io_ALU_src1,
  output [31:0] io_ALU_src2,
  output [14:0] io_raddr,
  output [31:0] io_EXE_alu_out,
  output [4:0]  io_WB_rd,
  output [31:0] io_WB_wdata,
  output        io_EXE_Jump,
  output        io_EXE_Branch
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire  stage_IF_clock; // @[PiplinedCPU.scala 49:26]
  wire  stage_IF_reset; // @[PiplinedCPU.scala 49:26]
  wire  stage_IF_io_Stall; // @[PiplinedCPU.scala 49:26]
  wire [14:0] stage_IF_io_next_pc_in; // @[PiplinedCPU.scala 49:26]
  wire [14:0] stage_IF_io_pc; // @[PiplinedCPU.scala 49:26]
  wire  stage_ID_clock; // @[PiplinedCPU.scala 50:26]
  wire  stage_ID_reset; // @[PiplinedCPU.scala 50:26]
  wire  stage_ID_io_Flush; // @[PiplinedCPU.scala 50:26]
  wire  stage_ID_io_Stall; // @[PiplinedCPU.scala 50:26]
  wire [14:0] stage_ID_io_pc_in; // @[PiplinedCPU.scala 50:26]
  wire [31:0] stage_ID_io_inst_in; // @[PiplinedCPU.scala 50:26]
  wire [14:0] stage_ID_io_pc; // @[PiplinedCPU.scala 50:26]
  wire [31:0] stage_ID_io_inst; // @[PiplinedCPU.scala 50:26]
  wire  stage_EXE_clock; // @[PiplinedCPU.scala 51:27]
  wire  stage_EXE_reset; // @[PiplinedCPU.scala 51:27]
  wire  stage_EXE_io_Flush; // @[PiplinedCPU.scala 51:27]
  wire  stage_EXE_io_Stall; // @[PiplinedCPU.scala 51:27]
  wire [31:0] stage_EXE_io_inst_in; // @[PiplinedCPU.scala 51:27]
  wire [14:0] stage_EXE_io_pc_in; // @[PiplinedCPU.scala 51:27]
  wire [31:0] stage_EXE_io_rs1_rdata_in; // @[PiplinedCPU.scala 51:27]
  wire [31:0] stage_EXE_io_rs2_rdata_in; // @[PiplinedCPU.scala 51:27]
  wire [31:0] stage_EXE_io_imm_in; // @[PiplinedCPU.scala 51:27]
  wire [31:0] stage_EXE_io_inst; // @[PiplinedCPU.scala 51:27]
  wire [14:0] stage_EXE_io_pc; // @[PiplinedCPU.scala 51:27]
  wire [31:0] stage_EXE_io_rs1_rdata; // @[PiplinedCPU.scala 51:27]
  wire [31:0] stage_EXE_io_rs2_rdata; // @[PiplinedCPU.scala 51:27]
  wire [31:0] stage_EXE_io_imm; // @[PiplinedCPU.scala 51:27]
  wire  stage_MEM_clock; // @[PiplinedCPU.scala 52:27]
  wire  stage_MEM_reset; // @[PiplinedCPU.scala 52:27]
  wire  stage_MEM_io_Stall; // @[PiplinedCPU.scala 52:27]
  wire [14:0] stage_MEM_io_pc_in; // @[PiplinedCPU.scala 52:27]
  wire [31:0] stage_MEM_io_inst_in; // @[PiplinedCPU.scala 52:27]
  wire [31:0] stage_MEM_io_alu_out_in; // @[PiplinedCPU.scala 52:27]
  wire [31:0] stage_MEM_io_DM_wdata_in; // @[PiplinedCPU.scala 52:27]
  wire [14:0] stage_MEM_io_pc; // @[PiplinedCPU.scala 52:27]
  wire [31:0] stage_MEM_io_inst; // @[PiplinedCPU.scala 52:27]
  wire [31:0] stage_MEM_io_alu_out; // @[PiplinedCPU.scala 52:27]
  wire [31:0] stage_MEM_io_DM_wdata; // @[PiplinedCPU.scala 52:27]
  wire  stage_WB_clock; // @[PiplinedCPU.scala 53:26]
  wire  stage_WB_reset; // @[PiplinedCPU.scala 53:26]
  wire  stage_WB_io_Stall; // @[PiplinedCPU.scala 53:26]
  wire [14:0] stage_WB_io_pc_plus4_in; // @[PiplinedCPU.scala 53:26]
  wire [31:0] stage_WB_io_inst_in; // @[PiplinedCPU.scala 53:26]
  wire [31:0] stage_WB_io_alu_out_in; // @[PiplinedCPU.scala 53:26]
  wire [31:0] stage_WB_io_ld_data_in; // @[PiplinedCPU.scala 53:26]
  wire [14:0] stage_WB_io_pc_plus4; // @[PiplinedCPU.scala 53:26]
  wire [31:0] stage_WB_io_inst; // @[PiplinedCPU.scala 53:26]
  wire [31:0] stage_WB_io_alu_out; // @[PiplinedCPU.scala 53:26]
  wire [31:0] stage_WB_io_ld_data; // @[PiplinedCPU.scala 53:26]
  wire [1:0] datapath_IF_io_PCSel; // @[PiplinedCPU.scala 56:29]
  wire [14:0] datapath_IF_io_IF_pc_in; // @[PiplinedCPU.scala 56:29]
  wire [14:0] datapath_IF_io_EXE_pc_in; // @[PiplinedCPU.scala 56:29]
  wire [14:0] datapath_IF_io_EXE_target_pc_in; // @[PiplinedCPU.scala 56:29]
  wire [31:0] datapath_IF_io_Mem_data; // @[PiplinedCPU.scala 56:29]
  wire [14:0] datapath_IF_io_next_pc; // @[PiplinedCPU.scala 56:29]
  wire [14:0] datapath_IF_io_Mem_Addr; // @[PiplinedCPU.scala 56:29]
  wire [31:0] datapath_IF_io_inst; // @[PiplinedCPU.scala 56:29]
  wire  datapath_ID_clock; // @[PiplinedCPU.scala 57:29]
  wire  datapath_ID_reset; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_ID_inst_in; // @[PiplinedCPU.scala 57:29]
  wire [4:0] datapath_ID_io_WB_index; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_WB_wdata; // @[PiplinedCPU.scala 57:29]
  wire  datapath_ID_io_WB_RegWEn; // @[PiplinedCPU.scala 57:29]
  wire [2:0] datapath_ID_io_ImmSel; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_ID_rs1_rdata; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_ID_rs2_rdata; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_imm; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_1; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_2; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_3; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_4; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_5; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_6; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_7; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_8; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_9; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_10; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_11; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_12; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_13; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_14; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_15; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_16; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_17; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_18; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_19; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_20; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_21; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_22; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_23; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_24; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_25; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_26; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_27; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_28; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_29; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_30; // @[PiplinedCPU.scala 57:29]
  wire [31:0] datapath_ID_io_regs_31; // @[PiplinedCPU.scala 57:29]
  wire [14:0] datapath_EXE_io_EXE_pc_in; // @[PiplinedCPU.scala 58:30]
  wire [31:0] datapath_EXE_io_EXE_imm_in; // @[PiplinedCPU.scala 58:30]
  wire [31:0] datapath_EXE_io_EXE_rs1_rdata_in; // @[PiplinedCPU.scala 58:30]
  wire [31:0] datapath_EXE_io_EXE_rs2_rdata_in; // @[PiplinedCPU.scala 58:30]
  wire [1:0] datapath_EXE_io_E_ASel; // @[PiplinedCPU.scala 58:30]
  wire  datapath_EXE_io_E_BSel; // @[PiplinedCPU.scala 58:30]
  wire  datapath_EXE_io_E_BrUn; // @[PiplinedCPU.scala 58:30]
  wire [14:0] datapath_EXE_io_E_ALUSel; // @[PiplinedCPU.scala 58:30]
  wire [14:0] datapath_EXE_io_EXE_target_pc_out; // @[PiplinedCPU.scala 58:30]
  wire [31:0] datapath_EXE_io_EXE_alu_out; // @[PiplinedCPU.scala 58:30]
  wire [31:0] datapath_EXE_io_EXE_rs2_rdata_out; // @[PiplinedCPU.scala 58:30]
  wire  datapath_EXE_io_E_BrEq; // @[PiplinedCPU.scala 58:30]
  wire  datapath_EXE_io_E_BrLT; // @[PiplinedCPU.scala 58:30]
  wire [31:0] datapath_EXE_io_alu_src1; // @[PiplinedCPU.scala 58:30]
  wire [31:0] datapath_EXE_io_alu_src2; // @[PiplinedCPU.scala 58:30]
  wire [31:0] datapath_EXE_io_EXE_src1; // @[PiplinedCPU.scala 58:30]
  wire [31:0] datapath_EXE_io_EXE_src2; // @[PiplinedCPU.scala 58:30]
  wire [14:0] datapath_MEM_io_MEM_pc_in; // @[PiplinedCPU.scala 59:30]
  wire [31:0] datapath_MEM_io_MEM_alu_out_in; // @[PiplinedCPU.scala 59:30]
  wire [31:0] datapath_MEM_io_MEM_DM_wdata_in; // @[PiplinedCPU.scala 59:30]
  wire [14:0] datapath_MEM_io_MEM_pc_plus_4; // @[PiplinedCPU.scala 59:30]
  wire [31:0] datapath_MEM_io_MEM_alu_out; // @[PiplinedCPU.scala 59:30]
  wire [31:0] datapath_MEM_io_MEM_ld_data; // @[PiplinedCPU.scala 59:30]
  wire [14:0] datapath_MEM_io_Mem_Addr; // @[PiplinedCPU.scala 59:30]
  wire [31:0] datapath_MEM_io_Mem_Write_Data; // @[PiplinedCPU.scala 59:30]
  wire [31:0] datapath_MEM_io_Mem_Data; // @[PiplinedCPU.scala 59:30]
  wire [14:0] datapath_WB_io_WB_pc_plus4_in; // @[PiplinedCPU.scala 60:29]
  wire [31:0] datapath_WB_io_WB_alu_out_in; // @[PiplinedCPU.scala 60:29]
  wire [31:0] datapath_WB_io_WB_ld_data_in; // @[PiplinedCPU.scala 60:29]
  wire [1:0] datapath_WB_io_W_WBSel; // @[PiplinedCPU.scala 60:29]
  wire [31:0] datapath_WB_io_WB_wdata; // @[PiplinedCPU.scala 60:29]
  wire  contorller_io_DM_Mem_R; // @[PiplinedCPU.scala 63:28]
  wire  contorller_io_DM_Mem_W; // @[PiplinedCPU.scala 63:28]
  wire  contorller_io_E_BrEq; // @[PiplinedCPU.scala 63:28]
  wire  contorller_io_E_BrLT; // @[PiplinedCPU.scala 63:28]
  wire  contorller_io_E_Branch_taken; // @[PiplinedCPU.scala 63:28]
  wire [14:0] contorller_io_ID_pc; // @[PiplinedCPU.scala 63:28]
  wire [14:0] contorller_io_EXE_target_pc; // @[PiplinedCPU.scala 63:28]
  wire  contorller_io_Flush_DH; // @[PiplinedCPU.scala 63:28]
  wire  contorller_io_Flush_BH; // @[PiplinedCPU.scala 63:28]
  wire  contorller_io_Stall_DH; // @[PiplinedCPU.scala 63:28]
  wire  contorller_io_Stall_MA; // @[PiplinedCPU.scala 63:28]
  wire [31:0] contorller_io_IF_Inst; // @[PiplinedCPU.scala 63:28]
  wire [31:0] contorller_io_ID_Inst; // @[PiplinedCPU.scala 63:28]
  wire [31:0] contorller_io_EXE_Inst; // @[PiplinedCPU.scala 63:28]
  wire [31:0] contorller_io_MEM_Inst; // @[PiplinedCPU.scala 63:28]
  wire [31:0] contorller_io_WB_Inst; // @[PiplinedCPU.scala 63:28]
  wire [1:0] contorller_io_PCSel; // @[PiplinedCPU.scala 63:28]
  wire [2:0] contorller_io_D_ImmSel; // @[PiplinedCPU.scala 63:28]
  wire  contorller_io_W_RegWEn; // @[PiplinedCPU.scala 63:28]
  wire  contorller_io_E_BrUn; // @[PiplinedCPU.scala 63:28]
  wire [1:0] contorller_io_E_ASel; // @[PiplinedCPU.scala 63:28]
  wire  contorller_io_E_BSel; // @[PiplinedCPU.scala 63:28]
  wire [14:0] contorller_io_E_ALUSel; // @[PiplinedCPU.scala 63:28]
  wire [1:0] contorller_io_W_WBSel; // @[PiplinedCPU.scala 63:28]
  wire  contorller_io_Hcf; // @[PiplinedCPU.scala 63:28]
  wire  _stage_IF_io_Stall_T = contorller_io_Hcf | contorller_io_Stall_DH; // @[PiplinedCPU.scala 67:44]
  reg [1:0] mReadState; // @[PiplinedCPU.scala 136:30]
  reg [1:0] mWriteState; // @[PiplinedCPU.scala 137:30]
  wire [1:0] _GEN_8 = io_DataMem_w_ready ? 2'h3 : mWriteState; // @[PiplinedCPU.scala 168:38 169:29 137:30]
  wire [1:0] _GEN_9 = io_DataMem_b_valid ? 2'h0 : mWriteState; // @[PiplinedCPU.scala 173:38 174:29 137:30]
  wire [1:0] _GEN_10 = 2'h3 == mWriteState ? _GEN_9 : mWriteState; // @[PiplinedCPU.scala 156:25 137:30]
  wire  _io_DataMem_w_valid_T = mWriteState == 2'h2; // @[PiplinedCPU.scala 207:43]
  wire [14:0] _io_WB_PC_T_2 = stage_WB_io_pc_plus4 - 15'h4; // @[PiplinedCPU.scala 268:70]
  Reg_IF stage_IF ( // @[PiplinedCPU.scala 49:26]
    .clock(stage_IF_clock),
    .reset(stage_IF_reset),
    .io_Stall(stage_IF_io_Stall),
    .io_next_pc_in(stage_IF_io_next_pc_in),
    .io_pc(stage_IF_io_pc)
  );
  Reg_ID stage_ID ( // @[PiplinedCPU.scala 50:26]
    .clock(stage_ID_clock),
    .reset(stage_ID_reset),
    .io_Flush(stage_ID_io_Flush),
    .io_Stall(stage_ID_io_Stall),
    .io_pc_in(stage_ID_io_pc_in),
    .io_inst_in(stage_ID_io_inst_in),
    .io_pc(stage_ID_io_pc),
    .io_inst(stage_ID_io_inst)
  );
  Reg_EXE stage_EXE ( // @[PiplinedCPU.scala 51:27]
    .clock(stage_EXE_clock),
    .reset(stage_EXE_reset),
    .io_Flush(stage_EXE_io_Flush),
    .io_Stall(stage_EXE_io_Stall),
    .io_inst_in(stage_EXE_io_inst_in),
    .io_pc_in(stage_EXE_io_pc_in),
    .io_rs1_rdata_in(stage_EXE_io_rs1_rdata_in),
    .io_rs2_rdata_in(stage_EXE_io_rs2_rdata_in),
    .io_imm_in(stage_EXE_io_imm_in),
    .io_inst(stage_EXE_io_inst),
    .io_pc(stage_EXE_io_pc),
    .io_rs1_rdata(stage_EXE_io_rs1_rdata),
    .io_rs2_rdata(stage_EXE_io_rs2_rdata),
    .io_imm(stage_EXE_io_imm)
  );
  Reg_MEM stage_MEM ( // @[PiplinedCPU.scala 52:27]
    .clock(stage_MEM_clock),
    .reset(stage_MEM_reset),
    .io_Stall(stage_MEM_io_Stall),
    .io_pc_in(stage_MEM_io_pc_in),
    .io_inst_in(stage_MEM_io_inst_in),
    .io_alu_out_in(stage_MEM_io_alu_out_in),
    .io_DM_wdata_in(stage_MEM_io_DM_wdata_in),
    .io_pc(stage_MEM_io_pc),
    .io_inst(stage_MEM_io_inst),
    .io_alu_out(stage_MEM_io_alu_out),
    .io_DM_wdata(stage_MEM_io_DM_wdata)
  );
  Reg_WB stage_WB ( // @[PiplinedCPU.scala 53:26]
    .clock(stage_WB_clock),
    .reset(stage_WB_reset),
    .io_Stall(stage_WB_io_Stall),
    .io_pc_plus4_in(stage_WB_io_pc_plus4_in),
    .io_inst_in(stage_WB_io_inst_in),
    .io_alu_out_in(stage_WB_io_alu_out_in),
    .io_ld_data_in(stage_WB_io_ld_data_in),
    .io_pc_plus4(stage_WB_io_pc_plus4),
    .io_inst(stage_WB_io_inst),
    .io_alu_out(stage_WB_io_alu_out),
    .io_ld_data(stage_WB_io_ld_data)
  );
  Path_IF datapath_IF ( // @[PiplinedCPU.scala 56:29]
    .io_PCSel(datapath_IF_io_PCSel),
    .io_IF_pc_in(datapath_IF_io_IF_pc_in),
    .io_EXE_pc_in(datapath_IF_io_EXE_pc_in),
    .io_EXE_target_pc_in(datapath_IF_io_EXE_target_pc_in),
    .io_Mem_data(datapath_IF_io_Mem_data),
    .io_next_pc(datapath_IF_io_next_pc),
    .io_Mem_Addr(datapath_IF_io_Mem_Addr),
    .io_inst(datapath_IF_io_inst)
  );
  Path_ID datapath_ID ( // @[PiplinedCPU.scala 57:29]
    .clock(datapath_ID_clock),
    .reset(datapath_ID_reset),
    .io_ID_inst_in(datapath_ID_io_ID_inst_in),
    .io_WB_index(datapath_ID_io_WB_index),
    .io_WB_wdata(datapath_ID_io_WB_wdata),
    .io_WB_RegWEn(datapath_ID_io_WB_RegWEn),
    .io_ImmSel(datapath_ID_io_ImmSel),
    .io_ID_rs1_rdata(datapath_ID_io_ID_rs1_rdata),
    .io_ID_rs2_rdata(datapath_ID_io_ID_rs2_rdata),
    .io_imm(datapath_ID_io_imm),
    .io_regs_1(datapath_ID_io_regs_1),
    .io_regs_2(datapath_ID_io_regs_2),
    .io_regs_3(datapath_ID_io_regs_3),
    .io_regs_4(datapath_ID_io_regs_4),
    .io_regs_5(datapath_ID_io_regs_5),
    .io_regs_6(datapath_ID_io_regs_6),
    .io_regs_7(datapath_ID_io_regs_7),
    .io_regs_8(datapath_ID_io_regs_8),
    .io_regs_9(datapath_ID_io_regs_9),
    .io_regs_10(datapath_ID_io_regs_10),
    .io_regs_11(datapath_ID_io_regs_11),
    .io_regs_12(datapath_ID_io_regs_12),
    .io_regs_13(datapath_ID_io_regs_13),
    .io_regs_14(datapath_ID_io_regs_14),
    .io_regs_15(datapath_ID_io_regs_15),
    .io_regs_16(datapath_ID_io_regs_16),
    .io_regs_17(datapath_ID_io_regs_17),
    .io_regs_18(datapath_ID_io_regs_18),
    .io_regs_19(datapath_ID_io_regs_19),
    .io_regs_20(datapath_ID_io_regs_20),
    .io_regs_21(datapath_ID_io_regs_21),
    .io_regs_22(datapath_ID_io_regs_22),
    .io_regs_23(datapath_ID_io_regs_23),
    .io_regs_24(datapath_ID_io_regs_24),
    .io_regs_25(datapath_ID_io_regs_25),
    .io_regs_26(datapath_ID_io_regs_26),
    .io_regs_27(datapath_ID_io_regs_27),
    .io_regs_28(datapath_ID_io_regs_28),
    .io_regs_29(datapath_ID_io_regs_29),
    .io_regs_30(datapath_ID_io_regs_30),
    .io_regs_31(datapath_ID_io_regs_31)
  );
  Path_EXE datapath_EXE ( // @[PiplinedCPU.scala 58:30]
    .io_EXE_pc_in(datapath_EXE_io_EXE_pc_in),
    .io_EXE_imm_in(datapath_EXE_io_EXE_imm_in),
    .io_EXE_rs1_rdata_in(datapath_EXE_io_EXE_rs1_rdata_in),
    .io_EXE_rs2_rdata_in(datapath_EXE_io_EXE_rs2_rdata_in),
    .io_E_ASel(datapath_EXE_io_E_ASel),
    .io_E_BSel(datapath_EXE_io_E_BSel),
    .io_E_BrUn(datapath_EXE_io_E_BrUn),
    .io_E_ALUSel(datapath_EXE_io_E_ALUSel),
    .io_EXE_target_pc_out(datapath_EXE_io_EXE_target_pc_out),
    .io_EXE_alu_out(datapath_EXE_io_EXE_alu_out),
    .io_EXE_rs2_rdata_out(datapath_EXE_io_EXE_rs2_rdata_out),
    .io_E_BrEq(datapath_EXE_io_E_BrEq),
    .io_E_BrLT(datapath_EXE_io_E_BrLT),
    .io_alu_src1(datapath_EXE_io_alu_src1),
    .io_alu_src2(datapath_EXE_io_alu_src2),
    .io_EXE_src1(datapath_EXE_io_EXE_src1),
    .io_EXE_src2(datapath_EXE_io_EXE_src2)
  );
  Path_MEM datapath_MEM ( // @[PiplinedCPU.scala 59:30]
    .io_MEM_pc_in(datapath_MEM_io_MEM_pc_in),
    .io_MEM_alu_out_in(datapath_MEM_io_MEM_alu_out_in),
    .io_MEM_DM_wdata_in(datapath_MEM_io_MEM_DM_wdata_in),
    .io_MEM_pc_plus_4(datapath_MEM_io_MEM_pc_plus_4),
    .io_MEM_alu_out(datapath_MEM_io_MEM_alu_out),
    .io_MEM_ld_data(datapath_MEM_io_MEM_ld_data),
    .io_Mem_Addr(datapath_MEM_io_Mem_Addr),
    .io_Mem_Write_Data(datapath_MEM_io_Mem_Write_Data),
    .io_Mem_Data(datapath_MEM_io_Mem_Data)
  );
  Path_WB datapath_WB ( // @[PiplinedCPU.scala 60:29]
    .io_WB_pc_plus4_in(datapath_WB_io_WB_pc_plus4_in),
    .io_WB_alu_out_in(datapath_WB_io_WB_alu_out_in),
    .io_WB_ld_data_in(datapath_WB_io_WB_ld_data_in),
    .io_W_WBSel(datapath_WB_io_W_WBSel),
    .io_WB_wdata(datapath_WB_io_WB_wdata)
  );
  Controller contorller ( // @[PiplinedCPU.scala 63:28]
    .io_DM_Mem_R(contorller_io_DM_Mem_R),
    .io_DM_Mem_W(contorller_io_DM_Mem_W),
    .io_E_BrEq(contorller_io_E_BrEq),
    .io_E_BrLT(contorller_io_E_BrLT),
    .io_E_Branch_taken(contorller_io_E_Branch_taken),
    .io_ID_pc(contorller_io_ID_pc),
    .io_EXE_target_pc(contorller_io_EXE_target_pc),
    .io_Flush_DH(contorller_io_Flush_DH),
    .io_Flush_BH(contorller_io_Flush_BH),
    .io_Stall_DH(contorller_io_Stall_DH),
    .io_Stall_MA(contorller_io_Stall_MA),
    .io_IF_Inst(contorller_io_IF_Inst),
    .io_ID_Inst(contorller_io_ID_Inst),
    .io_EXE_Inst(contorller_io_EXE_Inst),
    .io_MEM_Inst(contorller_io_MEM_Inst),
    .io_WB_Inst(contorller_io_WB_Inst),
    .io_PCSel(contorller_io_PCSel),
    .io_D_ImmSel(contorller_io_D_ImmSel),
    .io_W_RegWEn(contorller_io_W_RegWEn),
    .io_E_BrUn(contorller_io_E_BrUn),
    .io_E_ASel(contorller_io_E_ASel),
    .io_E_BSel(contorller_io_E_BSel),
    .io_E_ALUSel(contorller_io_E_ALUSel),
    .io_W_WBSel(contorller_io_W_WBSel),
    .io_Hcf(contorller_io_Hcf)
  );
  assign io_InstMem_raddr = datapath_IF_io_Mem_Addr; // @[PiplinedCPU.scala 81:22]
  assign io_DataMem_aw_valid = mWriteState == 2'h1; // @[PiplinedCPU.scala 195:46]
  assign io_DataMem_w_valid = mWriteState == 2'h2; // @[PiplinedCPU.scala 207:43]
  assign io_DataMem_w_bits_data = datapath_MEM_io_Mem_Write_Data; // @[PiplinedCPU.scala 208:28]
  assign io_DataMem_b_ready = mWriteState == 2'h3 | _io_DataMem_w_valid_T; // @[PiplinedCPU.scala 212:55]
  assign io_DataMem_ar_valid = mReadState == 2'h1; // @[PiplinedCPU.scala 180:45]
  assign io_DataMem_r_ready = mReadState == 2'h2; // @[PiplinedCPU.scala 192:38]
  assign io_regs_1 = datapath_ID_io_regs_1; // @[PiplinedCPU.scala 254:13]
  assign io_regs_2 = datapath_ID_io_regs_2; // @[PiplinedCPU.scala 254:13]
  assign io_regs_3 = datapath_ID_io_regs_3; // @[PiplinedCPU.scala 254:13]
  assign io_regs_4 = datapath_ID_io_regs_4; // @[PiplinedCPU.scala 254:13]
  assign io_regs_5 = datapath_ID_io_regs_5; // @[PiplinedCPU.scala 254:13]
  assign io_regs_6 = datapath_ID_io_regs_6; // @[PiplinedCPU.scala 254:13]
  assign io_regs_7 = datapath_ID_io_regs_7; // @[PiplinedCPU.scala 254:13]
  assign io_regs_8 = datapath_ID_io_regs_8; // @[PiplinedCPU.scala 254:13]
  assign io_regs_9 = datapath_ID_io_regs_9; // @[PiplinedCPU.scala 254:13]
  assign io_regs_10 = datapath_ID_io_regs_10; // @[PiplinedCPU.scala 254:13]
  assign io_regs_11 = datapath_ID_io_regs_11; // @[PiplinedCPU.scala 254:13]
  assign io_regs_12 = datapath_ID_io_regs_12; // @[PiplinedCPU.scala 254:13]
  assign io_regs_13 = datapath_ID_io_regs_13; // @[PiplinedCPU.scala 254:13]
  assign io_regs_14 = datapath_ID_io_regs_14; // @[PiplinedCPU.scala 254:13]
  assign io_regs_15 = datapath_ID_io_regs_15; // @[PiplinedCPU.scala 254:13]
  assign io_regs_16 = datapath_ID_io_regs_16; // @[PiplinedCPU.scala 254:13]
  assign io_regs_17 = datapath_ID_io_regs_17; // @[PiplinedCPU.scala 254:13]
  assign io_regs_18 = datapath_ID_io_regs_18; // @[PiplinedCPU.scala 254:13]
  assign io_regs_19 = datapath_ID_io_regs_19; // @[PiplinedCPU.scala 254:13]
  assign io_regs_20 = datapath_ID_io_regs_20; // @[PiplinedCPU.scala 254:13]
  assign io_regs_21 = datapath_ID_io_regs_21; // @[PiplinedCPU.scala 254:13]
  assign io_regs_22 = datapath_ID_io_regs_22; // @[PiplinedCPU.scala 254:13]
  assign io_regs_23 = datapath_ID_io_regs_23; // @[PiplinedCPU.scala 254:13]
  assign io_regs_24 = datapath_ID_io_regs_24; // @[PiplinedCPU.scala 254:13]
  assign io_regs_25 = datapath_ID_io_regs_25; // @[PiplinedCPU.scala 254:13]
  assign io_regs_26 = datapath_ID_io_regs_26; // @[PiplinedCPU.scala 254:13]
  assign io_regs_27 = datapath_ID_io_regs_27; // @[PiplinedCPU.scala 254:13]
  assign io_regs_28 = datapath_ID_io_regs_28; // @[PiplinedCPU.scala 254:13]
  assign io_regs_29 = datapath_ID_io_regs_29; // @[PiplinedCPU.scala 254:13]
  assign io_regs_30 = datapath_ID_io_regs_30; // @[PiplinedCPU.scala 254:13]
  assign io_regs_31 = datapath_ID_io_regs_31; // @[PiplinedCPU.scala 254:13]
  assign io_Hcf = contorller_io_Hcf; // @[PiplinedCPU.scala 255:12]
  assign io_E_Branch_taken = contorller_io_E_Branch_taken; // @[PiplinedCPU.scala 258:23]
  assign io_Flush = contorller_io_Flush_DH; // @[PiplinedCPU.scala 260:14]
  assign io_Stall_MA = contorller_io_Stall_MA; // @[PiplinedCPU.scala 263:17]
  assign io_Stall_DH = contorller_io_Stall_DH; // @[PiplinedCPU.scala 262:17]
  assign io_IF_PC = stage_IF_io_pc; // @[PiplinedCPU.scala 264:14]
  assign io_ID_PC = stage_ID_io_pc; // @[PiplinedCPU.scala 265:14]
  assign io_EXE_PC = stage_EXE_io_pc; // @[PiplinedCPU.scala 266:15]
  assign io_MEM_PC = stage_MEM_io_pc; // @[PiplinedCPU.scala 267:15]
  assign io_WB_PC = stage_WB_io_pc_plus4 > 15'h0 ? _io_WB_PC_T_2 : stage_WB_io_pc_plus4; // @[PiplinedCPU.scala 268:20]
  assign io_EXE_src1 = datapath_EXE_io_EXE_src1; // @[PiplinedCPU.scala 270:17]
  assign io_EXE_src2 = datapath_EXE_io_EXE_src2; // @[PiplinedCPU.scala 271:17]
  assign io_ALU_src1 = datapath_EXE_io_alu_src1; // @[PiplinedCPU.scala 272:17]
  assign io_ALU_src2 = datapath_EXE_io_alu_src2; // @[PiplinedCPU.scala 273:17]
  assign io_raddr = datapath_MEM_io_Mem_Addr; // @[PiplinedCPU.scala 274:14]
  assign io_EXE_alu_out = datapath_EXE_io_EXE_alu_out; // @[PiplinedCPU.scala 269:20]
  assign io_WB_rd = stage_WB_io_inst[11:7]; // @[PiplinedCPU.scala 276:33]
  assign io_WB_wdata = datapath_WB_io_WB_wdata; // @[PiplinedCPU.scala 275:17]
  assign io_EXE_Jump = stage_EXE_io_inst[6:0] == 7'h6f | stage_EXE_io_inst[6:0] == 7'h67; // @[PiplinedCPU.scala 277:52]
  assign io_EXE_Branch = stage_EXE_io_inst[6:0] == 7'h63; // @[PiplinedCPU.scala 278:46]
  assign stage_IF_clock = clock;
  assign stage_IF_reset = reset;
  assign stage_IF_io_Stall = contorller_io_Hcf | contorller_io_Stall_DH | contorller_io_Stall_MA; // @[PiplinedCPU.scala 67:69]
  assign stage_IF_io_next_pc_in = datapath_IF_io_next_pc; // @[PiplinedCPU.scala 68:28]
  assign stage_ID_clock = clock;
  assign stage_ID_reset = reset;
  assign stage_ID_io_Flush = contorller_io_Flush_BH; // @[PiplinedCPU.scala 86:23]
  assign stage_ID_io_Stall = _stage_IF_io_Stall_T | contorller_io_Stall_MA; // @[PiplinedCPU.scala 87:69]
  assign stage_ID_io_pc_in = stage_IF_io_pc; // @[PiplinedCPU.scala 89:23]
  assign stage_ID_io_inst_in = datapath_IF_io_inst; // @[PiplinedCPU.scala 88:25]
  assign stage_EXE_clock = clock;
  assign stage_EXE_reset = reset;
  assign stage_EXE_io_Flush = contorller_io_Flush_BH | contorller_io_Flush_DH; // @[PiplinedCPU.scala 100:50]
  assign stage_EXE_io_Stall = contorller_io_Hcf | contorller_io_Stall_MA; // @[PiplinedCPU.scala 101:46]
  assign stage_EXE_io_inst_in = stage_ID_io_inst; // @[PiplinedCPU.scala 103:26]
  assign stage_EXE_io_pc_in = stage_ID_io_pc; // @[PiplinedCPU.scala 102:24]
  assign stage_EXE_io_rs1_rdata_in = datapath_ID_io_ID_rs1_rdata; // @[PiplinedCPU.scala 105:31]
  assign stage_EXE_io_rs2_rdata_in = datapath_ID_io_ID_rs2_rdata; // @[PiplinedCPU.scala 106:31]
  assign stage_EXE_io_imm_in = datapath_ID_io_imm; // @[PiplinedCPU.scala 104:25]
  assign stage_MEM_clock = clock;
  assign stage_MEM_reset = reset;
  assign stage_MEM_io_Stall = contorller_io_Hcf | contorller_io_Stall_MA; // @[PiplinedCPU.scala 119:46]
  assign stage_MEM_io_pc_in = stage_EXE_io_pc; // @[PiplinedCPU.scala 120:24]
  assign stage_MEM_io_inst_in = stage_EXE_io_inst; // @[PiplinedCPU.scala 121:26]
  assign stage_MEM_io_alu_out_in = datapath_EXE_io_EXE_alu_out; // @[PiplinedCPU.scala 123:29]
  assign stage_MEM_io_DM_wdata_in = datapath_EXE_io_EXE_rs2_rdata_out; // @[PiplinedCPU.scala 122:30]
  assign stage_WB_clock = clock;
  assign stage_WB_reset = reset;
  assign stage_WB_io_Stall = contorller_io_Hcf; // @[PiplinedCPU.scala 223:23]
  assign stage_WB_io_pc_plus4_in = datapath_MEM_io_MEM_pc_plus_4; // @[PiplinedCPU.scala 224:29]
  assign stage_WB_io_inst_in = stage_MEM_io_inst; // @[PiplinedCPU.scala 225:25]
  assign stage_WB_io_alu_out_in = datapath_MEM_io_MEM_alu_out; // @[PiplinedCPU.scala 226:28]
  assign stage_WB_io_ld_data_in = datapath_MEM_io_MEM_ld_data; // @[PiplinedCPU.scala 227:28]
  assign datapath_IF_io_PCSel = contorller_io_PCSel; // @[PiplinedCPU.scala 71:26]
  assign datapath_IF_io_IF_pc_in = stage_IF_io_pc; // @[PiplinedCPU.scala 72:29]
  assign datapath_IF_io_EXE_pc_in = stage_EXE_io_pc; // @[PiplinedCPU.scala 73:30]
  assign datapath_IF_io_EXE_target_pc_in = datapath_EXE_io_EXE_target_pc_out; // @[PiplinedCPU.scala 74:37]
  assign datapath_IF_io_Mem_data = io_InstMem_rdata; // @[PiplinedCPU.scala 75:48]
  assign datapath_ID_clock = clock;
  assign datapath_ID_reset = reset;
  assign datapath_ID_io_ID_inst_in = stage_ID_io_inst; // @[PiplinedCPU.scala 92:31]
  assign datapath_ID_io_WB_index = stage_WB_io_inst[11:7]; // @[PiplinedCPU.scala 93:48]
  assign datapath_ID_io_WB_wdata = datapath_WB_io_WB_wdata; // @[PiplinedCPU.scala 94:29]
  assign datapath_ID_io_WB_RegWEn = contorller_io_W_RegWEn; // @[PiplinedCPU.scala 95:30]
  assign datapath_ID_io_ImmSel = contorller_io_D_ImmSel; // @[PiplinedCPU.scala 96:27]
  assign datapath_EXE_io_EXE_pc_in = stage_EXE_io_pc; // @[PiplinedCPU.scala 109:31]
  assign datapath_EXE_io_EXE_imm_in = stage_EXE_io_imm; // @[PiplinedCPU.scala 110:32]
  assign datapath_EXE_io_EXE_rs1_rdata_in = stage_EXE_io_rs1_rdata; // @[PiplinedCPU.scala 111:38]
  assign datapath_EXE_io_EXE_rs2_rdata_in = stage_EXE_io_rs2_rdata; // @[PiplinedCPU.scala 112:38]
  assign datapath_EXE_io_E_ASel = contorller_io_E_ASel; // @[PiplinedCPU.scala 113:28]
  assign datapath_EXE_io_E_BSel = contorller_io_E_BSel; // @[PiplinedCPU.scala 114:28]
  assign datapath_EXE_io_E_BrUn = contorller_io_E_BrUn; // @[PiplinedCPU.scala 115:28]
  assign datapath_EXE_io_E_ALUSel = contorller_io_E_ALUSel; // @[PiplinedCPU.scala 116:30]
  assign datapath_MEM_io_MEM_pc_in = stage_MEM_io_pc; // @[PiplinedCPU.scala 126:31]
  assign datapath_MEM_io_MEM_alu_out_in = stage_MEM_io_alu_out; // @[PiplinedCPU.scala 127:36]
  assign datapath_MEM_io_MEM_DM_wdata_in = stage_MEM_io_DM_wdata; // @[PiplinedCPU.scala 128:37]
  assign datapath_MEM_io_Mem_Data = io_DataMem_r_bits_data; // @[PiplinedCPU.scala 130:55]
  assign datapath_WB_io_WB_pc_plus4_in = stage_WB_io_pc_plus4; // @[PiplinedCPU.scala 230:35]
  assign datapath_WB_io_WB_alu_out_in = stage_WB_io_alu_out; // @[PiplinedCPU.scala 231:34]
  assign datapath_WB_io_WB_ld_data_in = stage_WB_io_ld_data; // @[PiplinedCPU.scala 232:34]
  assign datapath_WB_io_W_WBSel = contorller_io_W_WBSel; // @[PiplinedCPU.scala 233:28]
  assign contorller_io_E_BrEq = datapath_EXE_io_E_BrEq; // @[PiplinedCPU.scala 242:26]
  assign contorller_io_E_BrLT = datapath_EXE_io_E_BrLT; // @[PiplinedCPU.scala 243:26]
  assign contorller_io_ID_pc = stage_ID_io_pc; // @[PiplinedCPU.scala 245:25]
  assign contorller_io_EXE_target_pc = datapath_EXE_io_EXE_target_pc_out; // @[PiplinedCPU.scala 247:33]
  assign contorller_io_IF_Inst = io_InstMem_rdata; // @[PiplinedCPU.scala 236:27]
  assign contorller_io_ID_Inst = stage_ID_io_inst; // @[PiplinedCPU.scala 237:27]
  assign contorller_io_EXE_Inst = stage_EXE_io_inst; // @[PiplinedCPU.scala 238:28]
  assign contorller_io_MEM_Inst = stage_MEM_io_inst; // @[PiplinedCPU.scala 239:28]
  assign contorller_io_WB_Inst = stage_WB_io_inst; // @[PiplinedCPU.scala 240:27]
  always @(posedge clock) begin
    if (reset) begin // @[PiplinedCPU.scala 136:30]
      mReadState <= 2'h0; // @[PiplinedCPU.scala 136:30]
    end else if (2'h0 == mReadState) begin // @[PiplinedCPU.scala 139:24]
      if (contorller_io_DM_Mem_R) begin // @[PiplinedCPU.scala 141:50]
        mReadState <= 2'h1; // @[PiplinedCPU.scala 142:28]
      end
    end else if (2'h1 == mReadState) begin // @[PiplinedCPU.scala 139:24]
      if (io_DataMem_ar_ready) begin // @[PiplinedCPU.scala 146:39]
        mReadState <= 2'h2; // @[PiplinedCPU.scala 147:28]
      end
    end
    if (reset) begin // @[PiplinedCPU.scala 137:30]
      mWriteState <= 2'h0; // @[PiplinedCPU.scala 137:30]
    end else if (2'h0 == mWriteState) begin // @[PiplinedCPU.scala 156:25]
      if (contorller_io_DM_Mem_W) begin // @[PiplinedCPU.scala 158:50]
        mWriteState <= 2'h1; // @[PiplinedCPU.scala 159:29]
      end
    end else if (2'h1 == mWriteState) begin // @[PiplinedCPU.scala 156:25]
      if (io_DataMem_aw_ready) begin // @[PiplinedCPU.scala 163:39]
        mWriteState <= 2'h2; // @[PiplinedCPU.scala 164:29]
      end
    end else if (2'h2 == mWriteState) begin // @[PiplinedCPU.scala 156:25]
      mWriteState <= _GEN_8;
    end else begin
      mWriteState <= _GEN_10;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  mReadState = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  mWriteState = _RAND_1[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module InstMem(
  input         clock,
  input  [14:0] io_raddr,
  output [31:0] io_inst
);
`ifdef RANDOMIZE_MEM_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
  reg [7:0] memory [0:32767]; // @[InstMem.scala 14:19]
  wire  memory_rdata_MPORT_en; // @[InstMem.scala 14:19]
  wire [14:0] memory_rdata_MPORT_addr; // @[InstMem.scala 14:19]
  wire [7:0] memory_rdata_MPORT_data; // @[InstMem.scala 14:19]
  wire  memory_rdata_MPORT_1_en; // @[InstMem.scala 14:19]
  wire [14:0] memory_rdata_MPORT_1_addr; // @[InstMem.scala 14:19]
  wire [7:0] memory_rdata_MPORT_1_data; // @[InstMem.scala 14:19]
  wire  memory_rdata_MPORT_2_en; // @[InstMem.scala 14:19]
  wire [14:0] memory_rdata_MPORT_2_addr; // @[InstMem.scala 14:19]
  wire [7:0] memory_rdata_MPORT_2_data; // @[InstMem.scala 14:19]
  wire  memory_rdata_MPORT_3_en; // @[InstMem.scala 14:19]
  wire [14:0] memory_rdata_MPORT_3_addr; // @[InstMem.scala 14:19]
  wire [7:0] memory_rdata_MPORT_3_data; // @[InstMem.scala 14:19]
  wire [15:0] _rdata_T_6 = {{1'd0}, io_raddr}; // @[InstMem.scala 21:31]
  wire [15:0] rdata_lo = {memory_rdata_MPORT_2_data,memory_rdata_MPORT_3_data}; // @[Cat.scala 33:92]
  wire [15:0] rdata_hi = {memory_rdata_MPORT_data,memory_rdata_MPORT_1_data}; // @[Cat.scala 33:92]
  assign memory_rdata_MPORT_en = 1'h1;
  assign memory_rdata_MPORT_addr = io_raddr + 15'h3;
  assign memory_rdata_MPORT_data = memory[memory_rdata_MPORT_addr]; // @[InstMem.scala 14:19]
  assign memory_rdata_MPORT_1_en = 1'h1;
  assign memory_rdata_MPORT_1_addr = io_raddr + 15'h2;
  assign memory_rdata_MPORT_1_data = memory[memory_rdata_MPORT_1_addr]; // @[InstMem.scala 14:19]
  assign memory_rdata_MPORT_2_en = 1'h1;
  assign memory_rdata_MPORT_2_addr = io_raddr + 15'h1;
  assign memory_rdata_MPORT_2_data = memory[memory_rdata_MPORT_2_addr]; // @[InstMem.scala 14:19]
  assign memory_rdata_MPORT_3_en = 1'h1;
  assign memory_rdata_MPORT_3_addr = _rdata_T_6[14:0];
  assign memory_rdata_MPORT_3_data = memory[memory_rdata_MPORT_3_addr]; // @[InstMem.scala 14:19]
  assign io_inst = {rdata_hi,rdata_lo}; // @[Cat.scala 33:92]
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {1{`RANDOM}};
  for (initvar = 0; initvar < 32768; initvar = initvar+1)
    memory[initvar] = _RAND_0[7:0];
`endif // RANDOMIZE_MEM_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module DataMem(
  input         clock,
  input         reset,
  output        io_slave_aw_ready,
  input         io_slave_aw_valid,
  output        io_slave_w_ready,
  input         io_slave_w_valid,
  input  [31:0] io_slave_w_bits_data,
  input  [3:0]  io_slave_w_bits_strb,
  input         io_slave_b_ready,
  output        io_slave_b_valid,
  output        io_slave_ar_ready,
  input         io_slave_ar_valid,
  input         io_slave_r_ready,
  output        io_slave_r_valid,
  output [31:0] io_slave_r_bits_data,
  input         io_dump
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] memory [0:31]; // @[DataMem.scala 23:19]
  wire  memory_io_slave_r_bits_data_MPORT_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_io_slave_r_bits_data_MPORT_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_io_slave_r_bits_data_MPORT_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_1_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_1_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_1_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_2_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_2_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_2_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_3_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_3_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_3_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_4_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_4_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_4_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_5_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_5_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_5_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_6_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_6_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_6_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_7_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_7_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_7_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_8_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_8_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_8_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_9_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_9_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_9_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_10_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_10_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_10_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_11_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_11_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_11_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_12_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_12_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_12_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_13_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_13_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_13_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_14_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_14_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_14_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_15_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_15_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_15_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_16_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_16_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_16_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_17_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_17_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_17_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_18_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_18_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_18_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_19_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_19_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_19_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_20_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_20_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_20_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_21_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_21_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_21_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_22_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_22_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_22_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_23_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_23_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_23_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_24_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_24_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_24_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_25_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_25_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_25_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_26_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_26_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_26_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_27_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_27_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_27_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_28_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_28_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_28_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_29_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_29_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_29_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_30_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_30_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_30_data; // @[DataMem.scala 23:19]
  wire  memory_data_MPORT_31_en; // @[DataMem.scala 23:19]
  wire [4:0] memory_data_MPORT_31_addr; // @[DataMem.scala 23:19]
  wire [31:0] memory_data_MPORT_31_data; // @[DataMem.scala 23:19]
  wire [31:0] memory_MPORT_data; // @[DataMem.scala 23:19]
  wire [4:0] memory_MPORT_addr; // @[DataMem.scala 23:19]
  wire  memory_MPORT_mask; // @[DataMem.scala 23:19]
  wire  memory_MPORT_en; // @[DataMem.scala 23:19]
  wire [31:0] memory_MPORT_1_data; // @[DataMem.scala 23:19]
  wire [4:0] memory_MPORT_1_addr; // @[DataMem.scala 23:19]
  wire  memory_MPORT_1_mask; // @[DataMem.scala 23:19]
  wire  memory_MPORT_1_en; // @[DataMem.scala 23:19]
  reg [14:0] rAddrOffset; // @[DataMem.scala 48:28]
  reg [14:0] writeAddressReg; // @[DataMem.scala 52:32]
  reg [2:0] writeState; // @[DataMem.scala 56:27]
  reg [1:0] readState; // @[DataMem.scala 57:26]
  reg [7:0] rLatencyCounter; // @[DataMem.scala 58:32]
  reg [7:0] wLatencyCounter; // @[DataMem.scala 59:32]
  wire  _T_1 = io_slave_ar_ready & io_slave_ar_valid; // @[Decoupled.scala 52:35]
  wire  _T_6 = io_slave_r_ready & io_slave_r_valid; // @[Decoupled.scala 52:35]
  wire [1:0] _GEN_3 = _T_6 ? 2'h0 : readState; // @[DataMem.scala 78:29 79:19 57:26]
  wire  _T_7 = readState == 2'h0; // @[DataMem.scala 84:18]
  wire [7:0] _rLatencyCounter_T_1 = rLatencyCounter + 8'h1; // @[DataMem.scala 91:40]
  wire  _T_9 = readState == 2'h2; // @[DataMem.scala 93:23]
  wire [31:0] _GEN_12 = readState == 2'h2 ? memory_io_slave_r_bits_data_MPORT_data : 32'h0; // @[DataMem.scala 42:24 93:34 97:26]
  wire  _GEN_16 = readState == 2'h1 ? 1'h0 : _T_9; // @[DataMem.scala 45:20 90:38]
  wire [31:0] _GEN_19 = readState == 2'h1 ? 32'h0 : _GEN_12; // @[DataMem.scala 42:24 90:38]
  wire [31:0] _GEN_23 = readState == 2'h0 ? 32'h0 : {{17'd0}, rAddrOffset}; // @[DataMem.scala 84:29 87:17 48:28]
  wire  _T_12 = io_slave_aw_valid & io_slave_w_valid; // @[DataMem.scala 108:30]
  wire [2:0] _GEN_32 = io_slave_aw_valid ? 3'h4 : writeState; // @[DataMem.scala 115:36 116:20 56:27]
  wire [2:0] _GEN_35 = io_slave_w_valid ? 3'h3 : writeState; // @[DataMem.scala 120:30 56:27]
  wire [2:0] _GEN_36 = wLatencyCounter == 8'h0 ? 3'h3 : writeState; // @[DataMem.scala 129:48 130:20 56:27]
  wire [2:0] _GEN_37 = io_slave_b_ready ? 3'h1 : writeState; // @[DataMem.scala 134:30 135:20 56:27]
  wire [2:0] _GEN_38 = 3'h3 == writeState ? _GEN_37 : writeState; // @[DataMem.scala 103:22 56:27]
  wire [2:0] _GEN_39 = 3'h2 == writeState ? _GEN_36 : _GEN_38; // @[DataMem.scala 103:22]
  wire [7:0] writeData_0 = io_slave_w_bits_strb[0] ? io_slave_w_bits_data[7:0] : 8'h0; // @[DataMem.scala 142:43 143:20 145:20]
  wire [7:0] writeData_1 = io_slave_w_bits_strb[1] ? io_slave_w_bits_data[15:8] : 8'h0; // @[DataMem.scala 142:43 143:20 145:20]
  wire [7:0] writeData_2 = io_slave_w_bits_strb[2] ? io_slave_w_bits_data[23:16] : 8'h0; // @[DataMem.scala 142:43 143:20 145:20]
  wire [7:0] writeData_3 = io_slave_w_bits_strb[3] ? io_slave_w_bits_data[31:24] : 8'h0; // @[DataMem.scala 142:43 143:20 145:20]
  wire  _T_27 = writeState == 3'h0; // @[DataMem.scala 149:19]
  wire  _T_28 = writeState == 3'h1; // @[DataMem.scala 155:24]
  wire [15:0] lo = {writeData_1,writeData_0}; // @[DataMem.scala 159:46]
  wire [15:0] hi = {writeData_3,writeData_2}; // @[DataMem.scala 159:46]
  wire [31:0] _GEN_47 = io_slave_aw_valid ? 32'h0 : {{17'd0}, writeAddressReg}; // @[DataMem.scala 163:34 164:23 52:32]
  wire [31:0] _GEN_54 = _T_12 ? 32'h0 : _GEN_47; // @[DataMem.scala 158:49 160:23]
  wire  _T_33 = writeState == 3'h4; // @[DataMem.scala 171:24]
  wire [7:0] _wLatencyCounter_T_1 = wLatencyCounter + 8'h1; // @[DataMem.scala 181:40]
  wire  _T_37 = writeState == 3'h3; // @[DataMem.scala 183:24]
  wire [7:0] _GEN_61 = writeState == 3'h3 ? 8'h0 : wLatencyCounter; // @[DataMem.scala 183:37 184:21 59:32]
  wire [7:0] _GEN_65 = writeState == 3'h2 ? _wLatencyCounter_T_1 : _GEN_61; // @[DataMem.scala 180:39 181:21]
  wire  _GEN_68 = writeState == 3'h2 ? 1'h0 : _T_37; // @[DataMem.scala 180:39 35:20]
  wire  _GEN_71 = writeState == 3'h4 ? 1'h0 : _GEN_68; // @[DataMem.scala 171:39 175:22]
  wire  _GEN_74 = writeState == 3'h4 & io_slave_w_valid; // @[DataMem.scala 171:39 23:19]
  wire  _GEN_80 = writeState == 3'h1 | _T_33; // @[DataMem.scala 155:36 157:22]
  wire  _GEN_83 = writeState == 3'h1 & _T_12; // @[DataMem.scala 155:36 23:19]
  wire [31:0] _GEN_86 = writeState == 3'h1 ? _GEN_54 : {{17'd0}, writeAddressReg}; // @[DataMem.scala 155:36 52:32]
  wire  _GEN_89 = writeState == 3'h1 ? 1'h0 : _GEN_71; // @[DataMem.scala 155:36 168:22]
  wire  _GEN_92 = writeState == 3'h1 ? 1'h0 : _GEN_74; // @[DataMem.scala 155:36 23:19]
  wire [31:0] _GEN_106 = writeState == 3'h0 ? {{17'd0}, writeAddressReg} : _GEN_86; // @[DataMem.scala 149:30 52:32]
  wire  _T_39 = ~reset; // @[DataMem.scala 194:11]
  wire [31:0] _GEN_149 = reset ? 32'h0 : _GEN_23; // @[DataMem.scala 48:{28,28}]
  wire [31:0] _GEN_150 = reset ? 32'h0 : _GEN_106; // @[DataMem.scala 52:{32,32}]
  assign memory_io_slave_r_bits_data_MPORT_en = _T_7 ? 1'h0 : _GEN_16;
  assign memory_io_slave_r_bits_data_MPORT_addr = rAddrOffset[4:0];
  assign memory_io_slave_r_bits_data_MPORT_data = memory[memory_io_slave_r_bits_data_MPORT_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_en = io_dump;
  assign memory_data_MPORT_addr = 5'h0;
  assign memory_data_MPORT_data = memory[memory_data_MPORT_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_1_en = io_dump;
  assign memory_data_MPORT_1_addr = 5'h1;
  assign memory_data_MPORT_1_data = memory[memory_data_MPORT_1_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_2_en = io_dump;
  assign memory_data_MPORT_2_addr = 5'h2;
  assign memory_data_MPORT_2_data = memory[memory_data_MPORT_2_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_3_en = io_dump;
  assign memory_data_MPORT_3_addr = 5'h3;
  assign memory_data_MPORT_3_data = memory[memory_data_MPORT_3_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_4_en = io_dump;
  assign memory_data_MPORT_4_addr = 5'h4;
  assign memory_data_MPORT_4_data = memory[memory_data_MPORT_4_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_5_en = io_dump;
  assign memory_data_MPORT_5_addr = 5'h5;
  assign memory_data_MPORT_5_data = memory[memory_data_MPORT_5_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_6_en = io_dump;
  assign memory_data_MPORT_6_addr = 5'h6;
  assign memory_data_MPORT_6_data = memory[memory_data_MPORT_6_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_7_en = io_dump;
  assign memory_data_MPORT_7_addr = 5'h7;
  assign memory_data_MPORT_7_data = memory[memory_data_MPORT_7_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_8_en = io_dump;
  assign memory_data_MPORT_8_addr = 5'h8;
  assign memory_data_MPORT_8_data = memory[memory_data_MPORT_8_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_9_en = io_dump;
  assign memory_data_MPORT_9_addr = 5'h9;
  assign memory_data_MPORT_9_data = memory[memory_data_MPORT_9_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_10_en = io_dump;
  assign memory_data_MPORT_10_addr = 5'ha;
  assign memory_data_MPORT_10_data = memory[memory_data_MPORT_10_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_11_en = io_dump;
  assign memory_data_MPORT_11_addr = 5'hb;
  assign memory_data_MPORT_11_data = memory[memory_data_MPORT_11_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_12_en = io_dump;
  assign memory_data_MPORT_12_addr = 5'hc;
  assign memory_data_MPORT_12_data = memory[memory_data_MPORT_12_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_13_en = io_dump;
  assign memory_data_MPORT_13_addr = 5'hd;
  assign memory_data_MPORT_13_data = memory[memory_data_MPORT_13_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_14_en = io_dump;
  assign memory_data_MPORT_14_addr = 5'he;
  assign memory_data_MPORT_14_data = memory[memory_data_MPORT_14_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_15_en = io_dump;
  assign memory_data_MPORT_15_addr = 5'hf;
  assign memory_data_MPORT_15_data = memory[memory_data_MPORT_15_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_16_en = io_dump;
  assign memory_data_MPORT_16_addr = 5'h10;
  assign memory_data_MPORT_16_data = memory[memory_data_MPORT_16_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_17_en = io_dump;
  assign memory_data_MPORT_17_addr = 5'h11;
  assign memory_data_MPORT_17_data = memory[memory_data_MPORT_17_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_18_en = io_dump;
  assign memory_data_MPORT_18_addr = 5'h12;
  assign memory_data_MPORT_18_data = memory[memory_data_MPORT_18_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_19_en = io_dump;
  assign memory_data_MPORT_19_addr = 5'h13;
  assign memory_data_MPORT_19_data = memory[memory_data_MPORT_19_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_20_en = io_dump;
  assign memory_data_MPORT_20_addr = 5'h14;
  assign memory_data_MPORT_20_data = memory[memory_data_MPORT_20_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_21_en = io_dump;
  assign memory_data_MPORT_21_addr = 5'h15;
  assign memory_data_MPORT_21_data = memory[memory_data_MPORT_21_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_22_en = io_dump;
  assign memory_data_MPORT_22_addr = 5'h16;
  assign memory_data_MPORT_22_data = memory[memory_data_MPORT_22_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_23_en = io_dump;
  assign memory_data_MPORT_23_addr = 5'h17;
  assign memory_data_MPORT_23_data = memory[memory_data_MPORT_23_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_24_en = io_dump;
  assign memory_data_MPORT_24_addr = 5'h18;
  assign memory_data_MPORT_24_data = memory[memory_data_MPORT_24_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_25_en = io_dump;
  assign memory_data_MPORT_25_addr = 5'h19;
  assign memory_data_MPORT_25_data = memory[memory_data_MPORT_25_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_26_en = io_dump;
  assign memory_data_MPORT_26_addr = 5'h1a;
  assign memory_data_MPORT_26_data = memory[memory_data_MPORT_26_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_27_en = io_dump;
  assign memory_data_MPORT_27_addr = 5'h1b;
  assign memory_data_MPORT_27_data = memory[memory_data_MPORT_27_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_28_en = io_dump;
  assign memory_data_MPORT_28_addr = 5'h1c;
  assign memory_data_MPORT_28_data = memory[memory_data_MPORT_28_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_29_en = io_dump;
  assign memory_data_MPORT_29_addr = 5'h1d;
  assign memory_data_MPORT_29_data = memory[memory_data_MPORT_29_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_30_en = io_dump;
  assign memory_data_MPORT_30_addr = 5'h1e;
  assign memory_data_MPORT_30_data = memory[memory_data_MPORT_30_addr]; // @[DataMem.scala 23:19]
  assign memory_data_MPORT_31_en = io_dump;
  assign memory_data_MPORT_31_addr = 5'h1f;
  assign memory_data_MPORT_31_data = memory[memory_data_MPORT_31_addr]; // @[DataMem.scala 23:19]
  assign memory_MPORT_data = {hi,lo};
  assign memory_MPORT_addr = 5'h0;
  assign memory_MPORT_mask = 1'h1;
  assign memory_MPORT_en = _T_27 ? 1'h0 : _GEN_83;
  assign memory_MPORT_1_data = {hi,lo};
  assign memory_MPORT_1_addr = writeAddressReg[4:0];
  assign memory_MPORT_1_mask = 1'h1;
  assign memory_MPORT_1_en = _T_27 ? 1'h0 : _GEN_92;
  assign io_slave_aw_ready = writeState == 3'h0 ? 1'h0 : _T_28; // @[DataMem.scala 149:30 150:23]
  assign io_slave_w_ready = writeState == 3'h0 ? 1'h0 : _GEN_80; // @[DataMem.scala 149:30 151:22]
  assign io_slave_b_valid = writeState == 3'h0 ? 1'h0 : _GEN_89; // @[DataMem.scala 149:30 153:22]
  assign io_slave_ar_ready = readState == 2'h0; // @[DataMem.scala 84:18]
  assign io_slave_r_valid = readState == 2'h0 ? 1'h0 : _GEN_16; // @[DataMem.scala 84:29 86:22]
  assign io_slave_r_bits_data = readState == 2'h0 ? 32'h0 : _GEN_19; // @[DataMem.scala 42:24 84:29]
  always @(posedge clock) begin
    if (memory_MPORT_en & memory_MPORT_mask) begin
      memory[memory_MPORT_addr] <= memory_MPORT_data; // @[DataMem.scala 23:19]
    end
    if (memory_MPORT_1_en & memory_MPORT_1_mask) begin
      memory[memory_MPORT_1_addr] <= memory_MPORT_1_data; // @[DataMem.scala 23:19]
    end
    rAddrOffset <= _GEN_149[14:0]; // @[DataMem.scala 48:{28,28}]
    writeAddressReg <= _GEN_150[14:0]; // @[DataMem.scala 52:{32,32}]
    if (reset) begin // @[DataMem.scala 56:27]
      writeState <= 3'h0; // @[DataMem.scala 56:27]
    end else if (3'h0 == writeState) begin // @[DataMem.scala 103:22]
      writeState <= 3'h1; // @[DataMem.scala 105:18]
    end else if (3'h1 == writeState) begin // @[DataMem.scala 103:22]
      if (io_slave_aw_valid & io_slave_w_valid) begin // @[DataMem.scala 108:51]
        writeState <= 3'h3;
      end else begin
        writeState <= _GEN_32;
      end
    end else if (3'h4 == writeState) begin // @[DataMem.scala 103:22]
      writeState <= _GEN_35;
    end else begin
      writeState <= _GEN_39;
    end
    if (reset) begin // @[DataMem.scala 57:26]
      readState <= 2'h0; // @[DataMem.scala 57:26]
    end else if (2'h0 == readState) begin // @[DataMem.scala 61:21]
      if (_T_1) begin // @[DataMem.scala 63:30]
        readState <= 2'h2;
      end
    end else if (2'h1 == readState) begin // @[DataMem.scala 61:21]
      if (rLatencyCounter == 8'h0) begin // @[DataMem.scala 73:49]
        readState <= 2'h2; // @[DataMem.scala 74:19]
      end
    end else if (2'h2 == readState) begin // @[DataMem.scala 61:21]
      readState <= _GEN_3;
    end
    if (reset) begin // @[DataMem.scala 58:32]
      rLatencyCounter <= 8'h0; // @[DataMem.scala 58:32]
    end else if (!(readState == 2'h0)) begin // @[DataMem.scala 84:29]
      if (readState == 2'h1) begin // @[DataMem.scala 90:38]
        rLatencyCounter <= _rLatencyCounter_T_1; // @[DataMem.scala 91:21]
      end else if (readState == 2'h2) begin // @[DataMem.scala 93:34]
        rLatencyCounter <= 8'h0; // @[DataMem.scala 94:21]
      end
    end
    if (reset) begin // @[DataMem.scala 59:32]
      wLatencyCounter <= 8'h0; // @[DataMem.scala 59:32]
    end else if (!(writeState == 3'h0)) begin // @[DataMem.scala 149:30]
      if (!(writeState == 3'h1)) begin // @[DataMem.scala 155:36]
        if (!(writeState == 3'h4)) begin // @[DataMem.scala 171:39]
          wLatencyCounter <= _GEN_65;
        end
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & ~reset) begin
          $fwrite(32'h80000002,"\t\t======== Data Memory Dump ========\n"); // @[DataMem.scala 194:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tFrom base address 0\n"); // @[DataMem.scala 195:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[0] (address = 0) = 0x%x (%d)\n",memory_data_MPORT_data,
            memory_data_MPORT_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[1] (address = 4) = 0x%x (%d)\n",memory_data_MPORT_1_data,
            memory_data_MPORT_1_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[2] (address = 8) = 0x%x (%d)\n",memory_data_MPORT_2_data,
            memory_data_MPORT_2_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[3] (address = 12) = 0x%x (%d)\n",memory_data_MPORT_3_data,
            memory_data_MPORT_3_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[4] (address = 16) = 0x%x (%d)\n",memory_data_MPORT_4_data,
            memory_data_MPORT_4_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[5] (address = 20) = 0x%x (%d)\n",memory_data_MPORT_5_data,
            memory_data_MPORT_5_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[6] (address = 24) = 0x%x (%d)\n",memory_data_MPORT_6_data,
            memory_data_MPORT_6_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[7] (address = 28) = 0x%x (%d)\n",memory_data_MPORT_7_data,
            memory_data_MPORT_7_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[8] (address = 32) = 0x%x (%d)\n",memory_data_MPORT_8_data,
            memory_data_MPORT_8_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[9] (address = 36) = 0x%x (%d)\n",memory_data_MPORT_9_data,
            memory_data_MPORT_9_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[10] (address = 40) = 0x%x (%d)\n",memory_data_MPORT_10_data,
            memory_data_MPORT_10_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[11] (address = 44) = 0x%x (%d)\n",memory_data_MPORT_11_data,
            memory_data_MPORT_11_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[12] (address = 48) = 0x%x (%d)\n",memory_data_MPORT_12_data,
            memory_data_MPORT_12_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[13] (address = 52) = 0x%x (%d)\n",memory_data_MPORT_13_data,
            memory_data_MPORT_13_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[14] (address = 56) = 0x%x (%d)\n",memory_data_MPORT_14_data,
            memory_data_MPORT_14_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[15] (address = 60) = 0x%x (%d)\n",memory_data_MPORT_15_data,
            memory_data_MPORT_15_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[16] (address = 64) = 0x%x (%d)\n",memory_data_MPORT_16_data,
            memory_data_MPORT_16_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[17] (address = 68) = 0x%x (%d)\n",memory_data_MPORT_17_data,
            memory_data_MPORT_17_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[18] (address = 72) = 0x%x (%d)\n",memory_data_MPORT_18_data,
            memory_data_MPORT_18_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[19] (address = 76) = 0x%x (%d)\n",memory_data_MPORT_19_data,
            memory_data_MPORT_19_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[20] (address = 80) = 0x%x (%d)\n",memory_data_MPORT_20_data,
            memory_data_MPORT_20_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[21] (address = 84) = 0x%x (%d)\n",memory_data_MPORT_21_data,
            memory_data_MPORT_21_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[22] (address = 88) = 0x%x (%d)\n",memory_data_MPORT_22_data,
            memory_data_MPORT_22_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[23] (address = 92) = 0x%x (%d)\n",memory_data_MPORT_23_data,
            memory_data_MPORT_23_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[24] (address = 96) = 0x%x (%d)\n",memory_data_MPORT_24_data,
            memory_data_MPORT_24_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[25] (address = 100) = 0x%x (%d)\n",memory_data_MPORT_25_data,
            memory_data_MPORT_25_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[26] (address = 104) = 0x%x (%d)\n",memory_data_MPORT_26_data,
            memory_data_MPORT_26_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[27] (address = 108) = 0x%x (%d)\n",memory_data_MPORT_27_data,
            memory_data_MPORT_27_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[28] (address = 112) = 0x%x (%d)\n",memory_data_MPORT_28_data,
            memory_data_MPORT_28_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[29] (address = 116) = 0x%x (%d)\n",memory_data_MPORT_29_data,
            memory_data_MPORT_29_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[30] (address = 120) = 0x%x (%d)\n",memory_data_MPORT_30_data,
            memory_data_MPORT_30_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\t\tDataMem[31] (address = 124) = 0x%x (%d)\n",memory_data_MPORT_31_data,
            memory_data_MPORT_31_data); // @[DataMem.scala 199:13]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_dump & _T_39) begin
          $fwrite(32'h80000002,"\n"); // @[DataMem.scala 203:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
  integer initvar;
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  rAddrOffset = _RAND_0[14:0];
  _RAND_1 = {1{`RANDOM}};
  writeAddressReg = _RAND_1[14:0];
  _RAND_2 = {1{`RANDOM}};
  writeState = _RAND_2[2:0];
  _RAND_3 = {1{`RANDOM}};
  readState = _RAND_3[1:0];
  _RAND_4 = {1{`RANDOM}};
  rLatencyCounter = _RAND_4[7:0];
  _RAND_5 = {1{`RANDOM}};
  wLatencyCounter = _RAND_5[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
  $readmemh("./src/main/resource/data.hex", memory);
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module AXIReadBus(
  input         clock,
  input         reset,
  output        io_master_readAddr_ready,
  input         io_master_readAddr_valid,
  input         io_master_readData_ready,
  output        io_master_readData_valid,
  output [31:0] io_master_readData_bits_data,
  input         io_slave_0_readAddr_ready,
  output        io_slave_0_readAddr_valid,
  output        io_slave_0_readData_ready,
  input         io_slave_0_readData_valid,
  input  [31:0] io_slave_0_readData_bits_data
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg  read_addr_reg_valid; // @[AXIReadBus.scala 32:36]
  reg  outstanding; // @[AXIReadBus.scala 33:28]
  wire  _T = io_master_readAddr_ready & io_master_readAddr_valid; // @[Decoupled.scala 52:35]
  wire  _GEN_0 = _T | outstanding; // @[AXIReadBus.scala 60:33 61:17 33:28]
  wire  _GEN_5 = _T | read_addr_reg_valid; // @[AXIReadBus.scala 60:33 66:25 32:36]
  wire  _T_1 = io_master_readData_ready & io_master_readData_valid; // @[Decoupled.scala 52:35]
  assign io_master_readAddr_ready = ~outstanding; // @[AXIReadBus.scala 57:31]
  assign io_master_readData_valid = outstanding & io_slave_0_readData_valid; // @[AXIReadBus.scala 77:21 52:28 78:30]
  assign io_master_readData_bits_data = outstanding ? io_slave_0_readData_bits_data : 32'h0; // @[AXIReadBus.scala 77:21 53:32 79:34]
  assign io_slave_0_readAddr_valid = outstanding & read_addr_reg_valid; // @[AXIReadBus.scala 77:21 38:32 84:44]
  assign io_slave_0_readData_ready = outstanding & io_master_readData_ready; // @[AXIReadBus.scala 77:21 49:32 85:44]
  always @(posedge clock) begin
    if (reset) begin // @[AXIReadBus.scala 32:36]
      read_addr_reg_valid <= 1'h0; // @[AXIReadBus.scala 32:36]
    end else if (read_addr_reg_valid) begin // @[AXIReadBus.scala 70:29]
      if (io_slave_0_readAddr_ready) begin // @[AXIReadBus.scala 71:50]
        read_addr_reg_valid <= 1'h0; // @[AXIReadBus.scala 72:27]
      end else begin
        read_addr_reg_valid <= _GEN_5;
      end
    end else begin
      read_addr_reg_valid <= _GEN_5;
    end
    if (reset) begin // @[AXIReadBus.scala 33:28]
      outstanding <= 1'h0; // @[AXIReadBus.scala 33:28]
    end else if (outstanding) begin // @[AXIReadBus.scala 77:21]
      if (_T_1) begin // @[AXIReadBus.scala 88:35]
        outstanding <= 1'h0; // @[AXIReadBus.scala 89:19]
      end else begin
        outstanding <= _GEN_0;
      end
    end else begin
      outstanding <= _GEN_0;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  read_addr_reg_valid = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  outstanding = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module RRArbiter(
  input   io_in_0_valid,
  output  io_out_valid
);
  assign io_out_valid = io_in_0_valid; // @[Arbiter.scala 55:16]
endmodule
module AXISlaveReadMux(
  input         clock,
  input         reset,
  input         io_out_readAddr_ready,
  output        io_out_readAddr_valid,
  output        io_out_readData_ready,
  input         io_out_readData_valid,
  input  [31:0] io_out_readData_bits_data,
  output        io_in_0_readAddr_ready,
  input         io_in_0_readAddr_valid,
  input         io_in_0_readData_ready,
  output        io_in_0_readData_valid,
  output [31:0] io_in_0_readData_bits_data
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire  arbiter_io_in_0_valid; // @[AXISlaveReadMux.scala 35:23]
  wire  arbiter_io_out_valid; // @[AXISlaveReadMux.scala 35:23]
  reg [1:0] state; // @[AXISlaveReadMux.scala 30:22]
  reg  ar_determined; // @[AXISlaveReadMux.scala 37:30]
  reg [31:0] data_reg_data; // @[AXISlaveReadMux.scala 43:25]
  wire  _T_6 = state == 2'h1; // @[AXISlaveReadMux.scala 106:19]
  wire  _T_9 = state == 2'h2; // @[AXISlaveReadMux.scala 116:19]
  wire  _GEN_23 = state == 2'h2 ? 1'h0 : 1'h1; // @[AXISlaveReadMux.scala 116:31 117:20]
  wire  _GEN_25 = state == 2'h1 ? 1'h0 : _GEN_23; // @[AXISlaveReadMux.scala 106:33 107:22]
  wire  mask_0 = state == 2'h0 | _GEN_25; // @[AXISlaveReadMux.scala 97:24 98:20]
  wire  _T_2 = io_out_readData_ready & io_out_readData_valid; // @[Decoupled.scala 52:35]
  wire  _T_4 = io_in_0_readData_ready & io_in_0_readData_valid; // @[Decoupled.scala 52:35]
  wire [1:0] _GEN_2 = _T_4 ? 2'h0 : state; // @[AXISlaveReadMux.scala 91:44 92:15 30:22]
  wire  _GEN_17 = arbiter_io_out_valid | ar_determined; // @[AXISlaveReadMux.scala 102:21 37:30 99:31]
  wire  _T_7 = io_out_readAddr_ready & io_out_readAddr_valid; // @[Decoupled.scala 52:35]
  wire  _GEN_32 = state == 2'h1 ? 1'h0 : _T_9; // @[AXISlaveReadMux.scala 106:33 65:29]
  RRArbiter arbiter ( // @[AXISlaveReadMux.scala 35:23]
    .io_in_0_valid(arbiter_io_in_0_valid),
    .io_out_valid(arbiter_io_out_valid)
  );
  assign io_out_readAddr_valid = ar_determined; // @[AXISlaveReadMux.scala 77:25]
  assign io_out_readData_ready = state == 2'h0 ? 1'h0 : _T_6; // @[AXISlaveReadMux.scala 97:24 104:27]
  assign io_in_0_readAddr_ready = state == 2'h0 | _GEN_25; // @[AXISlaveReadMux.scala 97:24 98:20]
  assign io_in_0_readData_valid = state == 2'h0 ? 1'h0 : _GEN_32; // @[AXISlaveReadMux.scala 97:24 65:29]
  assign io_in_0_readData_bits_data = data_reg_data; // @[AXISlaveReadMux.scala 122:35]
  assign arbiter_io_in_0_valid = io_in_0_readAddr_valid & mask_0; // @[AXISlaveReadMux.scala 73:55]
  always @(posedge clock) begin
    if (reset) begin // @[AXISlaveReadMux.scala 30:22]
      state <= 2'h0; // @[AXISlaveReadMux.scala 30:22]
    end else if (2'h0 == state) begin // @[AXISlaveReadMux.scala 79:16]
      if (io_in_0_readAddr_valid) begin // @[AXISlaveReadMux.scala 81:24]
        state <= 2'h1; // @[AXISlaveReadMux.scala 82:15]
      end
    end else if (2'h1 == state) begin // @[AXISlaveReadMux.scala 79:16]
      if (_T_2) begin // @[AXISlaveReadMux.scala 86:33]
        state <= 2'h2; // @[AXISlaveReadMux.scala 87:15]
      end
    end else if (2'h2 == state) begin // @[AXISlaveReadMux.scala 79:16]
      state <= _GEN_2;
    end
    if (reset) begin // @[AXISlaveReadMux.scala 37:30]
      ar_determined <= 1'h0; // @[AXISlaveReadMux.scala 37:30]
    end else if (state == 2'h0) begin // @[AXISlaveReadMux.scala 97:24]
      ar_determined <= _GEN_17;
    end else if (state == 2'h1) begin // @[AXISlaveReadMux.scala 106:33]
      if (_T_7) begin // @[AXISlaveReadMux.scala 108:33]
        ar_determined <= 1'h0; // @[AXISlaveReadMux.scala 109:23]
      end
    end
    if (reset) begin // @[AXISlaveReadMux.scala 43:25]
      data_reg_data <= 32'h0; // @[AXISlaveReadMux.scala 43:25]
    end else if (!(state == 2'h0)) begin // @[AXISlaveReadMux.scala 97:24]
      if (state == 2'h1) begin // @[AXISlaveReadMux.scala 106:33]
        if (_T_2) begin // @[AXISlaveReadMux.scala 111:33]
          data_reg_data <= io_out_readData_bits_data; // @[AXISlaveReadMux.scala 112:18]
        end
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  ar_determined = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  data_reg_data = _RAND_2[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module AXIWriteBus(
  input         clock,
  input         reset,
  output        io_master_writeAddr_ready,
  input         io_master_writeAddr_valid,
  output        io_master_writeData_ready,
  input         io_master_writeData_valid,
  input  [31:0] io_master_writeData_bits_data,
  input         io_master_writeResp_ready,
  output        io_master_writeResp_valid,
  input         io_slave_0_writeAddr_ready,
  output        io_slave_0_writeAddr_valid,
  input         io_slave_0_writeData_ready,
  output        io_slave_0_writeData_valid,
  output [31:0] io_slave_0_writeData_bits_data,
  output [3:0]  io_slave_0_writeData_bits_strb,
  output        io_slave_0_writeResp_ready,
  input         io_slave_0_writeResp_valid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
`endif // RANDOMIZE_REG_INIT
  reg  write_addr_reg_valid; // @[AXIWriteBus.scala 34:37]
  reg [31:0] write_data_reg; // @[AXIWriteBus.scala 38:31]
  reg  write_data_reg_valid; // @[AXIWriteBus.scala 39:37]
  reg [3:0] write_data_reg_strb; // @[AXIWriteBus.scala 40:36]
  reg  write_resp_reg_valid; // @[AXIWriteBus.scala 44:37]
  reg  w_outstanding; // @[AXIWriteBus.scala 48:30]
  reg  aw_outstanding; // @[AXIWriteBus.scala 49:31]
  reg  b_outstanding; // @[AXIWriteBus.scala 50:30]
  wire  _T = io_master_writeAddr_ready & io_master_writeAddr_valid; // @[Decoupled.scala 52:35]
  wire  _GEN_0 = _T | aw_outstanding; // @[AXIWriteBus.scala 80:34 81:20 49:31]
  wire  _GEN_3 = _T | write_addr_reg_valid; // @[AXIWriteBus.scala 80:34 84:26 34:37]
  wire  _T_1 = io_master_writeData_ready & io_master_writeData_valid; // @[Decoupled.scala 52:35]
  wire  _GEN_6 = _T_1 | w_outstanding; // @[AXIWriteBus.scala 88:34 89:19 48:30]
  wire  _GEN_9 = _T_1 | write_data_reg_valid; // @[AXIWriteBus.scala 88:34 92:26 39:37]
  wire  _GEN_13 = aw_outstanding & w_outstanding & write_resp_reg_valid & io_master_writeResp_ready ? 1'h0 :
    write_resp_reg_valid; // @[AXIWriteBus.scala 105:94 106:28 44:37]
  wire  _GEN_16 = aw_outstanding & w_outstanding & write_resp_reg_valid & io_master_writeResp_ready ? 1'h0 :
    b_outstanding; // @[AXIWriteBus.scala 105:94 109:21 50:30]
  wire  _T_7 = io_slave_0_writeResp_ready & io_slave_0_writeResp_valid; // @[Decoupled.scala 52:35]
  wire  _GEN_17 = _T_7 | _GEN_16; // @[AXIWriteBus.scala 114:50 115:21]
  wire  _GEN_18 = _T_7 | _GEN_13; // @[AXIWriteBus.scala 114:50 116:28]
  assign io_master_writeAddr_ready = ~aw_outstanding; // @[AXIWriteBus.scala 73:32]
  assign io_master_writeData_ready = ~w_outstanding; // @[AXIWriteBus.scala 72:32]
  assign io_master_writeResp_valid = write_resp_reg_valid; // @[AXIWriteBus.scala 74:29]
  assign io_slave_0_writeAddr_valid = aw_outstanding & write_addr_reg_valid; // @[AXIWriteBus.scala 112:24 122:46 58:33]
  assign io_slave_0_writeData_valid = aw_outstanding & write_data_reg_valid; // @[AXIWriteBus.scala 112:24 127:46 54:33]
  assign io_slave_0_writeData_bits_data = aw_outstanding ? write_data_reg : 32'h0; // @[AXIWriteBus.scala 112:24 125:50 55:37]
  assign io_slave_0_writeData_bits_strb = aw_outstanding ? write_data_reg_strb : 4'h0; // @[AXIWriteBus.scala 112:24 126:50 56:37]
  assign io_slave_0_writeResp_ready = aw_outstanding & ~b_outstanding; // @[AXIWriteBus.scala 112:24 129:46 69:33]
  always @(posedge clock) begin
    if (reset) begin // @[AXIWriteBus.scala 34:37]
      write_addr_reg_valid <= 1'h0; // @[AXIWriteBus.scala 34:37]
    end else if (write_addr_reg_valid & io_slave_0_writeAddr_ready) begin // @[AXIWriteBus.scala 97:74]
      write_addr_reg_valid <= 1'h0; // @[AXIWriteBus.scala 98:28]
    end else begin
      write_addr_reg_valid <= _GEN_3;
    end
    if (reset) begin // @[AXIWriteBus.scala 38:31]
      write_data_reg <= 32'h0; // @[AXIWriteBus.scala 38:31]
    end else if (_T_1) begin // @[AXIWriteBus.scala 88:34]
      write_data_reg <= io_master_writeData_bits_data; // @[AXIWriteBus.scala 91:20]
    end
    if (reset) begin // @[AXIWriteBus.scala 39:37]
      write_data_reg_valid <= 1'h0; // @[AXIWriteBus.scala 39:37]
    end else if (write_data_reg_valid & io_slave_0_writeData_ready) begin // @[AXIWriteBus.scala 100:74]
      write_data_reg_valid <= 1'h0; // @[AXIWriteBus.scala 101:28]
    end else begin
      write_data_reg_valid <= _GEN_9;
    end
    if (reset) begin // @[AXIWriteBus.scala 40:36]
      write_data_reg_strb <= 4'h0; // @[AXIWriteBus.scala 40:36]
    end else if (_T_1) begin // @[AXIWriteBus.scala 88:34]
      write_data_reg_strb <= 4'hf; // @[AXIWriteBus.scala 90:25]
    end
    if (reset) begin // @[AXIWriteBus.scala 44:37]
      write_resp_reg_valid <= 1'h0; // @[AXIWriteBus.scala 44:37]
    end else if (aw_outstanding) begin // @[AXIWriteBus.scala 112:24]
      write_resp_reg_valid <= _GEN_18;
    end else if (aw_outstanding & w_outstanding & write_resp_reg_valid & io_master_writeResp_ready) begin // @[AXIWriteBus.scala 105:94]
      write_resp_reg_valid <= 1'h0; // @[AXIWriteBus.scala 106:28]
    end
    if (reset) begin // @[AXIWriteBus.scala 48:30]
      w_outstanding <= 1'h0; // @[AXIWriteBus.scala 48:30]
    end else if (aw_outstanding & w_outstanding & write_resp_reg_valid & io_master_writeResp_ready) begin // @[AXIWriteBus.scala 105:94]
      w_outstanding <= 1'h0; // @[AXIWriteBus.scala 108:21]
    end else begin
      w_outstanding <= _GEN_6;
    end
    if (reset) begin // @[AXIWriteBus.scala 49:31]
      aw_outstanding <= 1'h0; // @[AXIWriteBus.scala 49:31]
    end else if (aw_outstanding & w_outstanding & write_resp_reg_valid & io_master_writeResp_ready) begin // @[AXIWriteBus.scala 105:94]
      aw_outstanding <= 1'h0; // @[AXIWriteBus.scala 107:22]
    end else begin
      aw_outstanding <= _GEN_0;
    end
    if (reset) begin // @[AXIWriteBus.scala 50:30]
      b_outstanding <= 1'h0; // @[AXIWriteBus.scala 50:30]
    end else if (aw_outstanding) begin // @[AXIWriteBus.scala 112:24]
      b_outstanding <= _GEN_17;
    end else if (aw_outstanding & w_outstanding & write_resp_reg_valid & io_master_writeResp_ready) begin // @[AXIWriteBus.scala 105:94]
      b_outstanding <= 1'h0; // @[AXIWriteBus.scala 109:21]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  write_addr_reg_valid = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  write_data_reg = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  write_data_reg_valid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  write_data_reg_strb = _RAND_3[3:0];
  _RAND_4 = {1{`RANDOM}};
  write_resp_reg_valid = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  w_outstanding = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  aw_outstanding = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  b_outstanding = _RAND_7[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module AXISlaveWriteMux(
  input         clock,
  input         reset,
  input         io_out_writeAddr_ready,
  output        io_out_writeAddr_valid,
  input         io_out_writeData_ready,
  output        io_out_writeData_valid,
  output [31:0] io_out_writeData_bits_data,
  output [3:0]  io_out_writeData_bits_strb,
  output        io_out_writeResp_ready,
  input         io_out_writeResp_valid,
  output        io_in_0_writeAddr_ready,
  input         io_in_0_writeAddr_valid,
  output        io_in_0_writeData_ready,
  input         io_in_0_writeData_valid,
  input  [31:0] io_in_0_writeData_bits_data,
  input  [3:0]  io_in_0_writeData_bits_strb,
  input         io_in_0_writeResp_ready,
  output        io_in_0_writeResp_valid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  wire  arbiter_io_in_0_valid; // @[AXISlaveWriteMux.scala 38:23]
  wire  arbiter_io_out_valid; // @[AXISlaveWriteMux.scala 38:23]
  reg [1:0] state; // @[AXISlaveWriteMux.scala 32:22]
  reg  w_determined; // @[AXISlaveWriteMux.scala 40:29]
  reg  aw_determined; // @[AXISlaveWriteMux.scala 41:30]
  reg [31:0] data_reg_data; // @[AXISlaveWriteMux.scala 48:25]
  reg [3:0] data_reg_strb; // @[AXISlaveWriteMux.scala 48:25]
  wire  _T_10 = state == 2'h1; // @[AXISlaveWriteMux.scala 133:19]
  wire  _T_13 = state == 2'h2; // @[AXISlaveWriteMux.scala 144:19]
  wire  _T_17 = state == 2'h3; // @[AXISlaveWriteMux.scala 157:19]
  wire  _GEN_38 = state == 2'h3 ? 1'h0 : 1'h1; // @[AXISlaveWriteMux.scala 157:31 158:20]
  wire  _GEN_40 = state == 2'h2 ? 1'h0 : _GEN_38; // @[AXISlaveWriteMux.scala 144:33 145:22]
  wire  _GEN_47 = state == 2'h1 ? 1'h0 : _GEN_40; // @[AXISlaveWriteMux.scala 133:33 134:20]
  wire  mask_0 = state == 2'h0 | _GEN_47; // @[AXISlaveWriteMux.scala 117:24 119:20]
  wire  _T_1 = io_in_0_writeData_ready & io_in_0_writeData_valid; // @[Decoupled.scala 52:35]
  wire  _T_5 = io_out_writeResp_ready & io_out_writeResp_valid; // @[Decoupled.scala 52:35]
  wire [1:0] _GEN_3 = _T_5 ? 2'h3 : state; // @[AXISlaveWriteMux.scala 106:34 107:15 32:22]
  wire  _T_7 = io_in_0_writeResp_ready & io_in_0_writeResp_valid; // @[Decoupled.scala 52:35]
  wire [1:0] _GEN_4 = _T_7 ? 2'h0 : state; // @[AXISlaveWriteMux.scala 111:45 112:15 32:22]
  wire [1:0] _GEN_5 = 2'h3 == state ? _GEN_4 : state; // @[AXISlaveWriteMux.scala 88:16 32:22]
  wire [31:0] _GEN_9 = _T_1 ? io_in_0_writeData_bits_data : data_reg_data; // @[AXISlaveWriteMux.scala 126:59 127:18 48:25]
  wire [3:0] _GEN_10 = _T_1 ? io_in_0_writeData_bits_strb : data_reg_strb; // @[AXISlaveWriteMux.scala 126:59 127:18 48:25]
  wire  _GEN_12 = _T_1 | w_determined; // @[AXISlaveWriteMux.scala 126:59 128:22 40:29]
  wire  _GEN_13 = arbiter_io_out_valid; // @[AXISlaveWriteMux.scala 121:31 122:48 72:30]
  wire  _GEN_25 = arbiter_io_out_valid | aw_determined; // @[AXISlaveWriteMux.scala 121:31 125:21 41:30]
  wire  _T_12 = io_out_writeAddr_ready & io_out_writeAddr_valid; // @[Decoupled.scala 52:35]
  wire  _GEN_33 = _T_12 ? 1'h0 : aw_determined; // @[AXISlaveWriteMux.scala 138:32 139:21 41:30]
  wire  _T_15 = io_out_writeData_ready & io_out_writeData_valid; // @[Decoupled.scala 52:35]
  wire  _GEN_35 = _T_15 ? 1'h0 : w_determined; // @[AXISlaveWriteMux.scala 149:34 150:22 40:29]
  wire  _GEN_46 = state == 2'h2 ? 1'h0 : _T_17; // @[AXISlaveWriteMux.scala 144:33 73:30]
  wire  _GEN_53 = state == 2'h1 ? 1'h0 : _T_13; // @[AXISlaveWriteMux.scala 133:33 142:28]
  wire  _GEN_57 = state == 2'h1 ? 1'h0 : _GEN_46; // @[AXISlaveWriteMux.scala 133:33 73:30]
  RRArbiter arbiter ( // @[AXISlaveWriteMux.scala 38:23]
    .io_in_0_valid(arbiter_io_in_0_valid),
    .io_out_valid(arbiter_io_out_valid)
  );
  assign io_out_writeAddr_valid = aw_determined; // @[AXISlaveWriteMux.scala 85:26]
  assign io_out_writeData_valid = w_determined; // @[AXISlaveWriteMux.scala 86:26]
  assign io_out_writeData_bits_data = data_reg_data; // @[AXISlaveWriteMux.scala 162:25]
  assign io_out_writeData_bits_strb = data_reg_strb; // @[AXISlaveWriteMux.scala 162:25]
  assign io_out_writeResp_ready = state == 2'h0 ? 1'h0 : _GEN_53; // @[AXISlaveWriteMux.scala 117:24 131:28]
  assign io_in_0_writeAddr_ready = state == 2'h0 | _GEN_47; // @[AXISlaveWriteMux.scala 117:24 119:20]
  assign io_in_0_writeData_ready = state == 2'h0 ? _GEN_13 : _T_10; // @[AXISlaveWriteMux.scala 117:24]
  assign io_in_0_writeResp_valid = state == 2'h0 ? 1'h0 : _GEN_57; // @[AXISlaveWriteMux.scala 117:24 73:30]
  assign arbiter_io_in_0_valid = io_in_0_writeAddr_valid & mask_0; // @[AXISlaveWriteMux.scala 80:56]
  always @(posedge clock) begin
    if (reset) begin // @[AXISlaveWriteMux.scala 32:22]
      state <= 2'h0; // @[AXISlaveWriteMux.scala 32:22]
    end else if (2'h0 == state) begin // @[AXISlaveWriteMux.scala 88:16]
      if (io_in_0_writeAddr_valid) begin // @[AXISlaveWriteMux.scala 90:24]
        if (_T_1) begin // @[AXISlaveWriteMux.scala 92:61]
          state <= 2'h2; // @[AXISlaveWriteMux.scala 93:17]
        end else begin
          state <= 2'h1; // @[AXISlaveWriteMux.scala 96:17]
        end
      end
    end else if (2'h1 == state) begin // @[AXISlaveWriteMux.scala 88:16]
      if (_T_1) begin // @[AXISlaveWriteMux.scala 101:45]
        state <= 2'h2; // @[AXISlaveWriteMux.scala 102:15]
      end
    end else if (2'h2 == state) begin // @[AXISlaveWriteMux.scala 88:16]
      state <= _GEN_3;
    end else begin
      state <= _GEN_5;
    end
    if (reset) begin // @[AXISlaveWriteMux.scala 40:29]
      w_determined <= 1'h0; // @[AXISlaveWriteMux.scala 40:29]
    end else if (state == 2'h0) begin // @[AXISlaveWriteMux.scala 117:24]
      if (arbiter_io_out_valid) begin // @[AXISlaveWriteMux.scala 121:31]
        w_determined <= _GEN_12;
      end
    end else if (!(state == 2'h1)) begin // @[AXISlaveWriteMux.scala 133:33]
      if (state == 2'h2) begin // @[AXISlaveWriteMux.scala 144:33]
        w_determined <= _GEN_35;
      end
    end
    if (reset) begin // @[AXISlaveWriteMux.scala 41:30]
      aw_determined <= 1'h0; // @[AXISlaveWriteMux.scala 41:30]
    end else if (state == 2'h0) begin // @[AXISlaveWriteMux.scala 117:24]
      aw_determined <= _GEN_25;
    end else if (state == 2'h1) begin // @[AXISlaveWriteMux.scala 133:33]
      aw_determined <= _GEN_33;
    end else if (state == 2'h2) begin // @[AXISlaveWriteMux.scala 144:33]
      aw_determined <= _GEN_33;
    end
    if (reset) begin // @[AXISlaveWriteMux.scala 48:25]
      data_reg_data <= 32'h0; // @[AXISlaveWriteMux.scala 48:25]
    end else if (state == 2'h0) begin // @[AXISlaveWriteMux.scala 117:24]
      if (arbiter_io_out_valid) begin // @[AXISlaveWriteMux.scala 121:31]
        data_reg_data <= _GEN_9;
      end
    end else if (state == 2'h1) begin // @[AXISlaveWriteMux.scala 133:33]
      data_reg_data <= _GEN_9;
    end
    if (reset) begin // @[AXISlaveWriteMux.scala 48:25]
      data_reg_strb <= 4'h0; // @[AXISlaveWriteMux.scala 48:25]
    end else if (state == 2'h0) begin // @[AXISlaveWriteMux.scala 117:24]
      if (arbiter_io_out_valid) begin // @[AXISlaveWriteMux.scala 121:31]
        data_reg_strb <= _GEN_10;
      end
    end else if (state == 2'h1) begin // @[AXISlaveWriteMux.scala 133:33]
      data_reg_strb <= _GEN_10;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  w_determined = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  aw_determined = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  data_reg_data = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  data_reg_strb = _RAND_4[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module AXILiteXBar(
  input         clock,
  input         reset,
  output        io_masters_0_aw_ready,
  input         io_masters_0_aw_valid,
  output        io_masters_0_w_ready,
  input         io_masters_0_w_valid,
  input  [31:0] io_masters_0_w_bits_data,
  input         io_masters_0_b_ready,
  output        io_masters_0_b_valid,
  output        io_masters_0_ar_ready,
  input         io_masters_0_ar_valid,
  input         io_masters_0_r_ready,
  output [31:0] io_masters_0_r_bits_data,
  input         io_slaves_0_aw_ready,
  output        io_slaves_0_aw_valid,
  input         io_slaves_0_w_ready,
  output        io_slaves_0_w_valid,
  output [31:0] io_slaves_0_w_bits_data,
  output [3:0]  io_slaves_0_w_bits_strb,
  output        io_slaves_0_b_ready,
  input         io_slaves_0_b_valid,
  input         io_slaves_0_ar_ready,
  output        io_slaves_0_ar_valid,
  output        io_slaves_0_r_ready,
  input         io_slaves_0_r_valid,
  input  [31:0] io_slaves_0_r_bits_data
);
  wire  readBuses_0_clock; // @[AXILiteXBar.scala 15:11]
  wire  readBuses_0_reset; // @[AXILiteXBar.scala 15:11]
  wire  readBuses_0_io_master_readAddr_ready; // @[AXILiteXBar.scala 15:11]
  wire  readBuses_0_io_master_readAddr_valid; // @[AXILiteXBar.scala 15:11]
  wire  readBuses_0_io_master_readData_ready; // @[AXILiteXBar.scala 15:11]
  wire  readBuses_0_io_master_readData_valid; // @[AXILiteXBar.scala 15:11]
  wire [31:0] readBuses_0_io_master_readData_bits_data; // @[AXILiteXBar.scala 15:11]
  wire  readBuses_0_io_slave_0_readAddr_ready; // @[AXILiteXBar.scala 15:11]
  wire  readBuses_0_io_slave_0_readAddr_valid; // @[AXILiteXBar.scala 15:11]
  wire  readBuses_0_io_slave_0_readData_ready; // @[AXILiteXBar.scala 15:11]
  wire  readBuses_0_io_slave_0_readData_valid; // @[AXILiteXBar.scala 15:11]
  wire [31:0] readBuses_0_io_slave_0_readData_bits_data; // @[AXILiteXBar.scala 15:11]
  wire  readMuxes_0_clock; // @[AXILiteXBar.scala 18:11]
  wire  readMuxes_0_reset; // @[AXILiteXBar.scala 18:11]
  wire  readMuxes_0_io_out_readAddr_ready; // @[AXILiteXBar.scala 18:11]
  wire  readMuxes_0_io_out_readAddr_valid; // @[AXILiteXBar.scala 18:11]
  wire  readMuxes_0_io_out_readData_ready; // @[AXILiteXBar.scala 18:11]
  wire  readMuxes_0_io_out_readData_valid; // @[AXILiteXBar.scala 18:11]
  wire [31:0] readMuxes_0_io_out_readData_bits_data; // @[AXILiteXBar.scala 18:11]
  wire  readMuxes_0_io_in_0_readAddr_ready; // @[AXILiteXBar.scala 18:11]
  wire  readMuxes_0_io_in_0_readAddr_valid; // @[AXILiteXBar.scala 18:11]
  wire  readMuxes_0_io_in_0_readData_ready; // @[AXILiteXBar.scala 18:11]
  wire  readMuxes_0_io_in_0_readData_valid; // @[AXILiteXBar.scala 18:11]
  wire [31:0] readMuxes_0_io_in_0_readData_bits_data; // @[AXILiteXBar.scala 18:11]
  wire  writeBuses_0_clock; // @[AXILiteXBar.scala 23:11]
  wire  writeBuses_0_reset; // @[AXILiteXBar.scala 23:11]
  wire  writeBuses_0_io_master_writeAddr_ready; // @[AXILiteXBar.scala 23:11]
  wire  writeBuses_0_io_master_writeAddr_valid; // @[AXILiteXBar.scala 23:11]
  wire  writeBuses_0_io_master_writeData_ready; // @[AXILiteXBar.scala 23:11]
  wire  writeBuses_0_io_master_writeData_valid; // @[AXILiteXBar.scala 23:11]
  wire [31:0] writeBuses_0_io_master_writeData_bits_data; // @[AXILiteXBar.scala 23:11]
  wire  writeBuses_0_io_master_writeResp_ready; // @[AXILiteXBar.scala 23:11]
  wire  writeBuses_0_io_master_writeResp_valid; // @[AXILiteXBar.scala 23:11]
  wire  writeBuses_0_io_slave_0_writeAddr_ready; // @[AXILiteXBar.scala 23:11]
  wire  writeBuses_0_io_slave_0_writeAddr_valid; // @[AXILiteXBar.scala 23:11]
  wire  writeBuses_0_io_slave_0_writeData_ready; // @[AXILiteXBar.scala 23:11]
  wire  writeBuses_0_io_slave_0_writeData_valid; // @[AXILiteXBar.scala 23:11]
  wire [31:0] writeBuses_0_io_slave_0_writeData_bits_data; // @[AXILiteXBar.scala 23:11]
  wire [3:0] writeBuses_0_io_slave_0_writeData_bits_strb; // @[AXILiteXBar.scala 23:11]
  wire  writeBuses_0_io_slave_0_writeResp_ready; // @[AXILiteXBar.scala 23:11]
  wire  writeBuses_0_io_slave_0_writeResp_valid; // @[AXILiteXBar.scala 23:11]
  wire  writeMuxes_0_clock; // @[AXILiteXBar.scala 27:11]
  wire  writeMuxes_0_reset; // @[AXILiteXBar.scala 27:11]
  wire  writeMuxes_0_io_out_writeAddr_ready; // @[AXILiteXBar.scala 27:11]
  wire  writeMuxes_0_io_out_writeAddr_valid; // @[AXILiteXBar.scala 27:11]
  wire  writeMuxes_0_io_out_writeData_ready; // @[AXILiteXBar.scala 27:11]
  wire  writeMuxes_0_io_out_writeData_valid; // @[AXILiteXBar.scala 27:11]
  wire [31:0] writeMuxes_0_io_out_writeData_bits_data; // @[AXILiteXBar.scala 27:11]
  wire [3:0] writeMuxes_0_io_out_writeData_bits_strb; // @[AXILiteXBar.scala 27:11]
  wire  writeMuxes_0_io_out_writeResp_ready; // @[AXILiteXBar.scala 27:11]
  wire  writeMuxes_0_io_out_writeResp_valid; // @[AXILiteXBar.scala 27:11]
  wire  writeMuxes_0_io_in_0_writeAddr_ready; // @[AXILiteXBar.scala 27:11]
  wire  writeMuxes_0_io_in_0_writeAddr_valid; // @[AXILiteXBar.scala 27:11]
  wire  writeMuxes_0_io_in_0_writeData_ready; // @[AXILiteXBar.scala 27:11]
  wire  writeMuxes_0_io_in_0_writeData_valid; // @[AXILiteXBar.scala 27:11]
  wire [31:0] writeMuxes_0_io_in_0_writeData_bits_data; // @[AXILiteXBar.scala 27:11]
  wire [3:0] writeMuxes_0_io_in_0_writeData_bits_strb; // @[AXILiteXBar.scala 27:11]
  wire  writeMuxes_0_io_in_0_writeResp_ready; // @[AXILiteXBar.scala 27:11]
  wire  writeMuxes_0_io_in_0_writeResp_valid; // @[AXILiteXBar.scala 27:11]
  AXIReadBus readBuses_0 ( // @[AXILiteXBar.scala 15:11]
    .clock(readBuses_0_clock),
    .reset(readBuses_0_reset),
    .io_master_readAddr_ready(readBuses_0_io_master_readAddr_ready),
    .io_master_readAddr_valid(readBuses_0_io_master_readAddr_valid),
    .io_master_readData_ready(readBuses_0_io_master_readData_ready),
    .io_master_readData_valid(readBuses_0_io_master_readData_valid),
    .io_master_readData_bits_data(readBuses_0_io_master_readData_bits_data),
    .io_slave_0_readAddr_ready(readBuses_0_io_slave_0_readAddr_ready),
    .io_slave_0_readAddr_valid(readBuses_0_io_slave_0_readAddr_valid),
    .io_slave_0_readData_ready(readBuses_0_io_slave_0_readData_ready),
    .io_slave_0_readData_valid(readBuses_0_io_slave_0_readData_valid),
    .io_slave_0_readData_bits_data(readBuses_0_io_slave_0_readData_bits_data)
  );
  AXISlaveReadMux readMuxes_0 ( // @[AXILiteXBar.scala 18:11]
    .clock(readMuxes_0_clock),
    .reset(readMuxes_0_reset),
    .io_out_readAddr_ready(readMuxes_0_io_out_readAddr_ready),
    .io_out_readAddr_valid(readMuxes_0_io_out_readAddr_valid),
    .io_out_readData_ready(readMuxes_0_io_out_readData_ready),
    .io_out_readData_valid(readMuxes_0_io_out_readData_valid),
    .io_out_readData_bits_data(readMuxes_0_io_out_readData_bits_data),
    .io_in_0_readAddr_ready(readMuxes_0_io_in_0_readAddr_ready),
    .io_in_0_readAddr_valid(readMuxes_0_io_in_0_readAddr_valid),
    .io_in_0_readData_ready(readMuxes_0_io_in_0_readData_ready),
    .io_in_0_readData_valid(readMuxes_0_io_in_0_readData_valid),
    .io_in_0_readData_bits_data(readMuxes_0_io_in_0_readData_bits_data)
  );
  AXIWriteBus writeBuses_0 ( // @[AXILiteXBar.scala 23:11]
    .clock(writeBuses_0_clock),
    .reset(writeBuses_0_reset),
    .io_master_writeAddr_ready(writeBuses_0_io_master_writeAddr_ready),
    .io_master_writeAddr_valid(writeBuses_0_io_master_writeAddr_valid),
    .io_master_writeData_ready(writeBuses_0_io_master_writeData_ready),
    .io_master_writeData_valid(writeBuses_0_io_master_writeData_valid),
    .io_master_writeData_bits_data(writeBuses_0_io_master_writeData_bits_data),
    .io_master_writeResp_ready(writeBuses_0_io_master_writeResp_ready),
    .io_master_writeResp_valid(writeBuses_0_io_master_writeResp_valid),
    .io_slave_0_writeAddr_ready(writeBuses_0_io_slave_0_writeAddr_ready),
    .io_slave_0_writeAddr_valid(writeBuses_0_io_slave_0_writeAddr_valid),
    .io_slave_0_writeData_ready(writeBuses_0_io_slave_0_writeData_ready),
    .io_slave_0_writeData_valid(writeBuses_0_io_slave_0_writeData_valid),
    .io_slave_0_writeData_bits_data(writeBuses_0_io_slave_0_writeData_bits_data),
    .io_slave_0_writeData_bits_strb(writeBuses_0_io_slave_0_writeData_bits_strb),
    .io_slave_0_writeResp_ready(writeBuses_0_io_slave_0_writeResp_ready),
    .io_slave_0_writeResp_valid(writeBuses_0_io_slave_0_writeResp_valid)
  );
  AXISlaveWriteMux writeMuxes_0 ( // @[AXILiteXBar.scala 27:11]
    .clock(writeMuxes_0_clock),
    .reset(writeMuxes_0_reset),
    .io_out_writeAddr_ready(writeMuxes_0_io_out_writeAddr_ready),
    .io_out_writeAddr_valid(writeMuxes_0_io_out_writeAddr_valid),
    .io_out_writeData_ready(writeMuxes_0_io_out_writeData_ready),
    .io_out_writeData_valid(writeMuxes_0_io_out_writeData_valid),
    .io_out_writeData_bits_data(writeMuxes_0_io_out_writeData_bits_data),
    .io_out_writeData_bits_strb(writeMuxes_0_io_out_writeData_bits_strb),
    .io_out_writeResp_ready(writeMuxes_0_io_out_writeResp_ready),
    .io_out_writeResp_valid(writeMuxes_0_io_out_writeResp_valid),
    .io_in_0_writeAddr_ready(writeMuxes_0_io_in_0_writeAddr_ready),
    .io_in_0_writeAddr_valid(writeMuxes_0_io_in_0_writeAddr_valid),
    .io_in_0_writeData_ready(writeMuxes_0_io_in_0_writeData_ready),
    .io_in_0_writeData_valid(writeMuxes_0_io_in_0_writeData_valid),
    .io_in_0_writeData_bits_data(writeMuxes_0_io_in_0_writeData_bits_data),
    .io_in_0_writeData_bits_strb(writeMuxes_0_io_in_0_writeData_bits_strb),
    .io_in_0_writeResp_ready(writeMuxes_0_io_in_0_writeResp_ready),
    .io_in_0_writeResp_valid(writeMuxes_0_io_in_0_writeResp_valid)
  );
  assign io_masters_0_aw_ready = writeBuses_0_io_master_writeAddr_ready; // @[AXILiteXBar.scala 37:15]
  assign io_masters_0_w_ready = writeBuses_0_io_master_writeData_ready; // @[AXILiteXBar.scala 38:14]
  assign io_masters_0_b_valid = writeBuses_0_io_master_writeResp_valid; // @[AXILiteXBar.scala 39:14]
  assign io_masters_0_ar_ready = readBuses_0_io_master_readAddr_ready; // @[AXILiteXBar.scala 32:15]
  assign io_masters_0_r_bits_data = readBuses_0_io_master_readData_bits_data; // @[AXILiteXBar.scala 33:14]
  assign io_slaves_0_aw_valid = writeMuxes_0_io_out_writeAddr_valid; // @[AXILiteXBar.scala 51:16]
  assign io_slaves_0_w_valid = writeMuxes_0_io_out_writeData_valid; // @[AXILiteXBar.scala 52:15]
  assign io_slaves_0_w_bits_data = writeMuxes_0_io_out_writeData_bits_data; // @[AXILiteXBar.scala 52:15]
  assign io_slaves_0_w_bits_strb = writeMuxes_0_io_out_writeData_bits_strb; // @[AXILiteXBar.scala 52:15]
  assign io_slaves_0_b_ready = writeMuxes_0_io_out_writeResp_ready; // @[AXILiteXBar.scala 53:15]
  assign io_slaves_0_ar_valid = readMuxes_0_io_out_readAddr_valid; // @[AXILiteXBar.scala 45:16]
  assign io_slaves_0_r_ready = readMuxes_0_io_out_readData_ready; // @[AXILiteXBar.scala 46:15]
  assign readBuses_0_clock = clock;
  assign readBuses_0_reset = reset;
  assign readBuses_0_io_master_readAddr_valid = io_masters_0_ar_valid; // @[AXILiteXBar.scala 32:15]
  assign readBuses_0_io_master_readData_ready = io_masters_0_r_ready; // @[AXILiteXBar.scala 33:14]
  assign readBuses_0_io_slave_0_readAddr_ready = readMuxes_0_io_in_0_readAddr_ready; // @[AXILiteXBar.scala 58:30]
  assign readBuses_0_io_slave_0_readData_valid = readMuxes_0_io_in_0_readData_valid; // @[AXILiteXBar.scala 58:30]
  assign readBuses_0_io_slave_0_readData_bits_data = readMuxes_0_io_in_0_readData_bits_data; // @[AXILiteXBar.scala 58:30]
  assign readMuxes_0_clock = clock;
  assign readMuxes_0_reset = reset;
  assign readMuxes_0_io_out_readAddr_ready = io_slaves_0_ar_ready; // @[AXILiteXBar.scala 45:16]
  assign readMuxes_0_io_out_readData_valid = io_slaves_0_r_valid; // @[AXILiteXBar.scala 46:15]
  assign readMuxes_0_io_out_readData_bits_data = io_slaves_0_r_bits_data; // @[AXILiteXBar.scala 46:15]
  assign readMuxes_0_io_in_0_readAddr_valid = readBuses_0_io_slave_0_readAddr_valid; // @[AXILiteXBar.scala 58:30]
  assign readMuxes_0_io_in_0_readData_ready = readBuses_0_io_slave_0_readData_ready; // @[AXILiteXBar.scala 58:30]
  assign writeBuses_0_clock = clock;
  assign writeBuses_0_reset = reset;
  assign writeBuses_0_io_master_writeAddr_valid = io_masters_0_aw_valid; // @[AXILiteXBar.scala 37:15]
  assign writeBuses_0_io_master_writeData_valid = io_masters_0_w_valid; // @[AXILiteXBar.scala 38:14]
  assign writeBuses_0_io_master_writeData_bits_data = io_masters_0_w_bits_data; // @[AXILiteXBar.scala 38:14]
  assign writeBuses_0_io_master_writeResp_ready = io_masters_0_b_ready; // @[AXILiteXBar.scala 39:14]
  assign writeBuses_0_io_slave_0_writeAddr_ready = writeMuxes_0_io_in_0_writeAddr_ready; // @[AXILiteXBar.scala 62:31]
  assign writeBuses_0_io_slave_0_writeData_ready = writeMuxes_0_io_in_0_writeData_ready; // @[AXILiteXBar.scala 62:31]
  assign writeBuses_0_io_slave_0_writeResp_valid = writeMuxes_0_io_in_0_writeResp_valid; // @[AXILiteXBar.scala 62:31]
  assign writeMuxes_0_clock = clock;
  assign writeMuxes_0_reset = reset;
  assign writeMuxes_0_io_out_writeAddr_ready = io_slaves_0_aw_ready; // @[AXILiteXBar.scala 51:16]
  assign writeMuxes_0_io_out_writeData_ready = io_slaves_0_w_ready; // @[AXILiteXBar.scala 52:15]
  assign writeMuxes_0_io_out_writeResp_valid = io_slaves_0_b_valid; // @[AXILiteXBar.scala 53:15]
  assign writeMuxes_0_io_in_0_writeAddr_valid = writeBuses_0_io_slave_0_writeAddr_valid; // @[AXILiteXBar.scala 62:31]
  assign writeMuxes_0_io_in_0_writeData_valid = writeBuses_0_io_slave_0_writeData_valid; // @[AXILiteXBar.scala 62:31]
  assign writeMuxes_0_io_in_0_writeData_bits_data = writeBuses_0_io_slave_0_writeData_bits_data; // @[AXILiteXBar.scala 62:31]
  assign writeMuxes_0_io_in_0_writeData_bits_strb = writeBuses_0_io_slave_0_writeData_bits_strb; // @[AXILiteXBar.scala 62:31]
  assign writeMuxes_0_io_in_0_writeResp_ready = writeBuses_0_io_slave_0_writeResp_ready; // @[AXILiteXBar.scala 62:31]
endmodule
module top_SoC(
  input         clock,
  input         reset,
  output [31:0] io_regs_0,
  output [31:0] io_regs_1,
  output [31:0] io_regs_2,
  output [31:0] io_regs_3,
  output [31:0] io_regs_4,
  output [31:0] io_regs_5,
  output [31:0] io_regs_6,
  output [31:0] io_regs_7,
  output [31:0] io_regs_8,
  output [31:0] io_regs_9,
  output [31:0] io_regs_10,
  output [31:0] io_regs_11,
  output [31:0] io_regs_12,
  output [31:0] io_regs_13,
  output [31:0] io_regs_14,
  output [31:0] io_regs_15,
  output [31:0] io_regs_16,
  output [31:0] io_regs_17,
  output [31:0] io_regs_18,
  output [31:0] io_regs_19,
  output [31:0] io_regs_20,
  output [31:0] io_regs_21,
  output [31:0] io_regs_22,
  output [31:0] io_regs_23,
  output [31:0] io_regs_24,
  output [31:0] io_regs_25,
  output [31:0] io_regs_26,
  output [31:0] io_regs_27,
  output [31:0] io_regs_28,
  output [31:0] io_regs_29,
  output [31:0] io_regs_30,
  output [31:0] io_regs_31,
  output        io_Hcf,
  output [31:0] io_inst,
  output [31:0] io_rdata,
  output [31:0] io_wdata,
  input         io_Dump_Mem,
  output        io_E_Branch_taken,
  output        io_Flush,
  output        io_Stall_MA,
  output        io_Stall_DH,
  output [31:0] io_IF_PC,
  output [31:0] io_ID_PC,
  output [31:0] io_EXE_PC,
  output [31:0] io_MEM_PC,
  output [31:0] io_WB_PC,
  output [31:0] io_EXE_alu_out,
  output [31:0] io_EXE_src1,
  output [31:0] io_EXE_src2,
  output [31:0] io_ALU_src1,
  output [31:0] io_ALU_src2,
  output [31:0] io_raddr,
  output [4:0]  io_WB_rd,
  output [31:0] io_WB_wdata,
  output        io_EXE_Jump,
  output        io_EXE_Branch
);
  wire  cpu_clock; // @[top_SoC.scala 64:19]
  wire  cpu_reset; // @[top_SoC.scala 64:19]
  wire [14:0] cpu_io_InstMem_raddr; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_InstMem_rdata; // @[top_SoC.scala 64:19]
  wire  cpu_io_DataMem_aw_ready; // @[top_SoC.scala 64:19]
  wire  cpu_io_DataMem_aw_valid; // @[top_SoC.scala 64:19]
  wire  cpu_io_DataMem_w_ready; // @[top_SoC.scala 64:19]
  wire  cpu_io_DataMem_w_valid; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_DataMem_w_bits_data; // @[top_SoC.scala 64:19]
  wire  cpu_io_DataMem_b_ready; // @[top_SoC.scala 64:19]
  wire  cpu_io_DataMem_b_valid; // @[top_SoC.scala 64:19]
  wire  cpu_io_DataMem_ar_ready; // @[top_SoC.scala 64:19]
  wire  cpu_io_DataMem_ar_valid; // @[top_SoC.scala 64:19]
  wire  cpu_io_DataMem_r_ready; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_DataMem_r_bits_data; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_1; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_2; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_3; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_4; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_5; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_6; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_7; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_8; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_9; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_10; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_11; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_12; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_13; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_14; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_15; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_16; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_17; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_18; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_19; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_20; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_21; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_22; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_23; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_24; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_25; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_26; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_27; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_28; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_29; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_30; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_regs_31; // @[top_SoC.scala 64:19]
  wire  cpu_io_Hcf; // @[top_SoC.scala 64:19]
  wire  cpu_io_E_Branch_taken; // @[top_SoC.scala 64:19]
  wire  cpu_io_Flush; // @[top_SoC.scala 64:19]
  wire  cpu_io_Stall_MA; // @[top_SoC.scala 64:19]
  wire  cpu_io_Stall_DH; // @[top_SoC.scala 64:19]
  wire [14:0] cpu_io_IF_PC; // @[top_SoC.scala 64:19]
  wire [14:0] cpu_io_ID_PC; // @[top_SoC.scala 64:19]
  wire [14:0] cpu_io_EXE_PC; // @[top_SoC.scala 64:19]
  wire [14:0] cpu_io_MEM_PC; // @[top_SoC.scala 64:19]
  wire [14:0] cpu_io_WB_PC; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_EXE_src1; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_EXE_src2; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_ALU_src1; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_ALU_src2; // @[top_SoC.scala 64:19]
  wire [14:0] cpu_io_raddr; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_EXE_alu_out; // @[top_SoC.scala 64:19]
  wire [4:0] cpu_io_WB_rd; // @[top_SoC.scala 64:19]
  wire [31:0] cpu_io_WB_wdata; // @[top_SoC.scala 64:19]
  wire  cpu_io_EXE_Jump; // @[top_SoC.scala 64:19]
  wire  cpu_io_EXE_Branch; // @[top_SoC.scala 64:19]
  wire  im_clock; // @[top_SoC.scala 65:18]
  wire [14:0] im_io_raddr; // @[top_SoC.scala 65:18]
  wire [31:0] im_io_inst; // @[top_SoC.scala 65:18]
  wire  datamem_clock; // @[top_SoC.scala 66:23]
  wire  datamem_reset; // @[top_SoC.scala 66:23]
  wire  datamem_io_slave_aw_ready; // @[top_SoC.scala 66:23]
  wire  datamem_io_slave_aw_valid; // @[top_SoC.scala 66:23]
  wire  datamem_io_slave_w_ready; // @[top_SoC.scala 66:23]
  wire  datamem_io_slave_w_valid; // @[top_SoC.scala 66:23]
  wire [31:0] datamem_io_slave_w_bits_data; // @[top_SoC.scala 66:23]
  wire [3:0] datamem_io_slave_w_bits_strb; // @[top_SoC.scala 66:23]
  wire  datamem_io_slave_b_ready; // @[top_SoC.scala 66:23]
  wire  datamem_io_slave_b_valid; // @[top_SoC.scala 66:23]
  wire  datamem_io_slave_ar_ready; // @[top_SoC.scala 66:23]
  wire  datamem_io_slave_ar_valid; // @[top_SoC.scala 66:23]
  wire  datamem_io_slave_r_ready; // @[top_SoC.scala 66:23]
  wire  datamem_io_slave_r_valid; // @[top_SoC.scala 66:23]
  wire [31:0] datamem_io_slave_r_bits_data; // @[top_SoC.scala 66:23]
  wire  datamem_io_dump; // @[top_SoC.scala 66:23]
  wire  bus_clock; // @[top_SoC.scala 78:19]
  wire  bus_reset; // @[top_SoC.scala 78:19]
  wire  bus_io_masters_0_aw_ready; // @[top_SoC.scala 78:19]
  wire  bus_io_masters_0_aw_valid; // @[top_SoC.scala 78:19]
  wire  bus_io_masters_0_w_ready; // @[top_SoC.scala 78:19]
  wire  bus_io_masters_0_w_valid; // @[top_SoC.scala 78:19]
  wire [31:0] bus_io_masters_0_w_bits_data; // @[top_SoC.scala 78:19]
  wire  bus_io_masters_0_b_ready; // @[top_SoC.scala 78:19]
  wire  bus_io_masters_0_b_valid; // @[top_SoC.scala 78:19]
  wire  bus_io_masters_0_ar_ready; // @[top_SoC.scala 78:19]
  wire  bus_io_masters_0_ar_valid; // @[top_SoC.scala 78:19]
  wire  bus_io_masters_0_r_ready; // @[top_SoC.scala 78:19]
  wire [31:0] bus_io_masters_0_r_bits_data; // @[top_SoC.scala 78:19]
  wire  bus_io_slaves_0_aw_ready; // @[top_SoC.scala 78:19]
  wire  bus_io_slaves_0_aw_valid; // @[top_SoC.scala 78:19]
  wire  bus_io_slaves_0_w_ready; // @[top_SoC.scala 78:19]
  wire  bus_io_slaves_0_w_valid; // @[top_SoC.scala 78:19]
  wire [31:0] bus_io_slaves_0_w_bits_data; // @[top_SoC.scala 78:19]
  wire [3:0] bus_io_slaves_0_w_bits_strb; // @[top_SoC.scala 78:19]
  wire  bus_io_slaves_0_b_ready; // @[top_SoC.scala 78:19]
  wire  bus_io_slaves_0_b_valid; // @[top_SoC.scala 78:19]
  wire  bus_io_slaves_0_ar_ready; // @[top_SoC.scala 78:19]
  wire  bus_io_slaves_0_ar_valid; // @[top_SoC.scala 78:19]
  wire  bus_io_slaves_0_r_ready; // @[top_SoC.scala 78:19]
  wire  bus_io_slaves_0_r_valid; // @[top_SoC.scala 78:19]
  wire [31:0] bus_io_slaves_0_r_bits_data; // @[top_SoC.scala 78:19]
  PiplinedCPU cpu ( // @[top_SoC.scala 64:19]
    .clock(cpu_clock),
    .reset(cpu_reset),
    .io_InstMem_raddr(cpu_io_InstMem_raddr),
    .io_InstMem_rdata(cpu_io_InstMem_rdata),
    .io_DataMem_aw_ready(cpu_io_DataMem_aw_ready),
    .io_DataMem_aw_valid(cpu_io_DataMem_aw_valid),
    .io_DataMem_w_ready(cpu_io_DataMem_w_ready),
    .io_DataMem_w_valid(cpu_io_DataMem_w_valid),
    .io_DataMem_w_bits_data(cpu_io_DataMem_w_bits_data),
    .io_DataMem_b_ready(cpu_io_DataMem_b_ready),
    .io_DataMem_b_valid(cpu_io_DataMem_b_valid),
    .io_DataMem_ar_ready(cpu_io_DataMem_ar_ready),
    .io_DataMem_ar_valid(cpu_io_DataMem_ar_valid),
    .io_DataMem_r_ready(cpu_io_DataMem_r_ready),
    .io_DataMem_r_bits_data(cpu_io_DataMem_r_bits_data),
    .io_regs_1(cpu_io_regs_1),
    .io_regs_2(cpu_io_regs_2),
    .io_regs_3(cpu_io_regs_3),
    .io_regs_4(cpu_io_regs_4),
    .io_regs_5(cpu_io_regs_5),
    .io_regs_6(cpu_io_regs_6),
    .io_regs_7(cpu_io_regs_7),
    .io_regs_8(cpu_io_regs_8),
    .io_regs_9(cpu_io_regs_9),
    .io_regs_10(cpu_io_regs_10),
    .io_regs_11(cpu_io_regs_11),
    .io_regs_12(cpu_io_regs_12),
    .io_regs_13(cpu_io_regs_13),
    .io_regs_14(cpu_io_regs_14),
    .io_regs_15(cpu_io_regs_15),
    .io_regs_16(cpu_io_regs_16),
    .io_regs_17(cpu_io_regs_17),
    .io_regs_18(cpu_io_regs_18),
    .io_regs_19(cpu_io_regs_19),
    .io_regs_20(cpu_io_regs_20),
    .io_regs_21(cpu_io_regs_21),
    .io_regs_22(cpu_io_regs_22),
    .io_regs_23(cpu_io_regs_23),
    .io_regs_24(cpu_io_regs_24),
    .io_regs_25(cpu_io_regs_25),
    .io_regs_26(cpu_io_regs_26),
    .io_regs_27(cpu_io_regs_27),
    .io_regs_28(cpu_io_regs_28),
    .io_regs_29(cpu_io_regs_29),
    .io_regs_30(cpu_io_regs_30),
    .io_regs_31(cpu_io_regs_31),
    .io_Hcf(cpu_io_Hcf),
    .io_E_Branch_taken(cpu_io_E_Branch_taken),
    .io_Flush(cpu_io_Flush),
    .io_Stall_MA(cpu_io_Stall_MA),
    .io_Stall_DH(cpu_io_Stall_DH),
    .io_IF_PC(cpu_io_IF_PC),
    .io_ID_PC(cpu_io_ID_PC),
    .io_EXE_PC(cpu_io_EXE_PC),
    .io_MEM_PC(cpu_io_MEM_PC),
    .io_WB_PC(cpu_io_WB_PC),
    .io_EXE_src1(cpu_io_EXE_src1),
    .io_EXE_src2(cpu_io_EXE_src2),
    .io_ALU_src1(cpu_io_ALU_src1),
    .io_ALU_src2(cpu_io_ALU_src2),
    .io_raddr(cpu_io_raddr),
    .io_EXE_alu_out(cpu_io_EXE_alu_out),
    .io_WB_rd(cpu_io_WB_rd),
    .io_WB_wdata(cpu_io_WB_wdata),
    .io_EXE_Jump(cpu_io_EXE_Jump),
    .io_EXE_Branch(cpu_io_EXE_Branch)
  );
  InstMem im ( // @[top_SoC.scala 65:18]
    .clock(im_clock),
    .io_raddr(im_io_raddr),
    .io_inst(im_io_inst)
  );
  DataMem datamem ( // @[top_SoC.scala 66:23]
    .clock(datamem_clock),
    .reset(datamem_reset),
    .io_slave_aw_ready(datamem_io_slave_aw_ready),
    .io_slave_aw_valid(datamem_io_slave_aw_valid),
    .io_slave_w_ready(datamem_io_slave_w_ready),
    .io_slave_w_valid(datamem_io_slave_w_valid),
    .io_slave_w_bits_data(datamem_io_slave_w_bits_data),
    .io_slave_w_bits_strb(datamem_io_slave_w_bits_strb),
    .io_slave_b_ready(datamem_io_slave_b_ready),
    .io_slave_b_valid(datamem_io_slave_b_valid),
    .io_slave_ar_ready(datamem_io_slave_ar_ready),
    .io_slave_ar_valid(datamem_io_slave_ar_valid),
    .io_slave_r_ready(datamem_io_slave_r_ready),
    .io_slave_r_valid(datamem_io_slave_r_valid),
    .io_slave_r_bits_data(datamem_io_slave_r_bits_data),
    .io_dump(datamem_io_dump)
  );
  AXILiteXBar bus ( // @[top_SoC.scala 78:19]
    .clock(bus_clock),
    .reset(bus_reset),
    .io_masters_0_aw_ready(bus_io_masters_0_aw_ready),
    .io_masters_0_aw_valid(bus_io_masters_0_aw_valid),
    .io_masters_0_w_ready(bus_io_masters_0_w_ready),
    .io_masters_0_w_valid(bus_io_masters_0_w_valid),
    .io_masters_0_w_bits_data(bus_io_masters_0_w_bits_data),
    .io_masters_0_b_ready(bus_io_masters_0_b_ready),
    .io_masters_0_b_valid(bus_io_masters_0_b_valid),
    .io_masters_0_ar_ready(bus_io_masters_0_ar_ready),
    .io_masters_0_ar_valid(bus_io_masters_0_ar_valid),
    .io_masters_0_r_ready(bus_io_masters_0_r_ready),
    .io_masters_0_r_bits_data(bus_io_masters_0_r_bits_data),
    .io_slaves_0_aw_ready(bus_io_slaves_0_aw_ready),
    .io_slaves_0_aw_valid(bus_io_slaves_0_aw_valid),
    .io_slaves_0_w_ready(bus_io_slaves_0_w_ready),
    .io_slaves_0_w_valid(bus_io_slaves_0_w_valid),
    .io_slaves_0_w_bits_data(bus_io_slaves_0_w_bits_data),
    .io_slaves_0_w_bits_strb(bus_io_slaves_0_w_bits_strb),
    .io_slaves_0_b_ready(bus_io_slaves_0_b_ready),
    .io_slaves_0_b_valid(bus_io_slaves_0_b_valid),
    .io_slaves_0_ar_ready(bus_io_slaves_0_ar_ready),
    .io_slaves_0_ar_valid(bus_io_slaves_0_ar_valid),
    .io_slaves_0_r_ready(bus_io_slaves_0_r_ready),
    .io_slaves_0_r_valid(bus_io_slaves_0_r_valid),
    .io_slaves_0_r_bits_data(bus_io_slaves_0_r_bits_data)
  );
  assign io_regs_0 = 32'h0; // @[top_SoC.scala 106:11]
  assign io_regs_1 = cpu_io_regs_1; // @[top_SoC.scala 106:11]
  assign io_regs_2 = cpu_io_regs_2; // @[top_SoC.scala 106:11]
  assign io_regs_3 = cpu_io_regs_3; // @[top_SoC.scala 106:11]
  assign io_regs_4 = cpu_io_regs_4; // @[top_SoC.scala 106:11]
  assign io_regs_5 = cpu_io_regs_5; // @[top_SoC.scala 106:11]
  assign io_regs_6 = cpu_io_regs_6; // @[top_SoC.scala 106:11]
  assign io_regs_7 = cpu_io_regs_7; // @[top_SoC.scala 106:11]
  assign io_regs_8 = cpu_io_regs_8; // @[top_SoC.scala 106:11]
  assign io_regs_9 = cpu_io_regs_9; // @[top_SoC.scala 106:11]
  assign io_regs_10 = cpu_io_regs_10; // @[top_SoC.scala 106:11]
  assign io_regs_11 = cpu_io_regs_11; // @[top_SoC.scala 106:11]
  assign io_regs_12 = cpu_io_regs_12; // @[top_SoC.scala 106:11]
  assign io_regs_13 = cpu_io_regs_13; // @[top_SoC.scala 106:11]
  assign io_regs_14 = cpu_io_regs_14; // @[top_SoC.scala 106:11]
  assign io_regs_15 = cpu_io_regs_15; // @[top_SoC.scala 106:11]
  assign io_regs_16 = cpu_io_regs_16; // @[top_SoC.scala 106:11]
  assign io_regs_17 = cpu_io_regs_17; // @[top_SoC.scala 106:11]
  assign io_regs_18 = cpu_io_regs_18; // @[top_SoC.scala 106:11]
  assign io_regs_19 = cpu_io_regs_19; // @[top_SoC.scala 106:11]
  assign io_regs_20 = cpu_io_regs_20; // @[top_SoC.scala 106:11]
  assign io_regs_21 = cpu_io_regs_21; // @[top_SoC.scala 106:11]
  assign io_regs_22 = cpu_io_regs_22; // @[top_SoC.scala 106:11]
  assign io_regs_23 = cpu_io_regs_23; // @[top_SoC.scala 106:11]
  assign io_regs_24 = cpu_io_regs_24; // @[top_SoC.scala 106:11]
  assign io_regs_25 = cpu_io_regs_25; // @[top_SoC.scala 106:11]
  assign io_regs_26 = cpu_io_regs_26; // @[top_SoC.scala 106:11]
  assign io_regs_27 = cpu_io_regs_27; // @[top_SoC.scala 106:11]
  assign io_regs_28 = cpu_io_regs_28; // @[top_SoC.scala 106:11]
  assign io_regs_29 = cpu_io_regs_29; // @[top_SoC.scala 106:11]
  assign io_regs_30 = cpu_io_regs_30; // @[top_SoC.scala 106:11]
  assign io_regs_31 = cpu_io_regs_31; // @[top_SoC.scala 106:11]
  assign io_Hcf = cpu_io_Hcf; // @[top_SoC.scala 107:10]
  assign io_inst = im_io_inst; // @[top_SoC.scala 109:11]
  assign io_rdata = datamem_io_slave_r_bits_data; // @[top_SoC.scala 110:12]
  assign io_wdata = datamem_io_slave_w_bits_data; // @[top_SoC.scala 111:12]
  assign io_E_Branch_taken = cpu_io_E_Branch_taken; // @[top_SoC.scala 114:21]
  assign io_Flush = cpu_io_Flush; // @[top_SoC.scala 115:12]
  assign io_Stall_MA = cpu_io_Stall_MA; // @[top_SoC.scala 116:15]
  assign io_Stall_DH = cpu_io_Stall_DH; // @[top_SoC.scala 117:15]
  assign io_IF_PC = {{17'd0}, cpu_io_IF_PC}; // @[top_SoC.scala 118:12]
  assign io_ID_PC = {{17'd0}, cpu_io_ID_PC}; // @[top_SoC.scala 119:12]
  assign io_EXE_PC = {{17'd0}, cpu_io_EXE_PC}; // @[top_SoC.scala 120:13]
  assign io_MEM_PC = {{17'd0}, cpu_io_MEM_PC}; // @[top_SoC.scala 121:13]
  assign io_WB_PC = {{17'd0}, cpu_io_WB_PC}; // @[top_SoC.scala 122:12]
  assign io_EXE_alu_out = cpu_io_EXE_alu_out; // @[top_SoC.scala 123:18]
  assign io_EXE_src1 = cpu_io_EXE_src1; // @[top_SoC.scala 124:15]
  assign io_EXE_src2 = cpu_io_EXE_src2; // @[top_SoC.scala 125:15]
  assign io_ALU_src1 = cpu_io_ALU_src1; // @[top_SoC.scala 126:15]
  assign io_ALU_src2 = cpu_io_ALU_src2; // @[top_SoC.scala 127:15]
  assign io_raddr = {{17'd0}, cpu_io_raddr}; // @[top_SoC.scala 128:12]
  assign io_WB_rd = cpu_io_WB_rd; // @[top_SoC.scala 129:12]
  assign io_WB_wdata = cpu_io_WB_wdata; // @[top_SoC.scala 130:15]
  assign io_EXE_Jump = cpu_io_EXE_Jump; // @[top_SoC.scala 131:15]
  assign io_EXE_Branch = cpu_io_EXE_Branch; // @[top_SoC.scala 132:17]
  assign cpu_clock = clock;
  assign cpu_reset = reset;
  assign cpu_io_InstMem_rdata = im_io_inst; // @[top_SoC.scala 95:24]
  assign cpu_io_DataMem_aw_ready = bus_io_masters_0_aw_ready; // @[top_SoC.scala 102:21]
  assign cpu_io_DataMem_w_ready = bus_io_masters_0_w_ready; // @[top_SoC.scala 102:21]
  assign cpu_io_DataMem_b_valid = bus_io_masters_0_b_valid; // @[top_SoC.scala 102:21]
  assign cpu_io_DataMem_ar_ready = bus_io_masters_0_ar_ready; // @[top_SoC.scala 102:21]
  assign cpu_io_DataMem_r_bits_data = bus_io_masters_0_r_bits_data; // @[top_SoC.scala 102:21]
  assign im_clock = clock;
  assign im_io_raddr = cpu_io_InstMem_raddr; // @[top_SoC.scala 99:15]
  assign datamem_clock = clock;
  assign datamem_reset = reset;
  assign datamem_io_slave_aw_valid = bus_io_slaves_0_aw_valid; // @[top_SoC.scala 103:20]
  assign datamem_io_slave_w_valid = bus_io_slaves_0_w_valid; // @[top_SoC.scala 103:20]
  assign datamem_io_slave_w_bits_data = bus_io_slaves_0_w_bits_data; // @[top_SoC.scala 103:20]
  assign datamem_io_slave_w_bits_strb = bus_io_slaves_0_w_bits_strb; // @[top_SoC.scala 103:20]
  assign datamem_io_slave_b_ready = bus_io_slaves_0_b_ready; // @[top_SoC.scala 103:20]
  assign datamem_io_slave_ar_valid = bus_io_slaves_0_ar_valid; // @[top_SoC.scala 103:20]
  assign datamem_io_slave_r_ready = bus_io_slaves_0_r_ready; // @[top_SoC.scala 103:20]
  assign datamem_io_dump = io_Dump_Mem; // @[top_SoC.scala 92:19]
  assign bus_clock = clock;
  assign bus_reset = reset;
  assign bus_io_masters_0_aw_valid = cpu_io_DataMem_aw_valid; // @[top_SoC.scala 102:21]
  assign bus_io_masters_0_w_valid = cpu_io_DataMem_w_valid; // @[top_SoC.scala 102:21]
  assign bus_io_masters_0_w_bits_data = cpu_io_DataMem_w_bits_data; // @[top_SoC.scala 102:21]
  assign bus_io_masters_0_b_ready = cpu_io_DataMem_b_ready; // @[top_SoC.scala 102:21]
  assign bus_io_masters_0_ar_valid = cpu_io_DataMem_ar_valid; // @[top_SoC.scala 102:21]
  assign bus_io_masters_0_r_ready = cpu_io_DataMem_r_ready; // @[top_SoC.scala 102:21]
  assign bus_io_slaves_0_aw_ready = datamem_io_slave_aw_ready; // @[top_SoC.scala 103:20]
  assign bus_io_slaves_0_w_ready = datamem_io_slave_w_ready; // @[top_SoC.scala 103:20]
  assign bus_io_slaves_0_b_valid = datamem_io_slave_b_valid; // @[top_SoC.scala 103:20]
  assign bus_io_slaves_0_ar_ready = datamem_io_slave_ar_ready; // @[top_SoC.scala 103:20]
  assign bus_io_slaves_0_r_valid = datamem_io_slave_r_valid; // @[top_SoC.scala 103:20]
  assign bus_io_slaves_0_r_bits_data = datamem_io_slave_r_bits_data; // @[top_SoC.scala 103:20]
endmodule
