#include<stdio.h>

int main(){
    int quant = 50, i = 0;
    while(i < quant){
        printf("%d - %.2f\n", i+1, 1.99*(i+1));
        i++;
    }
}