#include <stdio.h>

int main() {
    int numero = -1, i, total_votos = 0;
    int sistemas[6] = {0}; 
    printf("1- Windows Server 2- Unix 3- Linux 4- Netware 5- Mac OS 6- Outro\n");
    while (true) {
        printf("digite um número entre 1 e 6 (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            break;
        } else if (numero < 1 || numero > 6) {
            printf("informe um valor entre 1 e 6 ou 0 para sair!\n");
        } else {
            sistemas[numero - 1]++;
            total_votos += 1;
        }
    }
    for (i = 0; i<6; i++) {
        printf("sistema %d: %d votos = %d%%\n", i + 1, sistemas [i], (sistemas[i] * 100) / total_votos);
    }
    printf("o total de votos foi de %d\n", total_votos);

}
