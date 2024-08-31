/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
    float altura, imc;
    char sexo;
    printf("\n Digite a altura: ");
    scanf("%f",&altura);
    printf("\n Digite o sexo: ");
    scanf("%c",&sexo);
    if (sexo == 'M') {
        imc = (72.7 * altura) - 58;
    }   
    else {
        imc =  (62.1 * altura) - 44.7;
    }
    printf("\n O peso ideal é: %f", imc);
}