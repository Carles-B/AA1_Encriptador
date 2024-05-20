# AA1_Encriptador
El programa esta compuesto de 5 archivos principales:
-main.cc
-Encriptacion.cc
-Encriptacion.hh
-Funciones_auxiliares.cc
-Funciones_auxiliares.hh

Se ha usado un makefile para compilar y volcarlo todo en un ejecutable llamado program.exe.
Las funciones que han sido basadas en codigo externo son:
-FUNCIONES AUXILIARES:
  -read_and_decrypt_file(ifstream& file, int& checksum)
  -copy_file(const string& origin, const string& end, intro)
-ENCRIPTACION
  -string_caesar_cipher(const string& word, int shift): tambien el decipher
  -list<string> encrypt_words_sim(consts list<string>& listNotEncrypted, int shift, int& checksum)
  
