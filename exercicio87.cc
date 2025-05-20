#include<stdio.h>

int main(){
    float notas [7], media, melhor_nota = 0, pior_nota = 10;
    char nome [50];
    int i;
    printf("nome: ");
    scanf("%s", nome);
    for (i = 0; i<7; i++){
        printf("nota do jurado %d: ", i+1);
        scanf("%f", &notas[i]);
        if (notas[i] > melhor_nota){
            melhor_nota = notas[i];
        }
        if (notas[i]<pior_nota){
            pior_nota = notas[i];
        }
        media += notas[i];
    }
    media = media-(melhor_nota+pior_nota);
    media = media/5;
    printf("Resultado final:\n");
    printf("Atleta:%s\n", nome);
    printf("Melhor nota: %.2f\n", melhor_nota);
    printf("Pior nota: %.2f\n", pior_nota);
    printf("Media: %.2f\n", media);
}