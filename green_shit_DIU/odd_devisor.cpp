#include <iostream>
using namespace std;

int main()
{
     int t;
     cin >> t;
     while (t--)
     {
          long long int num;
          cin >> num;
          while (num % 2 == 0)
          {
               num /= 2;
          }

          if (num == 1)
               cout << "NO\n";
          else
               cout << "YES\n";
     }
     return 0;
}