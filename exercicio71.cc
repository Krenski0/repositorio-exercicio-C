#include<stdio.h>

int main(){
    int quant, alunos, media = 0, i = 0;
    printf("digite a quantidade de turmas para fazer a media:");
    scanf("%d", &quant);
    while(i<quant){
        printf("digite a quantidade de alunos da turma %d:", i+1);
        scanf("%d", &alunos);
        if (alunos > 40 || alunos < 0){
            printf("quantidade de alunos invalida, tente novamente");
        }
        else{
            media += alunos;
            i++;
        }
    }
    media = media / quant;
    printf("a media de alunos por turma e %d", media);
}