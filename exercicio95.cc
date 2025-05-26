#include <stdio.h>

int main() {
    int par[20], impar[20];
    int num[20];
    int i, contPar = 0, contImpar = 0;

    for (i = 0; i < 20; i++) {
        printf("digite o %d numero: ", i + 1);
        scanf("%d", &num[i]);

        if (num[i] % 2 == 0) {
            par[contPar] = num[i];
            contPar++;
        } else {
            impar[contImpar] = num[i];
            contImpar++;
        }
    }

    printf("\nos numeros pares sao: ");
    for (i = contPar - 1; i >= 0; i--) {
        printf("%d ", par[i]);
    }

    printf("\nos numeros impares sao: ");
    for (i = contImpar - 1; i >= 0; i--) {
        printf("%d ", impar[i]);
    }

    printf("\n");
    return 0;
}
