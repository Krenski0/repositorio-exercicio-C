#include <stdio.h>

int main() {
    int i, N;
    float H = 1;
    printf("Quantos termos serão calculados? ");
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        H = H + 1.0 / (2 + i); 
    }
    printf("O valor de H é: %.2f\n", H);
}
