/******************************************************************************

A prefeitura de uma cidade fez uma pesquisa com 200 pessoas, coletando dados 
sobre o salário e o número de filhos. A prefeitura deseja saber: • A média do
salário dessas pessoas • A média do número de filhos • O maior salário 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int dados[5];
    int i;
    for(i=0;i<5;i++){
        printf("\n Entre com valor para posição %i: ", i);
        scanf("%i", &dados[i]);
    }
    for(i=0;i<5;i++){
        printf("\nElemento posicao %i: %i", i, dados[i]);
    }
}