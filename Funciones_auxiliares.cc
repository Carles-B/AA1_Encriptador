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


void put_text_in_file(ofstream& file, int& shift) {
    string line;
    getline(cin, line);
    while (line != "exit") {
        list<string> wordList = split(line);
        int checksum;
        list<string> encryptedList = encrypt_words_sim(wordList, shift, checksum);

        for (auto it = encryptedList.begin(); it != encryptedList.end(); ++it) {
            file << *it << " ";
        }
        file << endl;

        getline(cin, line);
    }

    cout << "Guardando datos." << endl;
    file.close();
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

