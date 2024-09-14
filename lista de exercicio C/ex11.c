/******************************************************************************

Faça um programa em C que mostre a tabuada de qualquer número escolhido pelo
usuário (considerar tabuada do número 1 ao 10).

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1, n2, i;
    printf("\n Digite o numero para gerar a tabuada dele: ");
    scanf("%i", &n1);
    for (i = 0 ; i <=10; i++){
        n2 = n1 * i;
        printf("\n Rasultado de %i x %i é: %i", n1, i, n2);
    }
}
