#include <iostream>
using namespace std;
int main()
{
     int a, b, c;
     cin >> a >> b >> c;
     int max, min;
     if (a >= b && a >= c)
          max = a;
     if (a <= b && a <= c)
          min = a;
     if (b >= a && b >= c)
          max = b;
     if (b <= a && b <= c)
          min = b;
     if (c >= a && c >= b)
          max = c;
     if (c <= a && c <= b)
          min = c;
     cout << min << " " << max << endl;
     return 0;
}