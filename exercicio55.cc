#include<stdio.h>

int main(){
    int num1, num2;
    printf("digite um número inteiro aleatório:");
    scanf("%d", & num1);
    printf("digite outro número inteiro:");
    scanf("%d", & num2);
    
if (num1 > num2){
    while(num2 <= num1){
        printf("%d", num2);
        printf(" ");
        num2 += 1;
    }
}
else if(num2 > num1){
    while(num1 <= num2){
        printf("%d", num1);
        printf(" ");
        num1 += 1;
    }
}
else if(num1 == num2){
    printf("%d", num2);
}
else{
    printf("ballssssss");
}
}
