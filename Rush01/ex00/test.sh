#!/bin/bash

# Compile all .c files into an executable named rush01
cc -Wall -Wextra -o rush-01 *.c && ./rush-01 "2 1 3 2 2 2 3 1 2 3 2 4 1 2 2 3 1 5 2 2" | cat -e
printf "\n"
