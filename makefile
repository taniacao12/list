all: main.o list.o
	gcc list.o main.o

main.o: main.c list.h
	gcc -c main.c

list.o: list.c list.h
	gcc -c list.c

run:
	./a.out

clean:
	rm -rf *.o
	rm -rf *~
	rm -rf *.out