#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string nome;

    cout << "Digite o nome completo: ";
    getline(cin, nome);

    
    for (size_t i = 0; i < nome.length(); i++) {
        nome[i] = tolower(nome[i]);
    }

    
    size_t pos_primeiro_espaco = nome.find(" ");
    string primeiro = nome.substr(0, pos_primeiro_espaco);

    
    size_t pos_ultimo_espaco = nome.find_last_of(" ");
    string ultimo = nome.substr(pos_ultimo_espaco + 1);

    cout << "Seu email foi criado: "
         << primeiro << "." << ultimo << "@ufrn.edu.br" << endl;

    return 0;
}