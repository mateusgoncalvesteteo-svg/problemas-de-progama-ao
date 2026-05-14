#include <iostream>
using namespace std;
int main(){
    int m[47][47];
        for(int i=0; i<47; i++) {
            for(int j=0; j<47; j++) {
                if(i==j) {
                    cout << " 1 " << "  ";
                }else{
                    cout << " 0 " << "  ";
                }
            }
            cout << endl;
        }
        cout << sizeof(m);
        return 0;
}

   // printf("Tamanho em bytes de um inteiro -> %d\n", sizeof(int));
    //printf("Tamanho em bytes do vetor m[0] -> %d\n", sizeof(m[0]));
    //printf("Tamanho em bytes da matriz m -> %d\n", sizeof(m));
    ///printf("Quantidade de vetores da matriz m -> %d\n", sizeof(m)/sizeof(m[0]));
    //rintf("Quantidade de elementos da matriz m -> %d\n", sizeof(m)/sizeof(int));
//}
/* Saída:
Tamanho em bytes de um inteiro -> 4
Tamanho em bytes do vetor m[0] -> 20
Tamanho em bytes da matriz m -> 100
Quantidade de vetores da matriz m -> 5
Quantidade de elementos da matriz m -> 25

*/