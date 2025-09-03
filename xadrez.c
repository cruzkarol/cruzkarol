#include <stdio.h>

// Desafio de Xadrez - Nível Novato

int main() {
    const int movimento_BISPO = 5;
    const int movimento_TORRE = 5;
    const int movimento_RAINHA = 8;

    // Movimentação do Bispo (5 casas na diagonal superior direita)
    printf("Movimentacao do Bispo---\n");
    // loop 'for' = número de repetições (5) *  'i' controla o número de movimentações do Bispo.
    for (int i = 0; i < movimento_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    // Movimentação da Torre (5 casas para a direita)
    printf("\nMovimentacao da Torre: \n");
    // loop 'while' é uma forma diferente do  loop 'for'.
    int contador_TORRE = 0;
    while (contador_TORRE < movimento_TORRE) {
        printf("Direita\n");
        contador_TORRE++;
    }
    
    // Movimentação da Rainha (8 casas para a esquerda)
    printf("\nMovimentacao da Rainha: \n");
    // 'do-while' estrutura de repetição
    int contador_RAINHA = 0;
        if (movimento_RAINHA > 0) {
        do {
            printf("Esquerda\n");
            contador_RAINHA++;
        } while (contador_RAINHA < movimento_RAINHA);
    }

    // Movimentação do Cavalo - Nível Aventureiro
    printf("\nMovimentacao do Cavalo:\n");
    // loop 'for', dois movimentos para baixo.
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    // loop 'while' - movimento para a esquerda.
    int contador_cavalo = 0;
    while (contador_cavalo < 1) {
        printf("Esquerda\n");
        contador_cavalo++;
    }

    return 0;
}
