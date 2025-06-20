// https://codeforces.com/problemset/problem/41/A
#include <iostream>
#include <string>
using namespace std;
int main()
{
     string s, t;
     cin >> s >> t;
     string str;
     int length = s.length();
     for (int i = length - 1; i >= 0; i--)
     {
          str += s[i];
     }
     if (str == t)
     {
          cout << "YES\n";
     }
     else
     {
          cout << "NO\n";
     }
     return 0;
}