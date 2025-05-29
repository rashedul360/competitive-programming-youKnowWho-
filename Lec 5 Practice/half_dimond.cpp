/* half dimond problem
   *
  ***
 *****
*******
 *****
  ***
   *

*/
#include <iostream>
using namespace std;
int main()
{
     int n;
     printf("please input a number: ");
     scanf("%d", &n);
     for (int i = 1; i <= n; i++)
     {
          int space = n - i;
          int star = n - space;
          for (int j = 1; j <= space; j++)
          {
               printf(" ");
          }
          for (int j = 1; j <= star; j++)
          {
               printf("*");
          }
          for (int j = 2; j <= star; j++)
          {
               printf("*");
          }

          printf("\n");
     }

     for (int i = n - 1; i >= 0; i--)
     {
          int space = n - i;
          int star = i;
          for (int j = 1; j <= space; j++)
          {
               printf(" ");
          }
          for (int j = 1; j <= star; j++)
          {
               printf("*");
          }
          for (int j = 2; j <= star; j++)
          {
               printf("*");
          }
          printf("\n");
     }
     return 0;
}