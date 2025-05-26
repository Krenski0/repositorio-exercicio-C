#include<stdio.h>

int main(){
    float salario, abono, salario_f = 0, quant = 0, valor_m = 0, maior_abono = 0;
    while(true){
        printf("Digite o salario: ");
        scanf("%f", &salario);
        if(salario == 0){
            break;
        }
        else{
            if ((salario/5)<100){
                abono = 100;
                salario_f += abono;
                valor_m ++;
            }
            else{
                abono = (salario/5);
                salario_f += abono;
            }
            if(abono > maior_abono){
                maior_abono = abono;
            }
            printf("salario - %.2f, abono - %.2f\n", salario, abono);
            quant++;
        }
    }
    printf("foram analisados %.2f funcionarios\n o total gasto com abonos foi de %.2f,\n o maior abono foi de %.2f\n", quant, salario_f, maior_abono);
}