#include <iostream>
using namespace std;
int main()
{
     int n;

     while (cin >> n)
     {
          if (n == 0)
          {
               cout << " \n";
               break;
          }

          for (int i = 1; i <= n; i++)
          {
               cout << i;
               if (i != n)
               {
                    cout << " ";
               }
          }
          cout << endl;
     }

     return 0;
}