CC=gcc
TARGET=bin2dec
SRC=main.c calc.c
CFLAGS=-Wall -Wextra -std=c17 -g

all:
		$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

test:
		$(CC) test.c calc.c -o test && ./test

clean:
		rm -f *.o test bin2dec

.PHONY: all clean test
