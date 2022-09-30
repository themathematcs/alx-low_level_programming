#!/bin/bash
gcc -wall -wextra -werror -pendantic -c *.c
ar rc liball.a *.o
