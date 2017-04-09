# Test makefile
CC = gcc
DEBUGFLAGS = -DDEBUG
#DCFLAGS = ${DEBUGFLAGS}

scpod: main.o sfuncs.o parser.o dbexchange.o
	${CC} ${DCFLAGS} main.o sfuncs.o parser.o dbexchange.o -lsqlite3 -o scpod
	chmod +x scpod

main.o: main.c
	${CC} ${DCFLAGS} -c main.c

sfuncs.o: sfuncs.c
	${CC} ${DCFLAGS} -c sfuncs.c

parser.o: parser.c parser.h
	${CC} ${DCFLAGS} -c parser.c

dbexchange.o: dbexchange.c dbexchange.h
	${CC} ${DCFLAGS} -c dbexchange.c
