#include <stdio.h>

int main() {
    int num_decimal, num_decimal2;
    int num_octal = 0;
    int i = 1;

    printf("Digite um numero em decimal para ser transformado em octal: ");
    scanf("%d", &num_decimal);
    num_decimal2 = num_decimal;

    while (num_decimal != 0) {
        num_octal += (num_decimal % 8) * i;
        num_decimal = num_decimal / 8;
        i *= 10;
    }

    printf("O numero em decimal %d e igual a %d em octal\n", num_decimal2, num_octal);
}
