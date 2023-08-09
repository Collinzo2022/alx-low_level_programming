#!/bin/bash
gcc -c *.c
ar rcs liballa.a *.o
rm -f *.o
echo "Static library liball.a created successfully!"
