#include <stdio.h>
#include<cmath>

int main() {
    int num_binario, num_binario2;
    int num_decimal = 0;
    printf("digite um numero em binario:");
    scanf("%d", &num_binario);
    int i = 0;
    num_binario2 = num_binario;
    while (num_binario != 0) {
        int resto = num_binario % 10;
        num_binario = num_binario / 10;
        num_decimal = num_decimal + (resto * pow(2, i));
        i++;
    }
    int num_octal = 0;
    int j = 1;

    while (num_decimal != 0) {
        num_octal += (num_decimal % 8) * j;
        num_decimal = num_decimal / 8;
        j *= 10;
    }

    printf("O numero em binario %d e igual a %d em octal\n", num_binario2, num_octal);
}
