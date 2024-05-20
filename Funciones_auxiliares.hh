#include <iostream>
#include <sstream>
#include <string>
#include <list>
using namespace std;

// Pre: Cierto
// Post: Devuelve una lista de strings en la que cada string es una palabra 
//		 de la línea, sin espacios
list<string> split(const string& line);

// Pre: Cierto
// Post: Se ha añadido el checksum al principio del file, además de guardar
//		 todo lo que ha entrado por el canal de entrada
void put_text_in_new_file(ofstream& file, int& shift);

// Pre: Cierto
// Post: Devuelve el nuevo checksum, sumado al texto anterior
int put_text_in_file(ofstream& file, int& shift);

// Pre: Cierto
// Post: Se ha guardado todo el texto que ha entrado por el canal de entrada
//		 en un documento en formato txt
void read_and_decrypt_file(ifstream& file, int& checksum);

// Pre: Cierto
// Post: Se ha copiado el contenido de los ficheros de origen y destino con la
//		 intro al principio del fichero de destino
void copy_file(const string& origin, const string& end, int intro);
