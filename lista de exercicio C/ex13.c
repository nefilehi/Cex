/******************************************************************************

A série de Fibonacci é formada pela seguinte sequência: 1, 1, 2, 3, 5, 8, 13, 21,
34, 55, etc. Escreva um algoritmo que gere a série de Fibonacci até o vigésimo termo.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, t1 = 0, t2 = 1, pt;

    printf("Digite o número de termos: ");
    scanf("%d", &n);

    printf("Série de Fibonacci:  %d", t2);

    for (int i = 3; i <= n; ++i) {
        pt = t1 + t2;
        printf(", %d", pt);
        t1 = t2;
        t2 = pt;
    }

    return 0;
}
