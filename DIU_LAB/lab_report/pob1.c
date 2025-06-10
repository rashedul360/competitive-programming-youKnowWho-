#include <stdio.h>
int main()
{
     int num;
     scanf("%d", &num);
     if (num % 5 == 0)
          printf("divisible by 5\n");
     else if (num % 11 == 0)
          printf("divisible by 11\n");
     else
          printf("not divisible by 5 and 11");
     return 0;
}