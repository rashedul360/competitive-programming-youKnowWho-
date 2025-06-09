#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;
     bool flag = false;
     for (int i = 1; i <= n; i++)
     {
          int first_boy = n / i;
          int remaining = n - first_boy;
          int total = first_boy + remaining;
          if ((first_boy % 2 == 0) && (remaining % 2 == 0) && n == total && remaining != 0)
          {

               flag = true;
          }
     }
     if (flag)
     {
          cout << "YES\n";
     }
     else
     {
          cout << "NO\n";
     }

     return 0;
}