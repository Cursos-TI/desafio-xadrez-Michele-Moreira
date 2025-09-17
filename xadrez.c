#include <stdio.h>

int main() {

    //Mover a Torre 5 casas para a direita (For)
    for (int i = 0; i < 5; i++) {
        printf("Direita\n"); // Imprime a direção
    }

    // Mover o Bispo 5 casas na diagonal para cima e à direita (while)
    int b = 0;
    while (b < 5) {
        printf("Cima, Direita\n");
        b++;
    }

    // Mover a Rainha 8 casas para a esquerda (do-while)
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < 8);

    return 0;
}
