#include <iostream>
#include <iomanip> // for setprecision

using namespace std;
int main()
{
     int n;
     cin >> n;
     for (int i = 1; i <= n; i++)
     {
          if (n % i == 0)
          {
               cout << i << endl;
          }
     }
     return 0;
}