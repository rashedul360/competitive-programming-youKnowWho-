#include <iostream>
using namespace std;
int main()
{
     int n;
     printf("please enter a value for n : ");
     scanf("%d", &n);
     int space = n - 2;
     for (int i = 1; i <= n; i++)
          printf("*");
     printf("\n");
     for (int i = 1; i <= n - 2; i++)
     {
          printf("*");
          for (int j = 1; j <= space; j++)
          {
               printf(" ");
          };
          printf("*\n");
     }

     for (int i = 1; i <= n; i++)
          printf("*");
     printf("\n");
     return 0;
}