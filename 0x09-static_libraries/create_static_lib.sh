#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c *.h
ar -cr liball.a *.o
