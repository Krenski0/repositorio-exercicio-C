#include<stdio.h>

int main(){
    float temperaturas[12];
    int i;
    float media;
    for (i=0; i<12; i++){
        printf("digite a temperatura do primeiro mes:%d ", i+1);
        scanf("%f", &temperaturas[i]);
        media += temperaturas[i];
    }
    media = media / 12;
    printf("a media das temperaturas e: %.2f\n", media);
    for (i = 0; i<12; i++){
        if(temperaturas[i]>media){
            printf("a temperatura do mes %d e maior que a media\n", i+1);
        }
    }
}