// https://codeforces.com/problemset/problem/1619/A
#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;
     for (int i = 1; i <= n; i++)
     {
          string str;
          cin >> str;
          int length = str.length();
          int half = length / 2;
          string first_part = "";
          string second_part = "";
          for (int i = 0; i < half; i++)
          {
               first_part += str[i];
          }
          for (int i = half; i < length; i++)
          {
               second_part += str[i];
          }
          if (first_part == second_part)
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