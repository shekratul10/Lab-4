#!/bin/sh

rm -rf obj_dir
rm -rf RISC-V.vcd

verilator -Wall --cc --trace RISC_V.sv --exe RISC_V_tb.cpp

make -j -C obj_dir/ -f VRISC_V.mk VRISC_V

obj_dir/VRISC-V