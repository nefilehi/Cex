/******************************************************************************

Escreva um algoritmo para ler uma temperatura em graus Celsius, calcular e escrever o 
valor correspondente em graus Fahrenheit Celsius (baseado na fórmula abaixo): F = C*1.8+32 

*******************************************************************************/
#include <stdio.h>

int main()
{
    float f,c;
    printf("\n Digite a temperatura em Celsius: ");
    scanf("%f", &c);
    f = (c * 1.8) + 32;
    printf("\n A temperatura em Fahrenheit é: %2.f", f);
}