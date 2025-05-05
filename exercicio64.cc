#include <stdio.h>

int main() {
    int fat;
    int fac = 1;

    printf("Digite o número para calcular o fatorial (menor que 16): ");
    scanf("%d", &fat);

    while (fat >= 16 || fat < 0) {
        printf("Digite um número válido (entre 0 e 15): ");
        scanf("%d", &fat);
    }

    for (int i = 1; i <= fat; i++) {
        fac *= i;
    }

    printf("O fatorial de %d é %d\n", fat, fac);
    return 0;
}
