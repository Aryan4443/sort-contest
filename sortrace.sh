// Name: Aryan Lakhani
// Class (CECS 325-01)
// Project Name (Prog 3 – Sort contest)
// Due Date (10/9/2005)
//
// I certify that this program is my own original work. I did not copy any part of this program from
// any other source. I further certify that I typed each and every line of code in this program.



#!/usr/bin/env bash
set -e

echo "Generating 1000000 random numbers"
sleep 1
./generate 1000000 -100000 100000

echo "Starting system sort"
sleep 1
{ time sort -n numbers.dat > systemsort.out; } 2>&1 >> sortrace.log

echo "Starting mysort"
sleep 1
{ time ./mysort numbers.dat mysort.out; } 2>&1 >> sortrace.log

wc mysort.out >> sortrace.log
sort -c -n mysort.out 2>> sortrace.log
