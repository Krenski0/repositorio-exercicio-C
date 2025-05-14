#include<stdio.h>

int main () {
    int cand1 = 0, cand2 = 0, cand3 = 0, quant, i = 0, voto, nulo = 0;
    printf("digite o numero de eleitores: ");
    scanf("%d", &quant);
    while (i < quant) {
        printf("digite o seu voto (1, 2, 3):");
        scanf("%d", &voto);
        if (voto == 1) {
            cand1 += 1;
        }
        else if (voto == 2){
            cand2 += 1;
        }
        else if(voto == 3){
            cand3 += 1;
        }
        else {
            nulo += 1;
        }
    i++;
    }
    printf("numero de votos do candidato 1: %d\n", cand1);
    printf("numero de votos do candidato 2: %d\n", cand2);
    printf("numero de votos do candidato 3: %d\n", cand3);
    printf("numero de votos nulos/inválidos: %d\n", nulo);
}