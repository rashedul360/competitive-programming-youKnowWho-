#include <iostream>
using namespace std;
int main()
{

     int n = 100;
     long long int arr[n];
     for (int i = 0; i < n; i++)
     {
          cin >> arr[i];
     }
     long long int max = arr[0];
     long long int index = 0;
     for (int i = 0; i < n; i++)
     {
          if (max < arr[i])
          {
               max = arr[i];
               index++;
          }
     }
     cout << max << endl;
     cout << index + 1 << endl;

     return 0;
}