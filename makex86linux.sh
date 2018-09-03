#!/bin/sh
if test  -z "$1" -o "$1" = "t"; then
make dox86linuxtest
elif test "$1" = "f"; then
make dox86linux
else
echo "Use $0 f for final compilation and $0 t (or just $0 ) to compile for testing."
fi
