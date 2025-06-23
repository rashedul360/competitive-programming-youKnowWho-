// https://codeforces.com/problemset/problem/236/A
#include <iostream>
using namespace std;
int main()
{
     string str;
     cin >> str;
     char unique[26 + 5] = {0};
     for (int i = 0; i < str.length(); i++)
     {
          unique[str[i] - 'a'] = 1;
     }
     int count = 0;
     for (int i = 0; i < 26; i++)
     {
          if (unique[i] == 1)
          {
               count++;
          }
     }
     if (count % 2 == 0)
     {
          cout << "CHAT WITH HER!\n";
     }
     else
     {
          cout << "IGNORE HIM!\n";
     }
     return 0;
}