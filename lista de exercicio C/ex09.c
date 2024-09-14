/******************************************************************************

Crie um programa que lê o ano de nascimento de uma pessoa e o ano atual. Calcule
e mostre qual é: a idade da pessoa em anos, a idade da pessoa em meses, a idade 
da pessoa em dias e a idade da pessoa em semanas. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int an, aa, ia, im, id, is;
    
    printf("\n Digite o ano de nascimento da pessoa: ");
    scanf("%i", &an);
    printf("\n Digite o ano de atual: ");
    scanf("%i", &aa);
    
    ia = aa - an;
    printf("\n A idade em anos é: %i", ia);
    
    im = ia * 12;
    printf("\n A idade em meses é: %i", im);
    
    id = im * 30;
    printf("\n A idade em dias é: %i", id);
    
    is = im * 4;
    printf("\n A idade em semanas é: %i", is);
}