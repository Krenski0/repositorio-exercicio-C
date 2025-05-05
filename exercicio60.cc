#include<stdio.h>

int main(){
    int fibosifilis, quant, s0, s1, i, s2;
    printf("quantas sequencias de fibosifilis voce quer?:");
    scanf("%d", &quant);
    s0 = 0;
    s1 = 1;
    i = 1;
    printf("sequencia sibosifilis: %d ", s0, s1);
    while(i < quant){
        s2 = s1 + s0;
        printf("%d ", s2);
        s0 = s1;
        s1 = s2;
        i += 1;
    }
}