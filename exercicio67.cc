#include <stdio.h>

int main() {
    int N;

    printf("Digite um numero: ");
    scanf("%d", &N);

    printf("Numeros primos de 1 atee %d:\n", N);

    for (int num = 2; num <= N; num++) {
        int eh_primo = 1;

        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                eh_primo = 0;
                break;
            }
        }

        if (eh_primo) {
            printf("%d ", num);
        }
    }

    printf("\n");

    return 0;
}
