# Jacob Sorber

CC=gcc
CFLAGS=-Wall -g

all: main

mcp23017.o: mcp23017.h mcp23017.c
	$(CC) $(CFLAGS) -c mcp23017.c

main: mcp23017.o main.c
	$(CC) $(CFLAGS) -o main main.c mcp23017.o

clean:
	rm *.o main
