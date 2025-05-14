#include <stdio.h>

int main() {
    float salario, aumentoInicial = 0.015, aumentoAnual = 0.03, aumentoR$;
    int i;

    printf("Digite seu salário de 1995: ");
    scanf("%f", &salario);

    for (i = 1995; i <= 2025; i++) {
        if (i == 1995) {
            aumentoR$ = salario * aumentoInicial;
        } else {
            aumentoR$ = salario * aumentoAnual;
        }
        salario += aumentoR$;
        printf("Salário em %d: R$%.2f\n", i, salario);
    }

    return 0;
}
