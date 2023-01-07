#!/bin/bash
gcc -wall -wextro -werror -pedantic -c *.c
ar rc liball.a *.o
