# Test makefile

#Definitions:
CC = gcc
DEBUGFLAGS = -DDEBUG
OSLINUX = -DOS_LINUX
OSWINDOWS = -DOS_WINDOWS
WINLIB = -lShlwapi
LINLIB = 

#Uncomment the below to turn on Debug mode:
#DCFLAGS = ${DEBUGFLAGS}

#Change the below to OSWINDOWS from OSLINUX to compile in Windows:
OSDEF = ${OSLINUX}

#Change the below to WINLIB from LINLIB to compile in Windows:
OSLIB = ${LINLIB}

scpod: main.o sfuncs.o parser.o dbexchange.o extprgfuncs.o
	${CC} ${DCFLAGS} ${OSDEF} main.o sfuncs.o parser.o dbexchange.o extprgfuncs.o -lsqlite3 ${OSLIB} -o scpod
	chmod +x scpod

main.o: main.c
	${CC} ${DCFLAGS} ${OSDEF} -c main.c

sfuncs.o: sfuncs.c
	${CC} ${DCFLAGS} ${OSDEF} -c sfuncs.c

parser.o: parser.c parser.h
	${CC} ${DCFLAGS} ${OSDEF} -c parser.c

dbexchange.o: dbexchange.c dbexchange.h
	${CC} ${DCFLAGS} ${OSDEF} -c dbexchange.c

extprgfuncs.o: extprgfuncs.c
	${CC} ${DCFLAGS} ${OSDEF} -c extprgfuncs.c
