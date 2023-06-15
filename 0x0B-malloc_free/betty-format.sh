#!/bin/bash

# Specify the directory to search for C files
dir= ./*.c

# Run clang-format on all C files in the directory
for file in $dir/*.c; do
	if [[$file == *.c ]]; then 
		clang-format -i $file
	else
		echo "skipping $file not a .c file"
	fi
done
