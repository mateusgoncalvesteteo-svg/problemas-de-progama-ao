#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int soma_esperada = n * (n + 1) / 2;
    
    int soma_real = 0;
    int peca;

    for (int i = 0; i < n - 1; i++) {
        cin >> peca;
        soma_real += peca;
    }

    int peca_faltando = soma_esperada - soma_real;

    cout << peca_faltando << endl;

    return 0;
}
