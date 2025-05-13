#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char palavra[500];

    printf("Digite qualquer coisa: ");
    fgets(palavra, sizeof(palavra), stdin);

    size_t tamanho = strlen(palavra);
    if (tamanho > 0 && palavra[tamanho - 1] == '\n') {
        palavra[tamanho - 1] = '\0';
    }

    printf("Os valores ASCII sao:\n");
    for (int i = 0; palavra[i] != '\0'; i++) {
            printf("%c e: %d\n", palavra[i], (int) palavra[i]);
    }
}