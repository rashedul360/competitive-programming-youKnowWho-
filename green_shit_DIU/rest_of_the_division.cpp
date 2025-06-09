#include <iostream>

using namespace std;

int main()
{
     int n, m;
     cin >> n >> m;
     int min_num = min(n, m);
     int max_num = max(n, m);
     for (int i = min_num; i < max_num; i++)
     {
          int num = i;
          if (num < 0)
          {
               num = -i;
          }
          if ((i % 5 == 2) || (i % 5 == 3))
          {
               cout << i << endl;
          }
     }
}