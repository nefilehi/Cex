/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[10], maior, menor, media, i;
    maior = 1;
    menor = 1;
    for(i=0;i<10;i++){
        printf("\n Entre com valor para posição %i: ", i);
        scanf("%i", &vetor[i]);
        media += vetor[i];
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        if(vetor[i] < menor){
            menor = vetor[i];
        }
    }
    media = media / 10;
    printf("\nO maior é %i, o menor é %i, e a media é %i", maior, menor, media);
    
}