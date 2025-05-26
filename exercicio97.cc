#include<stdio.h>

int main(){
    int numeros [5];
    int soma, mult;
    int i;
    soma = 0;
    mult = 1;
    for (i = 0; i<5; i++){
        printf("digite o %d numero: ", i+1);
        scanf("%d", &numeros[i]);
        soma = soma + numeros[i];
        mult = mult * numeros[i];
    }
    printf("soma: %d\n", soma);
    printf("multiplicacao: %d\n", mult);
    for(i = 5; i>0; i--){
        printf("o %d numero e: %d\n", i, numeros[i-1]);
    }
}