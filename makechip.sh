#!/bin/bash
if test  -z "$1" -o "$1" = "t"; then
make dochiptest
elif test "$1" = "f"; then
make dochip
else
echo "Use $0 f for final compilation and $0 t (or just $0 ) to compile for testing."
fi
