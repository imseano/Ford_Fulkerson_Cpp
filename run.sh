#!/bin/bash

# Author: Sean Oreta
# CWID: 886349166
# Email: soreta@csu.fullerton.edu
# Class: CPSC240
# Section: 1
# Program name: Merge Sort Benchmark
# Start Date: 2022-11-01
# Due Date: 2022-12-02
# Instructions:
#    1. Make sure that , and run.sh are in the same folder
#    2. Make sure both NASM and GCC are installed.
#    3. Give run.sh executable permissions
#    4. Type ./run.sh in terminal
#

rm *.o
rm *.out

echo "Compile main"
g++ -c -m64 -Wall -o main.o main.cpp -fno-pie -no-pie -std=c++17
g++ -m64 -o ff.out main.o -fno-pie -no-pie -std=c++17

./ff.out
