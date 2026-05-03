# Jacob Sorber

CC=gcc
CFLAGS=-Wall -g

all: main

%.o: %.c
	$(CC) $(CFLAGS) -c $^

main: io_hal.o mcp23017.o main.c
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm *.o main
