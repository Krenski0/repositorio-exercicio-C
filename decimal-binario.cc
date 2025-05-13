#include<stdio.h>
#include<cmath>

int main(){
    int num_decimal, num_decimal2;
    int num_binario = 0;
    int i = 0;
    printf("digite um número em decimal para ser transformado em binario: ");
    scanf("%d", &num_decimal);
    num_decimal2 = num_decimal;
    
    while (num_decimal != 0){
        num_binario = (num_binario * 10) + (num_decimal % 2);
        num_decimal = num_decimal / 2;
        i++;
    }
    printf("o numero em decimal %d e igual a %d em binario\n", num_decimal2, num_binario);
}