#include <stdio.h>

// Função recursiva para a Torre
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva para o Bispo com loops aninhados
void moverBispo(int vertical, int horizontal) {
    if (vertical > 0) {
        for (int v = 1; v <= vertical; v++) {
            for (int h = 1; h <= horizontal; h++) {
                printf("Bispo: Cima %d, Direita %d\n", v, h);
            }
        }
        moverBispo(vertical - 1, horizontal); // chamada recursiva
    }
}

// Função recursiva para a Rainha
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    printf("Movimentos da Torre:\n");
    moverTorre(5);

    printf("\nMovimentos do Bispo:\n");
    moverBispo(5, 5);

    printf("\nMovimentos da Rainha:\n");
    moverRainha(8);

    printf("\nMovimentos do Cavalo:\n");
    // Cavalo: movimento em "L" (duas casas para cima e uma para a direita)
    // Usando loops aninhados, continue e break
    for (int cima = 1; cima <= 2; cima++) {
        for (int direita = 1; direita <= 1; direita++) {
            if (cima == 2 && direita == 1) {
                printf("Cavalo: Cima %d, Direita %d (L)\n", cima, direita);
                break;
            } else {
                continue;
            }
        }
    }

    return 0;
}
    




