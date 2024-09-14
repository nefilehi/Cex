/******************************************************************************

Elaborar um programa que calcule e apresente o valor do volume de uma caixa 
retangular, utilizando a fórmula VOLUME <- COMPRIMENTO * LARGURA * ALTURA. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    float vol, com, lar, alt;
    
    printf("\n Digite o comprimento da caixa: ");
    scanf("%f", &com);
    printf("\n Digite a largura da caixa: ");
    scanf("%f", &lar);
    printf("\n Digite a altura da caixa: ");
    scanf("%f", &alt);
    vol = com * lar * alt;
    printf("\n O volume da caixa é: %f", vol);
}
