#include <iostream>
using namespace std;
int main()
{
     int n = 5;
     cin >> n;
     for (int i = 1, j = n; i <= n; i++, j--)
     {
          cout << i << " " << j << endl;
     }
     return 0;
}