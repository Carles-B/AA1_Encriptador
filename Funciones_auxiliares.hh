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
// Post: Se ha guardado todo el texto que ha entrado por el canal de entrada
//		 en un documento en formato txt
void put_text_in_file(ofstream& file, int& shift);

// Pre: Cierto
// Post: Se ha guardado todo el texto que ha entrado por el canal de entrada
//		 en un documento en formato txt
void read_and_decrypt_file(ifstream& file, int& checksum);
