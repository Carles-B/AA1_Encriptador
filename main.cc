#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include "Funciones_auxiliares.hh"
#include "Encriptacion.hh"

using namespace std;

int main() {
	string fileName = "historial_conversaciones.txt";
    ofstream outFile;
    ifstream inFile;
    int checksum = 1;
    
    outFile.open(fileName, ios::app); // Modo de apertura para agregar al final del archivo
    inFile.open(fileName);
	
	if (outFile.is_open()) {
		if (inFile.peek() == ifstream::traits_type::eof()) {
			put_text_in_new_file(outFile, checksum);
		}
		else {
			cout << "Mensajes guardados detectados, deseas recuperarlos?" << endl;
			string line;
			cin >> line;
			if (line == "Si") {
				read_and_decrypt_file(inFile, checksum);
				put_text_in_new_file(outFile, checksum);
				//int add = put_text_in_file(outFile, checksum);
				
				// En situacion ideal se habría hecho lo siguiente, pero no ha acabado de salir bien
				// copy_file(fileName, fileName, add);
				
			}
			else {
				put_text_in_new_file(outFile, checksum);
			}
		}
    } else {
        cerr << "No se pudo abrir el archivo para escritura." << endl;
        return 1;
    }
    
    outFile.close();
    inFile.close();
	
	return 0;
}
