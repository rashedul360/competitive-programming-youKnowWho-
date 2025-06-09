#include <iostream>
using namespace std;

int main()
{
     int x, y;
     cin >> x >> y;
     int sum = 0;

     int minVal = min(x, y);
     int maxVal = max(x, y);

     for (int i = minVal + 1; i < maxVal; i++)
     {
          if (i % 2 != 0)
          {
               sum += i;
          }
     }

     cout << sum << endl;

     return 0;
}