#include<stdio.h>

int main(){
    int votos = 0, quant, votoscand1 = 0, votoscand2 = 0, votoscand3 = 0, votoscand4 = 0, nulo = 0, branco = 0;
    printf("quantos votos serao registrados?:");
    scanf("%d", &quant);
    for (int i = 0; i < quant; i++){
        printf("voto %d: ", i+1);
        scanf("%d", &votos);
        if (votos == 1){
            votoscand1++;
        }
        else if (votos == 2){
            votoscand2++;
        }
        else if (votos == 3){
            votoscand3++;
        }
        else if (votos == 4){
            votoscand4++;
        }
        else if (votos == 5){
            nulo++;
        }
        else if (votos == 6){
            branco++;
        }
        else{
            printf("voto invalido");
        }
    }
    printf("candidato 1: %d\n", votoscand1);
    printf("candidato 2: %d\n", votoscand2);
    printf("candidato 3: %d\n", votoscand3);
    printf("candidato 4: %d\n", votoscand4);
    printf("nulos: %d\n", nulo);
    printf("brancos: %d\n", branco);
}