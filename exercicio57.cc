#include<stdio.h>

int main(){
    int num1, tabu, b;
    printf("digite o numero que voce quer a tabuada:");
    scanf("%d", &num1);
    printf("digite ate quantas vezes vai multiplicar:");
    scanf("%d", &tabu);
    b = 1;
    while(b <= tabu){
        printf("%d", num1);
        printf("X");
        printf("%d", b);
        printf("=");
        printf("%d\n", num1 * b);
        b += 1;
    }

}