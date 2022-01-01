CC = g++ -g

all: hw04 tar

hw04: hw04.cpp hw04.h hw04f.o
	$(CC) hw04.cpp -o hw04 hw04f.o

hw04f.o: hw04f.cpp hw04.h
	$(CC) -c hw04f.cpp -o hw04f.o

clean:
	rm *.o hw04 hw04.tar hw04.scr

tar:
	tar cf hw04.tar Makefile hw04.cpp hw04.scr testanswers.txt hw04f.cpp hw04.h
