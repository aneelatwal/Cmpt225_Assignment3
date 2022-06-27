
all:	x

x:	main.o
	g++ -o x main.o

main.o:	main.cpp a3.h
	g++ -c main.cpp

clean:	
	rm -f x *.o

