#include <iostream>
#include <numeric>
using namespace std;
int main()
{
     int a = 15, b = 20;
     cin >> a >> b;
     int gcd_ = std::gcd(a, b);
     cout << gcd_ << endl;

     return 0;
}