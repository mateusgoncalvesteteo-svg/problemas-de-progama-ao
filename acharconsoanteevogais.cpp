#include <iostream>
#include <string>
#include <cctype> // para tolower
using namespace std;

int main() {
    string strs;
    string vogais = "aeiou";
    int contadorV = 0, contadorC = 0;

    getline(cin, strs); // lê inclusive espaços

    for (char ch : strs) {
        if (isalpha(ch)) { // conta apenas letras
            char lower = tolower(ch);
            if (vogais.find(lower) != string::npos) {
                contadorV++;
            } else {
                contadorC++;
            }
        }
    }

    cout << "Vogais: " << contadorV << endl;
    cout << "Consoantes: " << contadorC << endl;

    return 0;
}
