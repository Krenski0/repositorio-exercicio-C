#include <stdio.h>

int main() {
    float nota, media[10];
    int i, j;
    int acima_7 = 0;

    for (i = 0; i < 10; i++) {
        media[i]=0;
        printf("aluno %d:\n", i + 1);
        for (j = 0; j < 4; j++) {
            printf("digite a nota %d: ", j + 1);
            scanf("%f", &nota);
            media[i] += nota;
        }
        media[i] /= 4;
        printf("media do aluno %d: %.2f\n", i + 1, media[i]);

        if (media[i] >= 7.0) {
            acima_7++;
        }
    }
    printf("\nquantidade de alunos com media maior ou igual a 7.0: %d\n", acima_7);
}
