
all:mymaths mymathd  mains maind

mymaths: myMath.o
	ar -rcs libmyMath.a myMath.o


mymathd: myMath.o 
	gcc -shared -o libmyMath.so myMath.o


mains: main.o libmyMath.a
	gcc -Wall -g -o mains main.o libmyMath.a


maind: main.o libmyMath.so
	gcc -Wall -g -o maind main.o ./libmyMath.so

myMath.o: power.c basicMath.c myMath.h
	gcc -Wall -g -c power.c
	gcc -Wall -g -c basicMath.c
	ld -relocatable basicMath.o power.o -o myMath.o

main.o: main.c myMath.h
	gcc -Wall -g -c main.c


PHONY: clean all

clean:
	rm -f *.o *.a *.so *.exe
