#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
     double PI = 3.141592653;
     double a;
     cin >> a;
     cout << fixed << setprecision(9) << PI * a * a << endl;
     return 0;
}