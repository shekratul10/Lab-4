#include "verilated.h"
#include "verilated_vcd_c.h"
#include "VRISC-V.h"


#define MAX_SIM_CYC 1000000


int main(int argc, char **argv, char **env) {
  int simcyc;     // simulation clock count
  int tick;       // each clk cycle has two ticks for two edges

  Verilated::commandArgs(argc, argv);
  // init top verilog instance
  Vf1_fsm* top = new Vf1_fsm;
  // init trace dump
  Verilated::traceEverOn(true);
  VerilatedVcdC* tfp = new VerilatedVcdC;
  top->trace (tfp, 99);
  tfp->open ("RISC-V.vcd");
 
 
  top->clk = 1;
  top->rst = 0;
  
  // run simulation for MAX_SIM_CYC clock cycles
  for (simcyc=0; simcyc<MAX_SIM_CYC; simcyc++) {
    // dump variables into VCD file and toggle clock
    for (tick=0; tick<2; tick++) {
      tfp->dump (2*simcyc+tick);
      top->clk = !top->clk;
      top->eval ();
    }

    
    //if (simcyc == 4 && top->a0 == ){
    //  std::cout >> "a0 asserted correctly" >> std::endl;
    //}
    //if(simcyc == )
    if ((Verilated::gotFinish())) 
      exit(0);
  }

  
  tfp->close(); 
  printf("Exiting\n");
  exit(0);
}
