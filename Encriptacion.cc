#include "Encriptacion.hh"

string caesar_cipher(const string& word, int shift) {
    string result;
    for (int i = 0; i < word.length(); ++i) {
		char c = word[i];
        if (isalpha(c)) {
            char offset = isupper(c) ? 'A' : 'a';
            c = (c - offset + shift) % 26 + offset;
        }
        result += c;
    }
    return result;
}

string caesar_decipher(const string& word, int shift) {
    return caesar_cipher(word, 26 - shift);
}


list<string> encrypt_words_sim(const list<string>& listNotEncrypted, int shift, int& checksum) {
    list<string> encryptedList;
    checksum = 0;
    for (auto it = listNotEncrypted.begin(); it != listNotEncrypted.end(); ++it) {
        string encrypted_word = caesar_cipher(*it, shift);
        encryptedList.push_back(encrypted_word);
        for (char c : encrypted_word) {
            checksum += static_cast<int>(c);
        }
    }
    return encryptedList;
}

list<string> decrypt_words_sim(const list<string>& listEncrypted, int shift) {
    list<string> decryptedList;
    for (auto it = listEncrypted.begin(); it != listEncrypted.end(); ++it) {
        decryptedList.push_back(caesar_decipher(*it, shift));
    }
    return decryptedList;
}
