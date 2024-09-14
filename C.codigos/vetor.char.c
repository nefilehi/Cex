/******************************************************************************

vetor char

*******************************************************************************/
#include <stdio.h>

int main()
{
    char nome[30], email[40];
    
    printf("Entre com o seu nome: ");
    //fgets para entrada de dados do vetor nome e stdin no final
    fgets(nome, 30, stdin);
    
    printf("\n Entre com o seu e-mail: ");
    fgets(email, 40, stdin);
    
    printf("\nSeu nome: %s", nome);
    printf("\nSeu e-mail: %s", email);
}
