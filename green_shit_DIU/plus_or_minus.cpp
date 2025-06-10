// https://codeforces.com/problemset/problem/1807/A
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
          char sign = ' ';
          if ((a + b) == c)
               sign = '+';
          if ((a - b) == c)
               sign = '-';
          cout << sign << endl;
     }
     return 0;
}