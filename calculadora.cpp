#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2, resultado;
    char operacao;

    cout << "Calculadora Simples em C++" << endl;
    cout << "Digite os números e a operação (ex: 10 + 5): ";
    cin >> num1 >> operacao >> num2;

    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                cout << "Erro: Divisão por zero!" << endl;
                return 1;
            }
            break;
        default:
            cout << "Operação inválida!" << endl;
            return 1;
    }

    cout << "Resultado: " << resultado << endl;
    return 0;
}   