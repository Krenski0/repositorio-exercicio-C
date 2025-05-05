#include<stdio.h>
#include<cmath>

int main(){
    int numba, numex, exp;
    printf("digite o número que sera o numero base:");
    scanf("%d", &numba);
    printf("digite o número que sera o exponente:");
    scanf("%d", &numex);
    exp = pow(numba,numex);
    printf("%d", exp);

}