CC=gcc
SRC=main.c
TARGET=bin-to-dec
CFLAGS=-Wall -Wextra -std=c11 -g

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f *.o

.PHONY: all clean
