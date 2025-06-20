// https://codeforces.com/problemset/problem/977/A
#include <iostream>
using namespace std;
int main()
{
     int num, k;
     cin >> num >> k;
     for (int i = 1; i <= k; i++)
     {
          int last_digit = num % 10;
          if (last_digit != 0)
          {
               num--;
          }
          else if (last_digit == 0)
          {
               num /= 10;
          }
     }
     cout << num << endl;
     return 0;
}