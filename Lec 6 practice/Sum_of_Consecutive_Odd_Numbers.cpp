#include <iostream>
#include <math.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     for (int i = 1; i <= t; i++)
     {
          int n, m;
          cin >> n >> m;
          int small = min(n, m);
          int large = max(n, m);
          int sum = 0;
          for (int j = small + 1; j < large; j++)
          {
               if (j % 2 == 1)
               {
                    sum += j;
               }
          }
          cout << sum << endl;
     }

     return 0;
}