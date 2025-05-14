#include <stdio.h>

int main() {
    int numero_primo, eh_primo = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero_primo);

    if (numero_primo <= 1) {
        eh_primo = 0; 
    } else {
        for (int i = 2; i <= numero_primo / 2; i++) {
            if (numero_primo % i == 0) {
                eh_primo = 0;
                printf("seu numero e divisivel por %d\n", i);
            }
        }
    }

    if (eh_primo) {
        printf("O numero e primo.\n");
    } else {
        printf("O numero nao e primo.\n");
    }

    return 0;
}

