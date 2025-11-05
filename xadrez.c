#include <stdio.h>

// Função recursiva (TORRE)

void moverTorre(int casas, int atual) {
    // Para quando todas as casas forem percorridas
    if (atual > casas) return;

    printf("Direita (%d)\n", atual);

    // Próxima casa
    moverTorre(casas, atual + 1);
}


// Função recursiva + loops aninhados (BISPO)

void moverBispo(int casas, int linha, int coluna) {
    // Para quando todas as linha forem percorridas "movimentos verticais"
    if (linha > casas) return;

    int i = 1;
    // Loop interno (movimento horizontal)
    while (i <= 1) { //Uma casa horizontal por passo vertical (diagonal)
        printf("Cima, Direita (%d)\n", linha);
        i++;
    }

    // Sobe mais uma casa na diagonal
    moverBispo(casas, linha + 1, coluna + 1);
}

// Função recursiva (RAINHA)

void moverRainha(int casas, int atual) {
    if (atual > casas) return;

    printf("Esquerda (%d)\n", atual);

    moverRainha(casas, atual + 1);
}


// Loops aninhados com múltiplas variáveis (CAVALO)

void moverCavalo() {
    int moverCima = 2;
    int moverDireita = 1;

    printf("Movimento do Cavalo:\n");

    // Loop externo movimento vertical
    for (int i = 1, j = moverCima; i <= moverCima && j >= 1; i++, j--) {
        if (i == 2) {
            printf("Cima (%d)\n", i);
            continue; // Segue para o próxima loop
        }
        printf("Cima (%d)\n", i);

    // Loop interno movimento horizontal
        for (int k = 1; k <= moverDireita; k++) {
            if (k > moverDireita) break;
        }
    }

    printf("Direita (1)\n");
}


int main() {

    // Torre (recursividade)
    printf("Movimento da Torre:\n");
    moverTorre(5, 1);
    printf("\n");

    // Bispo (recursividade + loops aninhados)
    printf("Movimento do Bispo:\n");
    moverBispo(5, 1, 1);
    printf("\n");

    // Rainha (recursividade)
    printf("Movimento da Rainha:\n");
    moverRainha(8, 1);
    printf("\n");

    // Cavalo (loops complexos)
    moverCavalo();
    printf("\nFim da simulação de movimentos.\n");

    return 0;
}