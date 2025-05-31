#include <iostream>
using namespace std;
int main()
{
     int a, b, d;
     char c, e;
     cin >> a >> c >> b >> e >> d;
     if (c == '+')
     {
          if (a + b == d)
          {
               cout << "Yes\n";
          }
          else
          {
               cout << a + b << endl;
          }
     }
     else if (c == '-')
     {
          if (a - b == d)
          {
               cout << "Yes\n";
          }
          else
          {
               cout << a - b << endl;
          }
     }
     else if (c == '*')
     {
          if (a * b == d)
          {
               cout << "Yes\n";
          }
          else
          {
               cout << a * b << endl;
          }
     }
     return 0;
}