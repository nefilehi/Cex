/******************************************************************************

Enviando parametros Function(função)
calculadora

*******************************************************************************/
#include <stdio.h>

void calcula(float x, float y, char op){
    float resultado;
    switch(op){
        case '+':
            resultado = x + y;
            printf("\nValor da soma: %f", resultado);
            break;
        case '-':
            resultado = x - y;
            printf("\nValor da subtração: %f", resultado);
            break;
        case '*':
            resultado = x * y;
            printf("\nValor da multiplicação: %f", resultado);
            break;
        case '/':
            resultado = x / y;
            printf("\nValor da divisão: %f", resultado);
            break;
        default:
            printf("\nOperador invalido");
    }
}

int main()
{
    float x, y;
    char op;
    printf("Entre com o valor de x: ");
    scanf("%f", &x);
    printf("\nEntre com o valor de y: ");
    scanf("%f", &y);
    printf("\nEntre com o operador(+, -, *, /): ");
    getchar();
    scanf("%c", &op);
    calcula(x, y, op);
}