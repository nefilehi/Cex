/******************************************************************************

Welcome to GDB Online.
Faça um algoritmo para ler: número da conta do cliente, saldo, débito e crédito.
Após, calcular e escrever o saldo atual (saldo atual = saldo - débito + crédito).
Também testar se saldo atual for maior ou igual a zero escrever a mensagem 'Saldo
Positivo', senão escrever a mensagem 'Saldo Negativo'. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int cc;
    float s, sa, d, c;
    
    printf("\n Digite o número da conta: ");
    scanf("%i", &cc);
    printf("\n Digite o saldo: ");
    scanf("%f", &s);
    printf("\n Digite o debito: ");
    scanf("%f", &d);
    printf("\n Digite o crédito: ");
    scanf("%f", &c);
    
    sa = s - d + c;
    
    if (sa >= 0){
        printf("\n saldo positivo: %f", sa);
    }
    else {
        printf("\n saldo negativo: %f", sa);
    }
}