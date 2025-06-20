// https://codeforces.com/problemset/problem/282/A
#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;
     int x = 0;
     for (int i = 0; i < n; i++)
     {
          string c;
          cin >> c;

          if (c == "++X" || c == "X++")
          {
               x++;
          }
          else if (c == "--X" || c == "X--")
          {
               x--;
          }
     }

     cout << x << endl;

     return 0;
}