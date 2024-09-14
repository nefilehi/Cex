/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int vetorA[5], vetorB[5], vetorC[5], i, x, a, n;
    
    for(i=0;i<5;i++){
        printf("\n Entre com valor para posição %i: ", i);
        scanf("%i", &vetorA[i]);
    }
    for(i=0;i<5;i++){
        printf("\n Entre com valor para posição %i: ", i);
        scanf("%i", &vetorB[i]);
    }
    for(i=0;i<5;i++){
        vetorC[i] = vetorA[i] + vetorB[i];
    }
    for(i=0;i<5;i++){
        printf("\nElemento posicao %i: %i", i, vetorC[i]);
    }
}
