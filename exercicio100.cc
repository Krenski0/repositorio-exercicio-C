#include<stdio.h>

int main(){
    int num1[10];
    int num2[10];
    int num3[20];
    int i, j;
    j = 0;
    for(i=0;i<10;i++){
        printf("digite um numero para a lista 1:");
        scanf("%d",&num1[i]);
    }
    for(i=0;i<10; i++){
        printf("digite um numero para a lista 2:");
        scanf("%d",&num2[i]);
    }
    for(i=0;i<10;i++){
        num3[j++]=num1[i];
        num3[j++]=num2[i];
    }
    for(i=0;i<20;i++){
        printf("%d ",num3[i]);
    }
}