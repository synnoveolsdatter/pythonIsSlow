#!/bin/bash
echo ""
echo "Compiling C Code"
echo ""
gcc cCode.c -o c -Wall -Wpedantic
echo ""
echo "Timing C code"
cResult=time ./c 1000000
echo ""
echo ""
echo "Timing Python code"
pythonResult=time python3 pythonCode.py 1000000
echo ""
echo ""
echo "Comparing times"
if (cResult > pythonResult); then
    echo "C was faster!"
else
    echo "Python was faster!"

exit 0
