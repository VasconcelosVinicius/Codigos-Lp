/******************************************************************************

Aluno: Vinicius Vasconcelos Cavalcante
    Questão: 33 lista 01
        Show Man: Pedro Pedrosa Rebouças Filho

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, aux, r, cont;
    
    printf("digite um numero: \n");
    scanf("%d", &n);
    
    if(n > 0)
    {
        aux = 1;
        cont = 0;
            
            while(aux <= n)
            {
                if(n%aux == 0)
                    cont++;
                    
                aux++;    
            }
            
        if(cont <= 2)
        {
            printf("%d é primo", n);
        }
        else
        {
            printf("%d não é primo", n);
        }
    }
    else
    {
        printf("não é primo");
    }
    
    return 0;
}

