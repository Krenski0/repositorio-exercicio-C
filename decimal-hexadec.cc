#include <stdio.h>
#include <math.h>

int main() {
    int num_decimal, num_decimal2;
    printf("digite um numero inteiro:");
    scanf("%d", &num_decimal);
    char num_hexa[20]; 
    int posicao = 0;
    int decimal_temp = num_decimal;
    num_decimal2 = num_decimal;
    if (decimal_temp == 0) {
        num_hexa[posicao++] = '0';
    } else {
        while (decimal_temp != 0) {
            int resto = decimal_temp % 16;
            if (resto < 10)
                num_hexa[posicao++] = resto + '0'; 
            else
                num_hexa[posicao++] = resto - 10 + 'A'; 
            decimal_temp = decimal_temp / 16;
        }
    }

    printf("O numero  decimal e %d e em hexadecimal e: ", num_decimal2, num_decimal);
    for (int j = posicao - 1; j >= 0; j--) {
        printf("%c", num_hexa[j]);
    }
    printf("\n");

    return 0;
}
