/******************************************************************************

A prefeitura de uma cidade fez uma pesquisa com 200 pessoas, coletando dados
sobre o salário e o número de filhos. A prefeitura deseja saber: • A média do
salário dessas pessoas • A média do número de filhos • O maior salário

*******************************************************************************/
#include <stdio.h>

int main()
{
    int medsal, medfil, ms, maiors, mf, sal, fil, i;
    
    for(i=0;i<200;i++){
        printf("\nDigite a quantidade de filhos: ");
        scanf("%i", &fil);
        
        printf("\nDigite o salário: ");
        scanf("%i", &sal);
        if(sal > maiors){
            maiors = sal;
        }
        ms += sal;
        mf += fil;
    }
    medsal = ms / 200;
    medfil = mf / 200;
    print("\nO maior salario é %i, a media de filhos é %i e a media de salarios é %i", maiors, mediafil, mediasal);
}