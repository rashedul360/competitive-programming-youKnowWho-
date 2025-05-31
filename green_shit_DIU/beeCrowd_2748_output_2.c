/*
---------------------------------------
|         Roberto                     |
|                                     |
|         5786                        |
|                                     |
|         UNIFEI                      |
---------------------------------------
*/

#include <stdio.h>
int main()
{
     int n = 39;
     char c1[] = "Roberto";
     char c2[] = "5786";
     char c3[] = "UNIFEI";
     int size_of_c1 = (sizeof(c1) / sizeof(c1[0]));
     int size_of_c2 = (sizeof(c2) / sizeof(c2[0]));
     int size_of_c3 = (sizeof(c3) / sizeof(c3[0]));
     int row = 5;
     for (int i = 1; i <= n; i++)
     {
          printf("-");
     }
     printf("\n");
     for (int i = 1; i <= row; i++)
     {
          printf("|");
          int spaces;
          if (i == 1)
               spaces = (n - (size_of_c1 - 1)) - 9;
          else if (i == 3)
               spaces = (n - (size_of_c2 - 1)) - 9;
          else if (i == 5)
               spaces = (n - (size_of_c3 - 1)) - 9;
          else
               spaces = n - 9;
          printf("\t");
          if (i == 1)
               printf("%s", c1);
          if (i == 3)
               printf("%s", c2);
          if (i == 5)
               printf("%s", c3);
          for (int k = 1; k <= spaces; k++)
          {
               printf(" ");
          }

          printf("|");
          printf("\n");
     }
     for (int i = 1; i <= n; i++)
     {
          printf("-");
     }
     printf("\n");
     return 0;
}