SquareRoot: SquareRoot.o
	g++ -g -o SquareRoot.exe SquareRoot.o -pthread    

SquareRoot.o: SquareRoot/SquareRoot.cpp
	g++ -g  -c -pthread SquareRoot/SquareRoot.cpp
