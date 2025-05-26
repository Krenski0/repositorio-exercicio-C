#include <stdio.h>

int main() {
    int i, j, quant, contador_lista;
    float quant_vendas, venda, total_vendas, salario;
    float comissao = 0.09;
    int nao_sei[9] = {0}; 

    printf("digite quantos funcionarios voce quer analisar: ");
    scanf("%d", &quant);

    for (i = 0; i < quant; i++) {
        printf("\nfuncionario %d:\n", i + 1);
        printf("digite a quantidade de vendas: ");
        scanf("%f", &quant_vendas);

        total_vendas = 0;
        for (j = 0; j < quant_vendas; j++) {
            printf("digite o valor da venda %d: ", j + 1);
            scanf("%f", &venda);
            total_vendas += venda;
        }

        salario = total_vendas * comissao + 200; 
        printf("salario do funcionario %d: R$%.2f\n", i + 1, salario);

        
        contador_lista = (int)(salario) / 100 - 2; 

        if (contador_lista >= 8) {
            contador_lista = 8; 
        } else if (contador_lista < 0) {
            contador_lista = 0; 

        nao_sei[contador_lista]++;
    }
}

    for (i = 0; i < 8; i++) {
        printf("R$%d - R$%d: %d funcionario(s)\n", 200 + i * 100, 299 + i * 100, nao_sei[i]);
    }
    printf("R$1000 ou mais: %d funcionario(s)\n", nao_sei[8]);

    return 0;
}
