#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;
     for (int a = 1; a <= n; a++)
     {
          int space = n - a;
          int star = n - space;
          for (int i = 1; i <= space; i++)
          {
               cout << " ";
          }
          for (int i = 1; i <= star; i++)
          {
               cout << "*";
          }
          for (int i = 2; i <= star; i++)
          {
               cout << "*";
          }

          cout << endl;
     }
     return 0;
}