#include <stdio.h>
int main()
{
     float a;
     scanf("%f", &a);
     if (a >= 0 && a <= 400.00)
     {
          float per = 15;
          float per_amount = a * (per / 100);
          printf("Novo salario: %.2f\n", a + per_amount);
          printf("Reajuste ganho: %.2f\n", per_amount);
          printf("Em percentual: %.0f %%\n", per);
     }
     else if (a >= 400.01 && a <= 800.00)
     {
          float per = 12;
          float per_amount = a * (per / 100);
          printf("Novo salario: %.2f\n", a + per_amount);
          printf("Reajuste ganho: %.2f\n", per_amount);
          printf("Em percentual: %.0f %%\n", per);
     }
     else if (a >= 800.01 && a <= 1200.00)
     {
          float per = 10;
          float per_amount = a * (per / 100);
          printf("Novo salario: %.2f\n", a + per_amount);
          printf("Reajuste ganho: %.2f\n", per_amount);
          printf("Em percentual: %.0f %%\n", per);
     }
     else if (a >= 1200.01 && a <= 2000.00)
     {
          float per = 7;
          float per_amount = a * (per / 100);
          printf("Novo salario: %.2f\n", a + per_amount);
          printf("Reajuste ganho: %.2f\n", per_amount);
          printf("Em percentual: %.0f %%\n", per);
     }
     else
     {
          float per = 4;
          float per_amount = a * (per / 100);
          printf("Novo salario: %.2f\n", a + per_amount);
          printf("Reajuste ganho: %.2f\n", per_amount);
          printf("Em percentual: %.0f %%\n", per);
     }

     return 0;
}