/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float CalculaArea(float r) {
    float area;
    area = 3.14 * (r * r);
    return area;
};

int main()
{
    float area, r;
    printf("Escreva o raio: ");
    scanf("%f", &r);
    area = CalculaArea(r);
    printf("\nA area é %f", area);
}
