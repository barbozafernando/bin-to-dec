all: 
	gcc -o bin-to-dec main.c utils.c

clean:
	rm -rf *.o
