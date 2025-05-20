#include<stdio.h>

int main(){
    float parcela, valor, juros;
    printf("digite o valor da divida:");
    scanf("%f",&valor);
    printf("digite a quantidade de parcelas divididas(1, 3, 6, 9, 12):");
    scanf("%f",&parcela);
    if (parcela==1){
        printf("o valor final é %d\n", valor);
    }
    else if(parcela == 3){
        juros = valor * 0.1;
        printf("o valor final é %d\n", valor + juros);
    }
    else if(parcela == 6){
        juros = valor * 0.15;
        printf("o valor final é %d\n", valor + juros);
    }
    else if(parcela == 9){
        juros = valor * 0.2;
        printf("o valor final é %d\n", valor + juros);
    }
    else if(parcela == 12){
        juros = valor * 0.25;
        printf("o valor final é %d\n", valor + juros);
    }
    else{
        printf("opção invalida");
    }
}