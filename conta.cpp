#include <iostream>
using namespace std;
int main() {
    int n, valor;
    cin >> n;//n é consumo
    if(n<=10) {
        valor=7;
        cout << valor << endl;
    }
    else if(n<=30) {
        valor=7+(n-10)*1;
        cout << valor << endl;
    }
    else if(n<=100) {
        valor=7+20*1+(n-30)*2;
        cout << valor << endl;
    }
    else if(n>=101) {
        valor=7+20*1+70*2+(n-100)*5;
        cout << valor << endl;
    }
    return 0;
}
