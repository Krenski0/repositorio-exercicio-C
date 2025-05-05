#include <stdio.h>

int main() {
    int maior, menor;
    int lista[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &lista[i]);

        if (i == 0) {
            maior = menor = lista[i];  
        } else {
            if (lista[i] > maior) {
                maior = lista[i];
            }
            if (lista[i] < menor) {
                menor = lista[i];
            }
        }
    }

    printf("O menor número da lista é: %d\n", menor);
    printf("O maior número da lista é: %d\n", maior);
    printf("A soma do maior e menor número é: %d\n", maior + menor);

    return 0;
}
