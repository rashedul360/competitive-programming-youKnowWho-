// https://codeforces.com/problemset/problem/1915/A
#include <iostream>
using namespace std;
int main()
{
     int test;
     cin >> test;
     for (int i = 1; i <= test; i++)
     {
          int a, b, c;
          cin >> a >> b >> c;
          if (a == b)
          {
               cout << c << endl;
          }
          else if (b == c)
          {
               cout << a << endl;
          }
          else if (a == c)
          {
               cout << b << endl;
          }
     }
     return 0;
}