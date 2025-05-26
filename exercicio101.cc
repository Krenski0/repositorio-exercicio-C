#include<stdio.h>

int main(){
    int num1[10];
    int num2[10];
    int num3[10];
    int num4[30];
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
    for(i=0;i<10; i++){
        printf("digite um numero para a lista 3:");
        scanf("%d",&num3[i]);
    }
    for(i=0;i<10;i++){
        num4[j++]=num1[i];
        num4[j++]=num2[i];
        num4[j++]=num3[i];
    }
    for(i=0;i<30;i++){
        printf("%d ",num4[i]);
    }
}