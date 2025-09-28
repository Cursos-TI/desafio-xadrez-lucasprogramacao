// Desafio de Movimentação de Peças de Xadrez (Novato)
#include <stdio.h>

int main() {
    
    // Movimentação da Torre 5 casas para a direita (for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }

    printf("\n"); // Espaço para separar as saídas

    // Movimentação do Bispo 5 casas para diagonal (cima + direita) (while)
    
    printf("Movimento do Bispo:\n");
    int i = 0;
    while (i < 5) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n");

    // Movimentação da Rainha 8 casas para a esquerda (do-while)
   
    printf("Movimento da Rainha:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < 8);

    return 0;
}