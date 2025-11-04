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
        printf("Cima, Direita (%d)\n", contador);
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

    printf("\n");


// Movimento do CAVALO (loops aninhados)

// loop for externo + loop while interno
    int casasBaixo = 2;
    int casasEsquerda = 1;
    int passo = 1; // usado no while interno

    printf("Movimento do Cavalo:\n");

// Primeiro movimento: duas casas para BAIXO
    for (int i = 1; i <= casasBaixo; i++) {
        printf("Baixo (%d)\n", i);
    }

// Segundo movimento: uma casa para ESQUERDA
    while (passo <= casasEsquerda) {
        printf("Esquerda (%d)\n", passo);
        passo++;
    }

    printf("\nFim da simulação de movimentos.\n");

    return 0;
}