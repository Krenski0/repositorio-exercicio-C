#include<stdio.h>
#include<cmath>

int main(){
    int A[10];
    int i;
    int soma_dos_cuadradoz;
    for(i = 0; i<10; i++){
        printf("digite o %d numero:", i+1);
        scanf("%d", &A[i]);
        A[i] = pow(A[i], 2);
        soma_dos_cuadradoz += A[i];
    }
    printf("soma dos quadrados: %d", soma_dos_cuadradoz);
}