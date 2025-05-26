#include<stdio.h>

int main(){
    int idade[30], i, altura_menor = 0;
    float altura[30], media;
    for(i = 0; i<30; i++){
        printf("digite a idade do %d aluno: ", i+1);
        scanf("%d", &idade[i]);
        printf("digite a altura do %d aluno: ", i+1);
        scanf("%f", &altura[i]);
        media+= altura[i];
    }
    media = media/30;
    for (i = 0; i<30; i++){
        if(idade[i] > 13){
            if (altura[i] < media){
                altura_menor++;
            }
        }
    }
    printf("%d alunos de 13 anos tem menos que a media de altura: %.2f", altura_menor, media);
}