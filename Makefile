CC=gcc
SRC=main.c calc.c
TARGET=bin2dec
CFLAGS=-Wall -Wextra -std=c17 -g

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f *.o

.PHONY: all clean
