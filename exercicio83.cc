#include<stdio.h>

int main(){
    float num;
    int quant [4] = {0, 0, 0, 0};
    while(true){
        printf("digite um numero:");
        scanf("%f",&num);
        if (num >=0 && num<26){
            quant[0]++;
        }
        else if (num >=26 && num < 51){
            quant[1]++;
        }
        else if (num >=51 && num < 76){
            quant[2]++;
        }
        else if (num >=76 && num < 101){
            quant[3]++;
        }
        else if (num > 100){
        }
        else{
            break;
        }
    }
    printf("quantidade de numeros entre 0 e 25: %d\n",quant[0]);
    printf("quantidade de numeros entre 26 e 50: %d\n",quant[1]);
    printf("quantidade de numeros entre 51 e 75: %d\n",quant[2]);
    printf("quantidade de numeros entre 76 e 100: %d\n",quant[3]);
}