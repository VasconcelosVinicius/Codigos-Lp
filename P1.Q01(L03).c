/******************************************************************************

            Aluno: Vinicius Vasconcelos Cavalcante
                    Questão 03 Lista 01
                        Prof: P.P.Rebouças Filho

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x1, x2, delta;
    
    //eq = ax^2 + b*x + c= 0

    printf("Digite a:\n");
    scanf("%f", &a);
    
    printf("Digite b:\n");
    scanf("%f", &b);
    
    printf("Digite c:\n");
    scanf("%f", &c);

    
    if(a == 0)
    {
        printf("não é uma equação de 2° grau");
    }
    else
    {
        delta = (b*b) - (4*a*c);
        printf("\ndelta = %.1f\n", delta);
    }
    
    if(delta > 0)
    {
      x1 = (-b + sqrt(delta))/(2*a);
      x2 = (-b - sqrt(delta))/(2*a);
      
      printf("\nraiz 1 = %.1f\n", x1);
      printf("\nraiz 2 = %.1f\n", x2);
      
      printf("\nx1 e x2 são raizes reais\n");

    }
    else
    {
      printf("\nnão existem raizes reais\n");  
    }
    
    
    return 0;
}
