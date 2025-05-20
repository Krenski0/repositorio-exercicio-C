#include <stdio.h>

int main() {
    int cod, unidades;
    float valorCQ = 1.20, valorBS = 1.30, valorBco = 1.50;
    float valorHG = 1.20, valorCB = 1.30, valorRG = 1.00;
    float valor_total = 0;

    while (1) {
        printf("\nqual o código do produto que vai comprar (digite 0 para sair)? ");
        scanf("%d", &cod);

        if (cod == 0) {
            break;
        }

        printf("quantas unidades deseja comprar? ");
        scanf("%d", &unidades);

        if (cod == 100) {
            valor_total += unidades * valorCQ;
        } else if (cod == 101) {
            valor_total += unidades * valorBS;
        } else if (cod == 102) {
            valor_total += unidades * valorBco;
        } else if (cod == 103) {
            valor_total += unidades * valorHG;
        } else if (cod == 104) {
            valor_total += unidades * valorCB;
        } else if (cod == 105) {
            valor_total += unidades * valorRG;
        } else {
            printf("Codigo inválido!\n");
        }
    }

    printf("\nO valor total a ser pago e de R$ %.2f\n", valor_total);

    return 0;
}
