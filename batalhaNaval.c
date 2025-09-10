#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    int tabuleiro[5][5] = {0};

    // Navio vertical
    tabuleiro[1][1] = 1;
    tabuleiro[2][1] = 1;
    tabuleiro[3][1] = 1;

    // Navio horizontal
    tabuleiro[3][2] = 1;
    tabuleiro[3][3] = 1;
    tabuleiro[3][4] = 1;

    printf("=== Coordenadas dos Navios ===\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("Navio em: (%d, %d)\n", i, j);
            }
        }
    }

    printf("\n=== Tabuleiro ===\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
