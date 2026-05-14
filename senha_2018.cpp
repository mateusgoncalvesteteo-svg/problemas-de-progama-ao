#include <iostream>
using namespace std;

int main() {
    int bino = 2018;
    int cino;
    int senha;
    int i = 0;

    //cin >> cino; // lê o primeiro valor

    // Enquanto senha for diferente de bino
    while (true) {
        cin >> senha;
        if (senha == bino) {
            break; // sai do loop
        } else {
            i++;
        }
    }

    cout << i;
    return 0;
}
