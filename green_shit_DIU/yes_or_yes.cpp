// https://codeforces.com/problemset/problem/1703/A

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
          // Y = 89, y = 121; E =69; S = 83;
          int c_Y = 89;
          int s_y = c_Y + 32;
          int c_E = 69;
          int s_e = c_E + 32;
          int c_S = 83;
          int s_s = c_S + 32;
          bool is_yes = false;
          int count = 0;
          if (((int)str[0] == c_Y) || ((int)str[0] == s_y))
          {
               is_yes = true;
               count++;
          }
          else
               is_yes = false;
          if (((int)str[1] == c_E) || ((int)str[1] == s_e))
          {
               is_yes = true;
               count++;
          }
          else
               is_yes = false;
          if (((int)str[2] == c_S) || ((int)str[2] == s_s))
          {
               is_yes = true;
               count++;
          }
          else
               is_yes = false;
          // print
          if (is_yes && count == 3)
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