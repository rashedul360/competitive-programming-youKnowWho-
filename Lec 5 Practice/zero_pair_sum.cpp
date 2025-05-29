/* zero pair sum
     take an integer n; input n times to an array;
     check i+j = 0;
     if zero print like this [0] + [7] = -9 + 9 = 0
     range 1<=n<=10; and value rage: least -10 and most 10;
     when n = 5; [3,1,-3,-3-1];
          output:
               a[0] + a[2] = 3 + -3 = 0
               a[0] + a[3] = 3 + -3 = 0
               a[1] + a[4] = 1 + -1 = 0
     when n = 10; [-9 ,-2 ,-2, 0, 2, -2, -2, 9, 7, -7];
          output:
               a[0] + a[7] = -9 + 9 = 0
               a[1] + a[4] = -2 + 2 = 0
               a[2] + a[4] = -2 + 2 = 0
               a[4] + a[5] = 2 + -2 = 0
               a[4] + a[6] = 2 + -2 = 0
               a[8] + a[9] = 7 + -7 = 0
*/

#include <iostream>
using namespace std;
int main()

{
     int n;
     printf("please enter value for n = ");
     scanf("%d", &n);
     int arr[n];
     for (int i = 0; i < n; i++)
     {
          printf("please enter the value for index %d :  ", i);
          scanf("%d", &arr[i]);
     }
     for (int i = 0; i < n; i++)
     {
          for (int j = i + 1; j < n; j++)
          {
               if ((arr[i] + arr[j]) == 0)
               {
                    printf("[%d] + [%d] = %d + %d = %d\n", i, j, arr[i], arr[j], (arr[i] + arr[j]));
               }
          }
     }
     return 0;
}