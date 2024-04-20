/******************************************************************************

Aluno: Vinicius Vasconcelos Cavalcante
    Questão: 12 lista 01
        Prof: Pedro Pedrosa Rebouças Filho

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, fat, aux;
    
    printf("digite n:\n");
    scanf("%d", &n);

    if(n < 0)
    {
        printf("nao existe fatorial\n");
    }
    else if(n == 0 || n == 1)
    {
        printf("fatorial = 1\n");
    }
    else
    {
        fat = n;
        aux = n - 1;
        
            while(aux > 1)
            {
                fat *= aux;
                aux--;
            }
            
        printf("fatorial = %d\n", fat);
    }

    return 0;
}
