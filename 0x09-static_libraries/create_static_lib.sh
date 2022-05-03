#!/bin/bash
gcc -c Werror -Wall -Wextra *.c
ar -r libmy.a *.o 
ranlib libmy.a
