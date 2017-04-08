# Test makefile
CC = gcc
DEBUGFLAGS = -DDEBUG
#DCFLAGS = ${DEBUGFLAGS}

scpod: main.o sfuncs.o parser.o
	${CC} ${DCFLAGS} main.o sfuncs.o parser.o -o scpod
	chmod +x scpod

main.o: main.c
	${CC} ${DCFLAGS} -c main.c

sfuncs.o: sfuncs.c
	${CC} ${DCFLAGS} -c sfuncs.c

parser.o: parser.c parser.h
	${CC} ${DCFLAGS} -c parser.c
