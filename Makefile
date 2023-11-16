CC = gcc
CFLAGS = -Wall -Wextra

all: main

main: main.o statistics.o
	$(CC) $(CFLAGS) -o main main.o statistics.o

main.o: main.c statistics.h
	$(CC) $(CFLAGS) -c main.c

statistics.o: statistics.c statistics.h
	$(CC) $(CFLAGS) -c statistics.c

clean:
	rm -f *.o main
