/******************************************************************************

Aluno: Vinicius Vasconcelos Cavalcante
    Questão: 37 lista 01
        Prof: Pedro Pedrosa Rebouças Filho

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, s, nt, r;
    
    printf("digite n:\n");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("número negativo\n");
    }
    else
    {
        s = 0;
        nt = n;
            while(nt > 0)
            {
                r = nt%10;
                s = s + r;
                nt = nt/10;
            }
            
        printf("somatorio dos digitos: %d\n", s);    
    }

    return 0;
}