/******************************************************************************

Aluno: Vinicius Vasconcelos Cavalcante
    Questão: 31 lista 01
        Prof: Pedro Pedrosa Rebouças Filho

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, cont;
    
    printf("digite y: \n");
    scanf("%f", &y);
    
    x = y/2;
    cont = cont + 1;
    
    while(cont < 20)
    {
        x = (x*x + y)/(cont*x);
        cont = cont + 1;
    }

    printf("raiz y = %f\n", x);
    
    return 0;
}
