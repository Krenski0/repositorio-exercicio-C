#include<stdio.h>

int main(){
    int RA, quant, i = 0, RAalto, RAbaixo;
    float altura, alto = 0, baixo = 999;
    printf("digite a quantidade de alunos que serao analisados:");
    scanf("%d", &quant);
    while(i<quant){
        printf("digite o codigo RA do aluno:");
        scanf("%d", &RA);
        printf("digite a altura do aluno(Em metros):");
        scanf("%f", &altura);
        if(altura>alto){
            alto = altura;
            RAalto = RA;
        }
        if(altura<baixo){
            baixo = altura;
            RAbaixo = RA;
        }
    i++;
    }
    printf("o aluno mais alto e o RA %d com altura de %.2f m\n", RAalto, alto);
    printf("o aluno mais baixo e o RA %d com altura de %.2f m\n", RAbaixo, baixo);
}