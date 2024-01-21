#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *
ar -cr liball.a *.o
