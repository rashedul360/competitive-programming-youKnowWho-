#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;
     int m;
     if (n == 999)
     {
          m = n / 100;
     }
     else
     {
          m = n / 1000;
     }
     if (m % 2 == 0)
     {
          cout << "EVEN\n";
     }
     else
     {
          cout << "ODD\n";
     }
     return 0;
}