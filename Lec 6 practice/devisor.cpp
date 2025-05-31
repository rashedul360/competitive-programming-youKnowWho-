#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;

     int prev = 0;
     for (int i = 1; i <= n; i++)
     {

          if (prev >= n)
               break;
          cout << i << endl;
          prev += i;
     }
     cout << prev << endl;

     return 0;
}