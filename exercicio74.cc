#include<stdio.h>

int main(){
    int quant = 50, i = 0;
    float preco;
    printf("digite o preco do pao:");
    scanf("%f", &preco);
    while(i < quant){
        printf("Preço do pao: R$%.2f\n", preco);
        printf("Panificadora Pão de Ontem - Tabela de preços\n");
        printf("%d - %.2fR$\n", i+1, preco*(i+1));
        i++;
    }
}