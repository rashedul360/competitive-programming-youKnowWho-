#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;
     bool found_even = false;
     for (int i = 1; i <= n; i++)
     {
          if (i % 2 == 0)
          {
               cout << i << endl;
               found_even = true;
          }
     }
     if (!found_even)
          cout << -1 << endl;
     return 0;
}