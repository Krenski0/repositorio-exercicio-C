#include<stdio.h>

int main(){
    char nome [50];
    float saltos [5], salto_maior = 0, salto_menor = 999, media;
    printf("Digite o nome do atleta: ");
    scanf("%s", &nome);
    for(int i = 0;i < 5; i++){
        printf("Digite o %d salto(em metros): ", i + 1);
        scanf("%f", &saltos[i]);
        if (saltos[i]<salto_menor){
            salto_menor = saltos[i];
        }
        if (saltos[i]>salto_maior){
            salto_maior = saltos[i];
        }
        media += saltos[i];
    }
    printf("\n");
    media = media - (salto_maior+salto_menor);
    printf("Primeiro Salto: %.2f m\n", saltos[0]);
    printf("Segundo Salto: %.2f m\n", saltos[1]);
    printf("Terceiro Salto: %.2f m\n", saltos[2]);
    printf("Quarto Salto: %.2f m\n", saltos[3]);
    printf("Quinto Salto: %.2f m\n", saltos[4]);
    printf("\nMelhor Salto: %.2f m\n", salto_maior);
    printf("Pior Salto: %.2f m\n", salto_menor);
    printf("Media dos demais Saltos : %.2f m\n", media/3);
    printf("\nResultado final:\n");
    printf("%s : %.2f m\n", nome, media/3);
}