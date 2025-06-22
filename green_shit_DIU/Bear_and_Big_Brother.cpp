// https://codeforces.com/problemset/problem/791/A
#include <iostream>
using namespace std;
int main()
{
     int a, b;
     cin >> a >> b;
     int count = 0;
     for (int i = 1;; i++)
     {
          a *= 3;
          b *= 2;
          if (a > b)
          {
               cout << i << endl;
               break;
          }
     }

     return 0;
}