#include <iostream>
#include <cmath>
using namespace std;
int main()
{

     double a, b, c, d;
     cin >> a >> b >> c >> d;
     double a_pow_b = b * log(a);
     double c_pow_d = d * log(c);
     if (a_pow_b > c_pow_d)
          cout << "YES\n";
     else
          cout << "NO\n";
}