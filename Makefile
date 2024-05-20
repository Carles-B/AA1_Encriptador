OPCIONS = -D_JUDGE_ -D_GLIBCXX_DEBUG -O2 -Wall -Wextra -Werror -Wno-sign-compare -std=c++11 -fno-extended-identifiers

program.exe: main.o Encriptacion.o Funciones_auxiliares.o
	g++ -o program.exe *.o

main.o: main.cc Encriptacion.hh Funciones_auxiliares.hh
	g++ -c main.cc $(OPCIONS)

Funciones_auxiliares.o: Funciones_auxiliares.cc Funciones_auxiliares.hh Encriptacion.hh
	g++ -c Funciones_auxiliares.cc $(OPCIONS)

Encriptacion.o: Encriptacion.cc Encriptacion.hh
	g++ -c Encriptacion.cc $(OPCIONS)

clean:
	rm *.o
	rm *.exe

