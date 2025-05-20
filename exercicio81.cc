#include <stdio.h>

int main() {
    int numero_veiculos, numero_acidentes;
    int maior_acidentes = 0, menor_acidentes = 99999999;
    int cod_maior = 0, cod_menor = 0;
    int cidades[5];
    float media_acidentes, soma_acidentes = 0, soma_veiculos = 0;

    for (int i = 0; i < 5; i++) {
        printf("Digite o código da cidade %d: ", i + 1);
        scanf("%d", &cidades[i]);

        printf("Digite o número de veículos da cidade %d: ", i + 1);
        scanf("%d", &numero_veiculos);

        printf("Digite o número de acidentes da cidade %d: ", i + 1);
        scanf("%d", &numero_acidentes);

        if (numero_veiculos < 2000) {
            media_acidentes = (float)numero_acidentes / numero_veiculos;
            printf("A média de acidentes por veículo da cidade de código %d é %.2f\n", cidades[i], media_acidentes);
        }
        if (numero_acidentes > maior_acidentes) {
            maior_acidentes = numero_acidentes;
            cod_maior = cidades[i];
        }
        if (numero_acidentes < menor_acidentes) {
            menor_acidentes = numero_acidentes;
            cod_menor = cidades[i];
        }

        soma_acidentes += numero_acidentes;
        soma_veiculos += numero_veiculos;
    }
    printf("\nA maior quantidade de acidentes foi na cidade de código %d, com %d acidentes\n", cod_maior, maior_acidentes);
    printf("A menor quantidade de acidentes foi na cidade de código %d, com %d acidentes\n", cod_menor, menor_acidentes);
    printf("A média de veículos nas 5 cidades é %.2f\n", soma_veiculos / 5);

    return 0;
}
