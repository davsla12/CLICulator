all: ukazka

ukazka: ukazka.o test.o
	gcc ukazka.o test.o -o ukazka

ukazka.o: ukazka.c test.h
	gcc -Wall -c ukazka.c

test.o: test.c test.h
	gcc -Wall -c test.c

clean:
	rm -f *.o ukazka
