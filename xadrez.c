#include <stdio.h>

int main() {

    //Mover a Torre 5 casas para a direita (For)

        for (int torre = 0; torre < 5; torre++) {
            printf("Direita\n"); // Imprime a direção
            printf("\n"); // Linha em branco para separar os movimentos
        }

    // Mover o Bispo 5 casas na diagonal para cima e à direita (while)

        int bispo = 0;
        while (bispo < 5) {
            printf("Cima, Direita\n");
            bispo++;
            printf("\n");
        }

    // Mover a Rainha 8 casas para a esquerda (do-while)


        int rainha = 0;
        do {
            printf("Esquerda\n");
            rainha++;
            printf("\n");
        } while (rainha < 8);

    //Mover o cavalo duas casas para baixo e uma casa para a esquerda ( for e while)
    int movimentos_baixo = 2;
    int movimentos_esquerda = 1;


        for (int i = 0; i < movimentos_baixo; i++) {
            printf("Baixo,\n");
        }

        int j = 0;
        while (j < movimentos_esquerda) {
            printf("Esquerda\n");
            j++;
        }
    return 0;
}
