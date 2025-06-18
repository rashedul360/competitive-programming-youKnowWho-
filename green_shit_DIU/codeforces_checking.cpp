// https://codeforces.com/problemset/problem/1791/A
#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;

     for (int i = 1; i <= n; i++)
     {
          char c;
          cin >> c;
          if (c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'o' || c == 'r' || c == 'c' || c == 'e' || c == 's')
          {
               cout << "YES\n";
          }
          else
               cout << "NO\n";
     }

     return 0;
}