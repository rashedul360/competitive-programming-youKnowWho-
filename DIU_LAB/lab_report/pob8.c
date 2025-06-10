#include <stdio.h>
#include <math.h>
int main()
{
     int test_cases;
     scanf("%d", &test_cases); // it uses for how many item a user want to buy
     float sum = 0;
     for (int i = 0; i < test_cases; i++)
     {
          int code;
          scanf("%d", &code);
          if (code == 1)
          {
               sum += 4.00;
          }
          if (code == 2)
          {
               sum += 4.50;
          }
          if (code == 3)
          {
               sum += 5.00;
          }
          if (code == 4)
          {
               sum += 2.00;
          }
          if (code == 5)
          {
               sum += 1.5;
          }
     }
     printf("total payable = %.2f", sum);
     return 0;
}