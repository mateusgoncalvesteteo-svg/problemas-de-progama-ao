#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int matriz[4][4];
    int contador = 0;
    int i, j;

    // Inicializa a semente para gerar números diferentes a cada execução
    srand(time(NULL));

    // Preenche a matriz e conta os valores maiores que 10
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            // Gera um float aleatório entre 0 e 12
            // rand() retorna [0, RAND_MAX]. Dividindo por RAND_MAX obtemos [0, 1].
            // Multiplicando por 12, obtemos [0, 12].
            float numeroAleatorio = ((float)rand() / RAND_MAX) * 12.0;
            
            // Armazena o valor (pode ser float ou int, conforme a necessidade de precisão)
            // O exercício pede "float", então usamos uma variável float para comparação.
            if (numeroAleatorio > 10.0) {
                contador++;
            }
            
            // Imprime para visualização (opcional, mas útil para debug)
            // printf("%.2f ", numeroAleatorio);
        }
        // printf("\n");
    }

    printf("Quantidade de valores maiores que 10: %d\n", contador);

    return 0;
}   