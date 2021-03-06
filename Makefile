FLAGS= -Wall -g
CC=gcc

all: connections main.o my_mat.o


connections:main.o lib.so
	$(CC) $(FLAGS) -o connections main.o ./lib.so 
lib.so:my_mat.o
	$(CC) -shared -o lib.so my_mat.o 
main.o:main.c my_mat.h
	$(CC) $(FLAGS) -c main.c
my_mat.o:my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

PHONY: all clean 
clean:
	rm -f *.a *.o *.so