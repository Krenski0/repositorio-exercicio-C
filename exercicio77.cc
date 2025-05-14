#include<stdio.h>

int main(){
    int tabuada, comec, fim;
    printf("digite o numero que voce vai querer a tabuada:");
    scanf("%d", &tabuada);
    printf("digite o inicio da tabuada:");
    scanf("%d", &comec);
    printf("digite o fim da tabuada:");
    scanf("%d", &fim);
    if (comec > fim){
        printf("como caralhos o começo é maior que o fim");
    }
    else{
        while(comec<=fim){
            printf("%d x %d = %d\n", tabuada, comec, tabuada*comec);
            comec++;
        }
    }
}
