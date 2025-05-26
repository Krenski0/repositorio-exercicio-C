#include<stdio.h>

int main(){
    int idade[5], i;
    float altura[5];
    for (i = 0; i<5; i++){
        printf("digite a idade da pessoa %d: ", i+1);
        scanf("%d", &idade[i]);
        printf("digite a altura da pessoa %d: ", i+1);
        scanf("%f", &altura[i]);
    }
    for(i = 5; i>0; i--){
        printf("idade da pessoa %d: %d\n", i, idade[i-1]);
        printf("altura da pessoa %d: %.2f\n", i, altura[i-1]);
    }
}