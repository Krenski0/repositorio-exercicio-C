#include <stdio.h>

int main() {
    int n, i;
    float S;
    S = 1.0;
    printf("digite o numero de termos:");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        S = S + (1 + i) / (i + 2);
    }
}
