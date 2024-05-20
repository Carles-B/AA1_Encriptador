# AA1_Encriptador

El programa está compuesto de 5 archivos principales:

- `main.cc`
- `Encriptacion.cc`
- `Encriptacion.hh`
- `Funciones_auxiliares.cc`
- `Funciones_auxiliares.hh`

Se ha usado un makefile para compilar y volcarlo todo en un ejecutable llamado `program.exe`.

Las funciones que han sido basadas en código externo son:

## Funciones Auxiliares

- `read_and_decrypt_file(ifstream& file, int& checksum)`
- `copy_file(const string& origin, const string& end, intro)`

## Encriptación

- `string_caesar_cipher(const string& word, int shift)` (también el decipher)
- `list<string> encrypt_words_sim(const list<string>& listNotEncrypted, int shift, int& checksum)`
