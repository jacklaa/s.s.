CC=gcc
CFLAGS=-std=c99 -g -Wall

all: secuenciaM

secuenciaM:
	$(CC) $(CFLAGS) -o secuenciaM secuenciaM.c


.PHONY: clean

clean:
	rm -vrf *.o secuenciaM *.dSYM

