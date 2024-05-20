#include <iostream>
#include <string>
#include <fstream>
#include <list>
using namespace std;

// Pre: Cierto
// Post: Se ha aplicado el cifrado César con el shift correspondiente
string caesar_cipher(const string& word, int shift);

// Pre: Cierto
// Post: Se desencriptado la palabra con el shift correspondiente
string caesar_decipher(const string& word, int shift);

// Pre: listNotEncrypted contiene al menos 1 string, checkSum > 0
// Post: Devuelve una lista con las mismas palabras que listNotEncrypted pero
// 		 con cada carácter igual a la suma en ASCII de él mismo y el checkSum
list<string> encrypt_words_sim(const list<string>& listNotEncrypted, int shift, int& checksum);

// Pre: listEncrypted esta encriptada con el cifrado César , shift correspondiente
// Post: Devuelve la lista desencriptada
list<string> decrypt_words_sim(const list<string>& listEncrypted, int shift);

