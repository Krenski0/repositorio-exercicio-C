#include<stdio.h>

int main(){
    int num [10];
    int i;
    for (i = 0; i<10; i++){
        printf("digite uma sequencia de 10 numeros para ser mostrada inversamente:");
        scanf("%d", &num[i]);
    }
    for (i = 10; i > 0; i--){
        printf("%d ", num[i-1]);
    }
}