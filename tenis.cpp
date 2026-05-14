#include <iostream>
using namespace std;

int main() {
    char resultado;
    int vitorias = 0;

    // Ler os 6 jogos
    for (int i = 0; i < 6; i++) {
        cin >> resultado;

        if (resultado == 'V') {
            vitorias++;
        }
    }

    // Determinar o grupo
    if (vitorias >= 5) {
        cout << 1 << endl;
    } else if (vitorias >= 3) {
        cout << 2 << endl;
    } else if (vitorias >= 1) {
        cout << 3 << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}