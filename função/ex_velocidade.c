/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float calculaVm(float vi, float vf, float ti, float tf){
    float am;
    am = (vf - vi) / (tf - ti);
    return am;
}

int main()
{
    float vi, vf, ti, tf, am;
    printf("Digite a velocidade inicial: ");
    scanf("%f", &vi);
    
    printf("Digite a velocidade final: ");
    scanf("%f", &vf);
    
    printf("Digite a tempo inicial: ");
    scanf("%f", &ti);
    
    printf("Digite a tempo final: ");
    scanf("%f", &tf);
    
    am = calculaVm(vi, vf, ti, tf);
    printf("\nA velocidade media é %f", am);
}
