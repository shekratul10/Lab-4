#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VRISC_V.h"

#include "vbuddy.cpp"
#define MAX_SIM_CYC 1000000


int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  VRISC_V* risc_v = new VRISC_V;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  risc_v->trace (tfp, 99);
  tfp->open ("RISC_V.vcd");

<<<<<<< HEAD
  if (vbdOpen()!=1) return(-1);
  vbdHeader("RISC_V Test"); // My branch :)
  vbdSetMode(0);
=======
  // if (vbdOpen()!=1) return(-1);
  // vbdHeader("RISC_V Test"); // My branch :)
  // vbdSetMode(0);
>>>>>>> 0110eeb (fixed ALU comb loop 01/11/2022)
 
 
  risc_v->clk = 1;
  risc_v->rst = 0;


  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      risc_v->clk = !risc_v->clk;
      risc_v->eval ();
    }
<<<<<<< HEAD

    vbdCycle(simcyc);


    vbdHex(1, int(risc_v->a0) & 0xF);
    vbdHex(2, int(risc_v->a0) >> 4 & 0xF);
    vbdHex(3, int(risc_v->a0) >> 8 & 0xF);
=======
    std::cout << "ao: " << risc_v->a0 << std::endl;

    // vbdCycle(simcyc);


    // vbdHex(1, int(risc_v->a0) & 0xF);
    // vbdHex(2, int(risc_v->a0) >> 4 & 0xF);
    // vbdHex(3, int(risc_v->a0) >> 8 & 0xF);
>>>>>>> 0110eeb (fixed ALU comb loop 01/11/2022)
    
    if ((Verilated::gotFinish())) 
      exit(0);
  }

<<<<<<< HEAD
  vbdClose();
=======
  // vbdClose();
>>>>>>> 0110eeb (fixed ALU comb loop 01/11/2022)
  tfp->close(); 
  printf("Exiting\n");
  exit(0);
}
