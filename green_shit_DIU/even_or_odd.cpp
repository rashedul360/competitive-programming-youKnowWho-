#include <iostream>
using namespace std;

int main()
{
     int n;
     cin >> n;
     for (int i = 1; i <= n; i++)
     {
          int m;
          cin >> m;
          if ((m < 0) && (-m % 2 == 0))
               cout << "EVEN NEGATIVE\n";
          if ((m < 0) && (-m % 2 == 1))
               cout << "ODD NEGATIVE\n";
          if ((m > 0) && (m % 2 == 1))
               cout << "ODD POSITIVE\n";
          if ((m > 0) && (m % 2 == 0))
               cout << "EVEN POSITIVE\n";
          if (m == 0)
               cout << "NULL\n";
     }
     return 0;
}