#include <stdio.h>
int main()
{
     int test_case;
     scanf("%d", &test_case);
     int min_num = 999999999;

     for (int i = 1; i <= test_case; i++)
     {
          int num;
          scanf("%d", &num);
          if (min_num > num)
          {
               min_num = num;
          }
     }
     printf("%d\n", min_num);
     return 0;
}