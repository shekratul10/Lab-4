#!/bin/sh

#rm -rf obj_dir
#rm -rf RISC-V.vcd

verilator -Wall --cc --trace RISC-V.sv --exe RISC-V_tb.cpp

make -j -C obj_dir/ -f VRISC-V.mk VRISC-V

obj_dir/VRISC-V