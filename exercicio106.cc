#include <stdio.h>

int main() {
    int numero = -1, i;
    int jogadores[23] = {0}; 

    printf("quem foi o melhor jogador?\n");
    while (numero != 0) {
        printf("digite um número entre 1 e 23 (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        } else if (numero < 1 || numero > 23) {
            printf("informe um valor entre 1 e 23 ou 0 para sair!\n");
        } else {
            jogadores[numero - 1]++;
        }
    }

    printf("\nresultad:\n");
    for (i = 0; i < 23; i++) {
        if (jogadores[i] > 0) {
            printf("jogador %d: %d voto(s)\n", i + 1, jogadores[i]);
        }
        else{
            printf("jogador %d: 0 voto(s)\n", i + 1);
        }
    }

}
