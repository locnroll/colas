CC = g++
CFLAGS = -Wall -Wextra -pedantic
all: colas

colas: colas.cc cola_float.o
	$(CC) $(CFLAGS) colas.cc cola_float.o -o colas

cola_float.o: cola_float.cc
	$(CC) -c cola_float.cc

