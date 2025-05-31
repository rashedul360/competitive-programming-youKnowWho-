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
          int m = n;
          if (n == 0)
          {
               cout << 0 << endl;
               continue;
          }
          while (m != 0)
          {
               int last_digit = m % 10;
               m = m / 10;
               cout << last_digit << " ";
          }
          cout << endl;
     }
     return 0;
}