#include <iostream>
using namespace std;
bool is_lucky(int num)
{
     while (num != 0)
     {
          int last_digit = num % 10;
          if ((last_digit != 4) && (last_digit != 7))
               return false;
          num /= 10;
     };
     return true;
}
int main()
{
     int n, m;
     cin >> n >> m;
     bool found = false;
     for (int i = n; i <= m; i++)
     {

          if (is_lucky(i))
          {
               cout << i << " ";
               found = true;
          }
     }

     if (!found)
          cout << -1;
     cout << endl;
     return 0;
}