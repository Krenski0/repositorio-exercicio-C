#include<stdio.h>
#include<cmath>

int main(){
    int num_binario;
    int num_decimal = 0;
    
    printf("digite um numero em binario:");
    scanf("%d", &num_binario);
    int i = 0;
    while (num_binario != 0) {
        int resto = num_binario % 10;
        num_binario = num_binario / 10;
        num_decimal = num_decimal + (resto * pow(2, i));
        i++;
    }
    printf("o numero decimal e: %d", num_decimal);
}