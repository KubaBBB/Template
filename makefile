all: program

program: company.o toys.o shops.o main.o 
			g++ company.o toys.o shops.o main.o  -o program

toys.o: toys.cpp toys.h vector.h iterator.h
			g++ -c -Wall toys.cpp

shops.o: shops.cpp shops.h vector.h iterator.h
			g++ -c -Wall shops.cpp 


company.o: company.cpp company.h vector.h iterator.h
			g++ -c -Wall company.cpp


main.o: main.cpp
			g++ -c -Wall main.cpp

clean: 
	rm -rf *o prog
