#include <iostream>
using namespace std;

int main() {
    int N;
    int num;
    int soma = 0;
    cin >> N;
    
    // Loop para solicitar 3 números
    for(int i = 0; i < N; i++){
        cin >> num;
        soma += num; // soma += num é equivalente a soma = soma + num
    }
    
    cout << soma << endl;
    return 0;
}   