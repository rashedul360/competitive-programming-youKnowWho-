#include <stdio.h>
#include <math.h>
int max(int a, int b)
{
     int max_num = 0;
     if (a > b)
     {
          max_num = a;
     }
     else
     {
          max_num = b;
     }
     return max_num;
}
int main()
{
     int a, b, c;
     scanf("%d %d %d", &a, &b, &c);
     int is_odd_a = 0;
     int is_odd_b = 0;
     int is_odd_c = 0;
     int biggest_odd = 0;
     if (a % 2 == 1)
     {
          is_odd_a = 1;
          biggest_odd = a;
     }
     if (b % 2 == 1)
     {
          is_odd_b = 1;
          biggest_odd = b;
     }
     if (c % 2 == 1)
     {
          is_odd_c = 1;
          biggest_odd = c;
     }
     if (is_odd_a && is_odd_b && is_odd_c)
     {
          biggest_odd = max(a, max(b, c));
     }
     else if (is_odd_a && is_odd_b)
     {
          biggest_odd = max(a, b);
     }
     else if (is_odd_b && is_odd_c)
     {
          biggest_odd = max(b, c);
     }
     else if (is_odd_c && is_odd_a)
     {
          biggest_odd = max(a, c);
     }

     printf("biggest odd = %d\n", biggest_odd);
     return 0;
}