#include <iostream>

using namespace std;

int main() {
    int A, B, C, D;

    // Lendo os quatro números inteiros (comprimentos das varetas)
    cin >> A >> B >> C >> D;

    // Verificamos todas as 4 combinações possíveis de 3 varetas
    // Regra: a < b + c, b < a + c, c < a + b (lados positivos)
    // Uma forma mais simples de verificar triângulo com 3 lados (x, y, z) 
    // é garantir que a soma de dois lados é maior que o terceiro.
    
    bool possivel = false;

    // Teste 1: A, B, C
    if (A < B + C && B < A + C && C < A + B) possivel = true;
    // Teste 2: A, B, D
    else if (A < B + D && B < A + D && D < A + B) possivel = true;
    // Teste 3: A, C, D
    else if (A < C + D && C < A + D && D < A + C) possivel = true;
    // Teste 4: B, C, D
    else if (B < C + D && C < B + D && D < B + C) possivel = true;

    // Saída: "S" se possível, "N" caso contrário
    if (possivel) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
