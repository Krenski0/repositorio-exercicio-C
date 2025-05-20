#include<stdio.h>

int main(){
    int num, num_invertido;
    printf("Digite um numero: ");
    scanf("%d", &num);
    num_invertido = 0;
    while (num != 0) {
        num_invertido = num_invertido * 10 + num % 10;
        num = num / 10; 
    }
    printf("O contrario do numero é: %d", num_invertido);
}