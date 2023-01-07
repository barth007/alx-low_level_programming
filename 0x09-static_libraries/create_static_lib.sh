#!/bin/bash
gcc -c -Wall -Werror *.c
ar rc liball.a *.o

