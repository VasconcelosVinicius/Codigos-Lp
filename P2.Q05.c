/******************************************************************************

Alunos: Vinicius Vasconcelos Cavalcante
                Questao 05 P2
            Prof: Pedro Pedrosa Rebouças Filho

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, nn, n2;
    
    printf("digite um numero:\n");
    scanf("%d", &n);
    
    if(n != 1 & n > 4)
    {
        printf("deseja digitar novamente?\n");
        scanf("%d", &n2);
            if(n2 != 1 & n2 > 4)
            printf("nenhuma opção valida escolhida");
            else
            printf("Operação valida");
    }
    else
    {
        printf("Operação valida, deseja fazer novamente?\n");
        printf("Se não, digite 0\n");
        printf("Se sim, digite 1\n");
        scanf("%d", & nn);
        printf("numero escolhido: %d", nn);
        
        if(nn == 0)
          printf("\nCaso encerrado");
             else if(nn == 1)
                printf("\nLer um novo numero e operação:........ \n");
    }
    
    
    return 0;
}
