#include<stdio.h>

int main(){
    int num [5];
    int i;
    for (i = 0; i<5; i++){
        printf("digite um numero:");
        scanf("%d", &num[i]);
    }
    for (i = 0; i<5; i++){
        printf("o numero é %d:\n", num[i]);
    }
}