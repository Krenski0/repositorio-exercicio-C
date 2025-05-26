#include<stdio.h>

int main(){
    float notas[999], media = 0, True, soma, acima_media = 0, abaixo_7 = 0;
    int cont = 0, i;
    while(1){
        printf("digite as notas do aluno:");
        scanf("%f", &True);
        if (True == -1){
            break;
        }
        notas[cont] = True;
        cont++;
        media += True;
        soma += True;
    }
    printf("\n");
    media /= cont;
    for (i = 0; i<cont; i++){
        printf("%.2f ", notas[i]);
        if (notas[i] > media){
            acima_media++;
        }
        if (notas[i]<7){
            abaixo_7++;
        
        }
    }
    for (i = cont; i>0; i--){
        printf("\n%.2f\n", notas[i-1]);
    }
    printf("quantidade de valores lidos: %d\n", cont);
    printf("soma: %.2f\n", soma);
    printf("media: %.2f\n", media);
    printf("a quantidade de valores acima da media sao: %.2f\n", acima_media);
    printf("a quantidade de valores abaixo de 7 sao: %.2f\n", abaixo_7);
    printf("codigo desgracento");//minha mensagem de codigo maravilhoso
}