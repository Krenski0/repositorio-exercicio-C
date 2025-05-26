#include<stdio.h>

int main(){
    char palavra[10];
    int consoantes, i;
    printf("digite uma palavra:");
    scanf("%s", palavra);
    consoantes = 0;
        if (palavra[i] != 'a' && palavra[i] != 'e' && palavra[i] != 'i' && palavra[i] != 'o' && palavra[i] != 'u'){
            consoantes++;
        }
    printf("a palavra tem %d consoantes", consoantes);
}