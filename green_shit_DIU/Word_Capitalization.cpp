// https://codeforces.com/problemset/problem/281/A
#include <iostream>
using namespace std;
int main()
{
     string str;
     cin >> str;
     if (str[0] >= 'a' && str[0] <= 'z')
     {
          int asci = (int)str[0] - 32;
          str[0] = (char)asci;
     }

     cout << str << endl;
     return 0;
}