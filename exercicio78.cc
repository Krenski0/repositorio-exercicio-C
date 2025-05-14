#include <stdio.h>

int main() {
    char tecla = ' ';
    float altura, alturaMaior = 0, alturaMenor = 999, peso, Gordo = 0, Magro = 999;
    int codigoAlto = 0, codigoBaixo = 0, codigoGordo = 0, codigoMagro = 0, codigo;

    while (1) {
        printf("Digite o código do cliente: ");
        scanf("%d", &codigo);

        printf("Digite a altura (em metros): ");
        scanf("%f", &altura);

        printf("Digite o peso (em kg): ");
        scanf("%f", &peso);

        if (altura > alturaMaior) {
            alturaMaior = altura;
            codigoAlto = codigo;
        }
        if (altura < alturaMenor) {
            alturaMenor = altura;
            codigoBaixo = codigo;
        }
        if (peso > Gordo) {
            Gordo = peso;
            codigoGordo = codigo;
        }
        if (peso < Magro) {
            Magro = peso;
            codigoMagro = codigo;
        }

        printf("Digite 'x' para parar ou qualquer outra tecla para continuar: ");
        scanf(" %c", &tecla);
        if (tecla == 'x' || tecla == 'X') {
            break;
        }
    }

    printf("\nO cliente mais alto e de codigo %d com altura %.2f m\n", codigoAlto, alturaMaior);
    printf("O cliente mais baixo e de codigo %d com altura %.2f m\n", codigoBaixo, alturaMenor);
    printf("O cliente mais gordalho e de codigo %d com peso %.2f kg\n", codigoGordo, Gordo);
    printf("O cliente mais magro e de codigo %d com peso %.2f kg\n", codigoMagro, Magro);

    return 0;
}
