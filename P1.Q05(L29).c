/******************************************************************************

Aluno: Vinicius Vasconcelos Cavalcante
    Questão: 29 lista 01
        Prof: Pedro Pedrosa Rebouças Filho
        
*******************************************************************************/
#include <stdio.h>

int main()
{
    float n, ac, m, ma, me, s, cont;
    
    printf("digite n:\n");
    scanf("%f", &n);
    
    if(n == 1000)
    {
        printf("foram lidas todas as amostras\n");
    }
    else
    {
        ac = n;
        m = n;
        ma = n;
        me = n;
        s = n;
        cont = cont++;
        
            while(n > 0)
            {
                printf("digite n:\n");
                scanf("%f", &n);
                
                    if(n > 0)
                    {
                        if(n > ma)
                            ma = n;
                        else
                            if(n < me)
                            me = n;
                            
                        m = (ma + me)/2;
                        
                        if(n == m)
                            m = n;
                        else
                        ac = s + n;
                        cont = cont + 1;
                    }
                }
            
        ac = s/cont;
        printf("amostradas coletas:%.2f\n", ac);
        printf("maior temperatura:%.2f\n", ma);
        printf("menor temperatura:%.2f\n", me);
        printf("media das temp:%.2f\n", m);
        printf("cont:%.2f\n", cont);
    }
    
    return 0;
}
