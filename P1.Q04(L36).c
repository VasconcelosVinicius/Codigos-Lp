/******************************************************************************

Aluno: Vinicius Vasconcelos Cavalcante
            Questao 36 Lista 01
        Prof: Pedro Pedrosa Rebouças Filho

*******************************************************************************/
#include <stdio.h>

int main() 
{
    int n1, n2, cont, s;
    
    n1 = 1;
    n2 = 1;
    
    for(cont = 1; cont < 20; cont++)
    {
        n1 = n2;
        n2 = s;
        s = n1 + n2;
        
        printf("\n%d\n", n2);
    }
    
    return 0;
}
