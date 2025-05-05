#include<stdio.h>

int main(){
    int num1;
    num1 = 1;
    printf("os números impares de 1 a 50 são: ");
    while(num1>0 && num1<50){
        num1 += 1;
        if (num1 % 2 == 1){
            printf("%d", num1);
            printf(" ");
        }     
    }
}