// https://codeforces.com/problemset/problem/1742/A
#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;
     for (int i = 1; i <= n; i++)
     {
          int a, b, c;
          cin >> a >> b >> c;
          int is_equal = false;
          if (a + b == c)
          {
               is_equal = true;
          }
          else if (b + c == a)
          {
               is_equal = true;
          }
          else if (c + a == b)
          {
               is_equal = true;
          }
          // output printing
          if (is_equal)
          {
               cout << "YES\n";
          }
          else
          {
               cout << "NO\n";
          }
     }
     return 0;
}