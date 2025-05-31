#include <iostream>
using namespace std;
int main()
{
     int n, m;
     cin >> n >> m;
     for (int i = n; i <= m; i++)
     {
          int k = i;
          bool is_lucky = false;
          while (k != 0)
          {
               int last_digit = k % 10;
               k = k / 10;
               if (last_digit != 4 || last_digit != 7)
               {
                    is_lucky = false;
               }
               else
               {
                    is_lucky = true;
               }
          }
          if (is_lucky)
               cout << i << " ";
     }

     cout << endl;
}