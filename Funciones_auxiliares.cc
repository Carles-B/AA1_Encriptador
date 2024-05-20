#include "Funciones_auxiliares.hh"
#include "Encriptacion.hh"

list<string> split(const string& line) {
	//Creo la lista donde añadire las palabras separadas
	list<string> tokens;	
	//Cogere una palabra de manera auxiliar
	string token;			
	//Pongo la linia sin filtrar en un stringstream
	istringstream tokenStream(line);	
	//Mientras se separan las palabras de la linea se añaden a la lista ya separadas
	while(tokenStream >> token) {		
		tokens.push_back(token);	
	}
	//Devuelvo la lista de palabras separadas
	return tokens;						
}


void put_text_in_new_file(ofstream& file, int& shift) {
    string line;
    getline(cin, line);
    while (line != "exit") {
        list<string> wordList = split(line);
        int checksum;
        list<string> encryptedList = encrypt_words_sim(wordList, shift, checksum);
        
		file << checksum << endl;
        for (auto it = encryptedList.begin(); it != encryptedList.end(); ++it) {
            file << *it << " ";
        }
        file << endl;

        getline(cin, line);
    }

    cout << "Guardando datos." << endl;
    file.close();
}

int put_text_in_file(ofstream& file, int& shift) {
    string line;
    getline(cin, line);
    int checksum;
    while (line != "exit") {
        list<string> wordList = split(line);
        list<string> encryptedList = encrypt_words_sim(wordList, shift, checksum);
        
        for (auto it = encryptedList.begin(); it != encryptedList.end(); ++it) {
            file << *it << " ";
        }
        file << endl;

        getline(cin, line);
    }
    
    cout << "Guardando datos." << endl;
    file.close();
    
    return checksum;

}

void read_and_decrypt_file(ifstream& file, int& checksum) {
    string line;
    while (getline(file, line)) {
        list<string> wordList = split(line);
        list<string> decryptedList = decrypt_words_sim(wordList, checksum);

        for (auto it = decryptedList.begin(); it != decryptedList.end(); ++it) {
            cout << *it << " ";
        }
        cout << endl;
    }
    file.close();
}

void copy_file(const string& origin, const string& end, int intro) {
	ifstream inFile(origin); // Abre el archivo de origen en modo de lectura
    ofstream outFile(end); // Abre el archivo de destino en modo de escritura

    if (inFile and outFile) {
        // Lee el contenido del archivo de origen línea por línea y escribe en el archivo de destino
        outFile << intro << endl;
        string line;
        while (getline(inFile, line)) {
            outFile << line << endl;
        }
    } else {
        cout << "No se pudo abrir uno o ambos archivos." << endl;
    }

    // Cierra ambos archivos
    inFile.close();
    outFile.close();
	
}

