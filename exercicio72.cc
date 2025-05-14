#include<stdio.h>

int main(){
    float total = 0, media = 0, CD;
    int quant, i = 0;
    printf("digite a quantidade de CDs que vai analisar:");
    scanf("%d", &quant);
    while (i<quant){
        printf("digite o valor do CD %d:", i+1);
        scanf("%f", &CD);
        total = total + CD;
        i++;
    }
    media = total / quant;
    printf("o total dos CDs e %.2f\n", total);
    printf("a media dos CDs e %.2f", media);
}