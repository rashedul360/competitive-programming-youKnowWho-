#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;
     int arr[n];
     for (int i = 0; i < n; i++)
     {
          cin >> arr[i];
     }
     int arr2[n];
     for (int i = 0; i < n; i++)
     {
          for (int j = 0; j < i; j++)
          {
               if (arr[i] == arr[j])
               {
                    arr2[i] = i;
               }
               else
                    arr[2] = i;
          }
     }

     return 0;
}