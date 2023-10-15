CC = gcc

all: menu clean


menu: menu.o abs_max.o abs_min.o diff.o sum.o output.o
	$(CC) menu.o abs_max.o abs_min.o diff.o sum.o output.o -o result
menu.o: menu.c output.h
	$(CC) -c menu.c

abs_max.o: abs_max.c abs_max.h
	$(CC) -c abs_max.c

abs_min.o: abs_min.c abs_min.h
	$(CC) -c abs_min.c

diff.o: diff.c diff.h
	$(CC) -c diff.c

sum.o: sum.c sum.h
	$(CC) -c sum.c

output.o: output.c output.h abs_max.h abs_min.h diff.h sum.h
	$(CC) -c output.c


clean:
	rm -f *.o
