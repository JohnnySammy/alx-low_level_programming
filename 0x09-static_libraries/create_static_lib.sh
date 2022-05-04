#!/bin/bash
gcc -Wall -Werror -Wextra -pendantic -c *.c
ar -rc libmy.a *.o
