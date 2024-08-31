/******************************************************************************

Um posto está vendendo combustíveis com a seguinte tabela de descontos: 
Álcool: até 20 litros, desconto de 3% por litro e acima de 20 litros, desconto de 5% por litro; Gasolina:
até 20 litros, desconto de 4% por litro e acima de 20 litros, desconto de 6% por litro. Escreva um algoritmo
que leia o número de litros vendidos, o tipo de combustível (A-álcool, G-gasolina) e imprima o valor a ser pago
pelo cliente. Considere que o preço do litro da gasolina é R$ 5,39 e o preço do litro do álcool é R$ 3,39. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    float l, vt;
    char c;
    
    printf("\n Digite o tipo de combustivel: ");
    scanf("%c", &c);
    printf("\n Digite quantos litros: ");
    scanf("%f", &l);
    if (c == 'G' && l < 20){
        vt = (l * 5.39) * 0.96;
    }
    if (c == 'G' && l >= 20){
        vt = (l * 5.39) * 0.94;
    }
    if (c == 'A' && l < 20){
        vt = (l * 3.39) * 0.97;
    }
    if (c == 'A' && l >= 20){
        vt = (l * 3.39) * 0.95;
    }
    printf("\n O valor total a ser pago é: %f", vt);
}
