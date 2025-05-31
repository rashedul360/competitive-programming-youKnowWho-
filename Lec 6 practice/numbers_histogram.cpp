#include <iostream>
using namespace std;
int main()
{
     char c;
     int n;
     cin >> c >> n;
     int arr[n];
     for (int i = 1; i <= n; i++)
     {
          cin >> arr[i];
     }
     for (int i = 1; i <= n; i++)
     {
          for (int j = 1; j <= arr[i]; j++)
          {
               cout << c;
          }
          cout << endl;
     }

     return 0;
}