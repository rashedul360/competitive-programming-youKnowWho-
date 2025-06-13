// https://codeforces.com/problemset/problem/510/A
#include <iostream>
using namespace std;
int main()
{
     int n, m;
     cin >> n >> m;
     int flag = 0;
     for (int i = 1; i <= n; i++)
     {
          if (i % 2 == 1)
          {
               for (int j = 0; j < m; j++)
               {
                    cout << "#";
               }
               cout << endl;
          }
          else
          {
               if (flag == 0)
               {
                    for (int j = 0; j < (m - 1); j++)
                    {
                         cout << ".";
                    }
                    cout << "#";
               }
               else
               {

                    cout << "#";
                    for (int j = 0; j < (m - 1); j++)
                    {
                         cout << ".";
                    }
               }
               cout << endl;
               flag = !flag;
          }
     }
     return 0;
}