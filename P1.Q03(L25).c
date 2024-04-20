/******************************************************************************

Aluno: Vinicius Vasconcelos Cavalcante
    Questão: 25 lista 01
        Prof: Pedro Pedrosa Rebouças Filho

*******************************************************************************/
#include <stdio.h>

int main()
{
    float n, ma, manl, menl, s, cont;
    
    printf("digite n:\n");
    scanf("%f", &n);
    
    if(n<0)
    {
        printf("lista vazia\n");
    }
    else
    {
        manl = n;
        menl = n;
        s = n;
        cont = 1;
        
        while(n>0)
        {
            printf("digite n:\n");
            scanf("%f", &n);
                
                if(n>0)
                {
                    if(n>manl)
                        manl = n;
                    else
                        if(n<menl)
                        menl = n;
                        
                    s = s + n;
                    cont++;
                }
        }
        ma = s / cont;
        printf("maior nota = %.1f\n", manl);
        printf("menor nota = %.1f\n", menl);
        printf("media = %.1f\n", ma);
        printf("cont = %.1f\n", cont);
    }

    return 0;
}
