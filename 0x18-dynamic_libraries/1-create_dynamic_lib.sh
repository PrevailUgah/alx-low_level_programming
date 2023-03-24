#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -o liball.so
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH
