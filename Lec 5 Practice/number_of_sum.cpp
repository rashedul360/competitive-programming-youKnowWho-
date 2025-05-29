#include <iostream>
using namespace std;
int main()
{
     int n;
     printf("please enter a value for n : ");
     scanf("%d", &n);
     for (int i = 1; i <= n; i++)
     {
          int sum = 0;
          for (int j = 1; j <= i; j++)

          {
               sum += j;
               printf("%d", j);
               if (j == i)
               {
                    printf("=");
               }
               else
               {
                    printf("+");
               }
          }
          printf("%d\n", sum);
     }
     return 0;
}