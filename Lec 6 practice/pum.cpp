#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;
     int start = 0, end = 2;
     for (int i = 0; i < n; i++)
     {
          for (int j = 1; j <= 3; j++)
          {
               cout << start + j << " ";
          }
          cout << "PUM\n";
          start = end + 2;
          end = start + 2;
     }
     return 0;
}