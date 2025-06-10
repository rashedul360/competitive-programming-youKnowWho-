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
     // reversion
     for (int i = 0, j = n - 1; i < n / 2; i++, j--)
     {
          swap(arr[i], arr[j]);
     }
     cout << "[ ";
     for (int i = 0; i < n; i++)
     {
          cout << arr[i] << " ";
     }
     cout << "]\n";

     return 0;
}