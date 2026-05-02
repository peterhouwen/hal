# Jacob Sorber

CC=gcc
CFLAGS=-Wall -g

all: main

%.o: %.c
	$(CC) $(CFLAGS) -c $^ 

main: mcp23017.o main.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm *.o main
