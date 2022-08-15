CC=gcc
CFLAGS=-Wall -ansi -pedantic

programa: main.o conversion.o impresion.o
	$(CC) -o programa main.o conversion.o impresion.o

.c.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm *.o programa
	ls -la

all: clean programa
