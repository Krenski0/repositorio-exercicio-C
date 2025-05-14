#include<stdio.h>

int main (){
    int notas, quant, peso, soma, peso1;
    double media;
    peso1 = 0;
    soma = 1;
    printf("digite quantas notas vao ser colocadas:");
    scanf("%d", &quant);
    for(int i = 0; i<quant; i++){
        printf("digite o peso da nota %d:", i+1);
        scanf("%d", &peso);
        printf("digite a %d nota:", i+1);
        scanf("%d", &notas);
        peso1 = peso1 + peso;
        soma = soma + peso * notas;
    }
    media = soma / peso1;
    printf("a media das notas do aluno e %f", media);
}