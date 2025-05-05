#include<stdio.h>

int main(){
    int num1, num2, num1f, num2f;
    printf("digite um número inteiro aleatório:");
    scanf("%d", & num1);
    printf("digite outro número inteiro:");
    scanf("%d", & num2);
    num1f = num1;
    num2f = num2;
    if (num1 > num2){
        while(num2 <= num1){
            printf("%d", num2);
            printf(" \n");
            num2 += 1;
        }
        printf("%d", num1f);
        printf("+");
        printf("%d", num2f);
        printf("= %d\n", num1f+num2f);
    }
    else if(num2 > num1){
        while(num1 <= num2){
            printf("%d", num1);
            printf(" \n");
            num1 += 1;
        }
        printf("%d", num1f);
        printf("+");
        printf("%d", num2f);
        printf("= %d\n", num1f+num2f);
    }
    else if(num1 == num2){
        printf("%d", num2);
        printf("%d", num1f);
        printf("+");
        printf("%d", num2f);
        printf("= %d\n", num1f+num2f);
    }
    else{
        printf("ballssssss");
    }
}
