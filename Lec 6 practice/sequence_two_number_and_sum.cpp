#include <iostream>
using namespace std;
int main()
{
     int n, m;
     int small, large;
     while (cin >> n >> m)
     {
          if (n > m)
          {
               large = n;
               small = m;
          }
          else if (m > n)
          {
               large = m;
               small = n;
          }
          else if (m == n)
          {
               small = n;
               large = n;
          }
          if (small <= 0 || large <= 0)
          {
               break;
          }
          long long int sum = 0;
          bool is_logic_fillUp = false;
          for (int i = small; i <= large; i++)
          {
               cout << i << " ";
               sum += i;
               is_logic_fillUp = true;
          }
          if (is_logic_fillUp)
          {
               cout << "sum =" << sum << endl;
          }
     }

     return 0;
}