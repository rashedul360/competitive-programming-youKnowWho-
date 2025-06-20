// https://codeforces.com/problemset/problem/734/A
#include <iostream>
using namespace std;
int main()
{

     int n;
     cin >> n;
     string str;
     int count_d = 0;
     int count_a = 0;
     cin >> str;
     for (int i = 0; i < n; i++)
     {
          if (str[i] == 'D')
          {
               count_d++;
          }
          if (str[i] == 'A')
          {
               count_a++;
          }
     }

     if (count_a > count_d)
     {
          cout << "Anton\n";
     }
     else if (count_d > count_a)
     {
          cout << "Danik\n";
     }
     else if (count_a == count_d)
     {
          cout << "Friendship\n";
     }

     return 0;
}