CC = gcc

main: main.o add.o
	$(CC) -o main main.o add.o

main.o: main.c
	$(CC) -c main.c 

add.o: add.c
	$(CC) -c add.c

clean:
	rm -rf *.o main