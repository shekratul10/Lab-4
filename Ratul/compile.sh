#!/bin/sh

rm -rf obj_dir
<<<<<<< HEAD
rm -rf RISC-V.vcd
=======
rm -rf RISC_V.vcd
>>>>>>> 0110eeb (fixed ALU comb loop 01/11/2022)

verilator -Wall --cc --trace RISC_V.sv --exe RISC_V_tb.cpp

make -j -C obj_dir/ -f VRISC_V.mk VRISC_V

<<<<<<< HEAD
obj_dir/VRISC-V
=======
obj_dir/VRISC_V
>>>>>>> 0110eeb (fixed ALU comb loop 01/11/2022)
