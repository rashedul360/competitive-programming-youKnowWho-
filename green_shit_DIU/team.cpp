// https://codeforces.com/problemset/problem/231/A
#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;
     int count_a = 0;
     for (int i = 1; i <= n; i++)
     {
          int count = 0;
          int Petya, Vasya, Tonya;
          cin >> Petya >> Vasya >> Tonya;
          if (Petya == 1)
          {
               count++;
          }
          if (Vasya == 1)
          {
               count++;
          }
          if (Tonya == 1)
          {
               count++;
          }
          if (count > 1)
          {
               count_a++;
          }
     }
     cout << count_a << endl;
     return 0;
}