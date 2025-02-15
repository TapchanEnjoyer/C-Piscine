#!/bin/bash

# Compile all .c files into an executable named rush01
cc -Wall -Wextra -o rush-01 main.c && ./rush-01 "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2" | cat -e


