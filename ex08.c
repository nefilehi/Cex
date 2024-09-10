/******************************************************************************

O proprietário da empresa ABC LTDA precisa de um programa de computador para calcular
o novo salário que seus funcionários irão receber a partir do mês que vem. Sabendo que
o aumento de salário para todos os funcionários será de 25%, faça um programa que lê
o valor do salário atual do funcionário e informa o seu novo salário acrescido de 25%. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    float sa, ns;
    
    printf("\n Digite o salário atual: ");
    scanf("%f", &sa);
    ns = sa * 1.25;
    printf("\n O novo salário com aumento é: %f", ns);
}
