#include <iostream>
#include <cmath>
using namespace std;
int main()
{
     int a, b, c, d;
     cin >> a >> b >> c >> d;
     a %= 100;
     b %= 100;
     c %= 100;
     d %= 100;
     int result = a * b * c * d;
     int last_2_digit = result % 100;
     if (last_2_digit <= 9)
     {
          cout << 0 << last_2_digit << endl;
     }
     else
     {
          cout << last_2_digit << endl;
     }

     return 0;
}