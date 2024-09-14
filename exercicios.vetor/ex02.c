/******************************************************************************

exercicio vetor com 10 espaços descobrir o maior, o menor
e a media.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetor[10], maior, menor, i;
    float media;
    
    for(i=0;i<10;i++){
        printf("\n Entre com valor para posição %i: ", i);
        scanf("%i", &vetor[i]);
        media += vetor[i];
    }
    
    maior = vetor[0];
    menor = vetor[0];
    
    for(i=0;i<10;i++){
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
