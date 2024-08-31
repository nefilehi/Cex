/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, a, b, c;
    printf("\n Digite uma opção 1/2/3: ");
    scanf("%i", &n);
    printf("\n Digite o valor de A: ");
    scanf("%i", &a);
    printf("\n Digite o valor de B: ");
    scanf("%i", &b);
    printf("\n Digite o valor de C: ");
    scanf("%i", &c);
    switch(n){
        
        case 1:
        if (a < b && a < c && b < c){
            printf("\n A ordem é: \n %i \n %i \n %i ",  a, b, c);
        } else if (b < a && c < a && c < b){
            printf("\n A ordem é: \n %i \n %i \n %i ",  c, b, a);
        } else if (b < a && a < c && b < c){
            printf("\n A ordem é: \n %i \n %i \n %i ",  b, a, c);
        } else if (b < a && b < c && c < a){
            printf("\n A ordem é: \n %i \n %i \n %i ",  b, c, a);
        } else if (a < b && a < c && c < b){
            printf("\n A ordem é: \n %i \n %i \n %i ",  a, c, b);
        } else if (c < a && c < b && a < b){
            printf("\n A ordem é: \n %i \n %i \n %i ",  c, a, b);
        } break;
        
        case 2:
        if (a > b && a > c && b > c){
            printf("\n A ordem é: \n %i \n %i \n %i ",  a, b, c);
        } else if (b > a && c > a && c > b){
            printf("\n A ordem é: \n %i \n %i \n %i ",  c, b, a);
        } else if (b > a && a > c && b > c){
            printf("\n A ordem é: \n %i \n %i \n %i ",  b, a, c);
        } else if (b > a && b > c && c > a){
            printf("\n A ordem é: \n %i \n %i \n %i ",  b, c, a);
        } else if (a > b && a > c && c > b){
            printf("\n A ordem é: \n %i \n %i \n %i ",  a, c, b);
        } else if (c > a && c > b && a > b){
            printf("\n A ordem é: \n %i \n %i \n %i ",  c, a, b);
        } break;
        
        case 3:
        if (a > b && a > c && b > c){
            printf("\n A ordem é: \n %i \n %i \n %i ",  b, a, c);
        } else if (b > a && c > a && c > b){
            printf("\n A ordem é: \n %i \n %i \n %i ",  b, c, a);
        } else if (b > a && a > c && b > c){
            printf("\n A ordem é: \n %i \n %i \n %i ",  a, b, c);
        } else if (b > a && b > c && c > a){
            printf("\n A ordem é: \n %i \n %i \n %i ",  c, b, a);
        } else if (a > b && a > c && c > b){
            printf("\n A ordem é: \n %i \n %i \n %i ",  c, a, b);
        } else if (c > a && c > b && a > b){
            printf("\n A ordem é: \n %i \n %i \n %i ",  a, c, b);
        } break;
        
        default:
        printf("\n Digite o primeiro número entre 1 e 3.");
    }
}