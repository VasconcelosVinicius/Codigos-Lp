/******************************************************************************

Aluno: Vinicius Vasconcelos Cavalcante
    Questão 24 da Lista 1
        Prof: P.P. Rebouças Filho.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float x, n, d, f, c;
    
    printf("digite x:\n");
    scanf("%f", & x);
    
    n = 1;
    d = 0;
    f = 1;
    c = 0;
    
    while(d <= 20)
    {
        c += n/f;
        n *= x * x;
        d += 2;
        f *= (d - 1) * d * (-1);
    }

    printf("coseno = %f\n", c);
    
    
    return 0;
}
