# Test makefile
CC = gcc

scpod: main.o sfuncs.o parser.o
	${CC} main.o sfuncs.o parser.o -o scpod
	chmod +x scpod

main.o: main.c
	${CC} -c main.c

sfuncs.o: sfuncs.c
	${CC} -c sfuncs.c

parser.o: parser.c parser.h
	${CC} -c parser.c
