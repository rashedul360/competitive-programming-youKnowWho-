/*
     max finder form array:
     take input n;
     1<=n<=10;
     n=4; [3,1,5,2] ; ans will be 5
*/

#include <iostream>
using namespace std;
int main()
{
     int arr[] = {3, 1, 5, 2};
     int max = arr[0];
     for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
     {
          if (max < arr[i])
          {
               max = arr[i];
          }
     }
     printf("max is  = %d", max);
     return 0;
}