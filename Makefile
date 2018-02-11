CC=gcc
CFLAGS=-std=c99 

all: secuenciaM

secuenciaM:
	$(CC) $(CFLAGS) secuenciaM.c -o secuenciaM


.PHONY: clean

clean:
	rm -vrf *.o secuenciaM *.dSYM

