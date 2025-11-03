#include <stdio.h>

int main() {

// Movimento da TORRE (for)

    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    printf("\n"); // separador visual

// Movimento do BISPO (while)

    int casasBispo = 5;
    int contador = 1;

    printf("Movimento do Bispo:\n");

    while (contador <= casasBispo) {
        printf("Diagonal Superior Direita (%d)\n", contador);
        contador++;
    }

    printf("\n");

// Movimento da RAINHA (do-while)

    int casasRainha = 8;
    int i = 1;

    printf("Movimento da Rainha:\n");

    do {
        printf("Esquerda (%d)\n", i);
        i++;
    } while (i <= casasRainha);

    printf("\nFim da simulação de movimentos.\n");

    return 0;
}