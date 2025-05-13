#include <stdio.h>
#include <math.h>

int main() {
    int num_binario, num_binario2;
    int num_decimal = 0;

    printf("Digite um numero em binario: ");
    scanf("%d", &num_binario);
    num_binario2 = num_binario;
    int i = 0;
    while (num_binario != 0) {
        int resto = num_binario % 10;
        num_binario = num_binario / 10;
        num_decimal = num_decimal + (resto * pow(2, i));
        i++;
    }

    char num_hexa[20]; 
    int posicao = 0;
    int decimal_temp = num_decimal;

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

    printf("O numero binario %d em decimal e %d e em hexadecimal e: ", num_binario2, num_decimal);
    for (int j = posicao - 1; j >= 0; j--) {
        printf("%c", num_hexa[j]);
    }
}
