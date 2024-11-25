#!/bin/sh
rm -rf libft.a
gcc -Wall -Werror -Wextra -c *.c
ar rcs libft.a *.o
rm -rf *.o
