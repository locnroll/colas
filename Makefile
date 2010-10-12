CC = g++
CFLAGS = -Wall -Wextra -pedantic -g
all: main

main: main.cc fqueue.o
	$(CC) $(CFLAGS) main.cc fqueue.o -o main

fqueue.o: fqueue.cc
	$(CC) -c fqueue.cc

