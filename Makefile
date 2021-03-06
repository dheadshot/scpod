# Test makefile

#Definitions:
CC = gcc
DEBUGFLAGS = -DDEBUG
NEWFLAGS = -DNEWSKIPS
OSLINUX = -DOS_LINUX
OSWINDOWS = -DOS_WINDOWS
WINLIB = -lShlwapi -lKernel32
LINLIB = 

#Uncomment the below to turn on Debug mode:
DCFLAGS = ${DEBUGFLAGS}

#Change the below to OSWINDOWS from OSLINUX to compile in Windows:
OSDEF = ${OSLINUX}

#Change the below to WINLIB from LINLIB to compile in Windows:
OSLIB = ${LINLIB}

dummy: 
	echo "Use make dochip, make dochiptest, make dox86linux or make dox86linuxtest!"

dochip: dochiptest
	cp scpoddb.bin chip/

dochiptest: scpod
	mv *.o scpod chip/

dox86linux: dox86linuxtest
	cp scpoddb.bin x86linux/

dox86linuxtest: scpod
	mv *.o scpod x86linux/

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
