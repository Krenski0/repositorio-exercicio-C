#include<stdio.h>

int main(){
    int quant, i = 0;
    float temp = 0, maior_temp = 0, menor_temp = 0, media = 0;
    printf("quantas temperaturas voce vai digitar?:");
    scanf("%d", &quant);
    while(i<quant){
        printf("digite a temperatura %d: ", i+1);
        scanf("%f", &temp);
        if(temp > maior_temp){
            maior_temp = temp;
        }
        if(temp < menor_temp){
            menor_temp = temp;
        }
        media += temp;
        i++;
    }
    media = media / quant;
    printf("a media das temperaturas e %.2f\n", media);
    printf("a maior temperatura e %.2f\n", maior_temp);
    printf("a menor temperatura e %.2f\n", menor_temp);
}