#include <iostream>
using namespace std;
int main()
{
     int a, b;
     cin >> a >> b;
     int c;
     if (a > b)
     {
          c = a / b;
     }
     else
     {
          c = b / a;
     }
     if (c * b == a || c * a == b)
     {
          cout << "Multiples\n";
     }
     else
     {
          cout << "No Multiples\n";
     }
     return 0;
}