// https://codeforces.com/problemset/problem/1999/A
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     for (int i = 1; i <= t; i++)
     {
          int num;
          cin >> num;
          int last_digit = num % 10;
          int first_digit = num / 10;
          int sum = last_digit + first_digit;
          cout << sum << endl;
     }
     return 0;
}