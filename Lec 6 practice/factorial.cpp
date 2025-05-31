#include <iostream>
using namespace std;
int main()
{
     int t;
     cin >> t;
     for (int i = 1; i <= t; i++)
     {
          int n;
          cin >> n;
          long long int factorial = 1;
          for (int i = 1; i <= n; i++)
          {
               factorial *= i;
          }
          cout << factorial << endl;
     }
     return 0;
}