all: colas

colas: colas.cc cola_float.o
	g++ colas.cc cola_float.o -o colas

cola_float.o: cola_float.cc
	g++ -c cola_float.cc

