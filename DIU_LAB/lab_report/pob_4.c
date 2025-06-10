#include <stdio.h>
int main()
{
     char c;
     scanf("%c", &c);
     if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
     {
          printf("alphabet\n");
     }
     else if (c >= '0' && c <= '9')
     {
          printf("digit\n");
     }
     else
     {
          printf("special character\n");
     }
     return 0;
}