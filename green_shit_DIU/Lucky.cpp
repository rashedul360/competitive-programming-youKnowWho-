// https://codeforces.com/problemset/problem/1676/A
#include <iostream>
using namespace std;
int main()
{
     int test;
     cin >> test;
     for (int i = 1; i <= test; i++)
     {
          string num;
          cin >> num;
          int sum_first_3_digit = 0;
          int sum_last_3_digit = 0;
          for (int i = 0; i < 3; i++)
          {

               sum_first_3_digit += num[i] - '0';
          }

          for (int i = 3; i < 6; i++)
          {

               sum_last_3_digit += num[i] - '0';
          }
          if (sum_first_3_digit == sum_last_3_digit)
               cout << "YES\n";
          else
               cout << "NO\n";
     }
     return 0;
}