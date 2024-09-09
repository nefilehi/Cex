/******************************************************************************

Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final
deste aluno. Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5. 
Fórmula para o cálculo da média final é: mediafinal = (n1*2 + n2*3 + n3*5) /10 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n1, n2, n3, mf;
    
    printf("\n Digite as 3 notas: ");
    scanf("%i", &n1);
    scanf("%i", &n2);
    scanf("%i", &n3);
    mf = (n1 * 2 + n2 * 3 + n3 * 5) / 10;
    printf("\n A media final é: %i", mf);
}
