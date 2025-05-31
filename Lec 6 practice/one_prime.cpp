#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;
     int m = n - 1;
     int is_prime = true;
     for (int i = 2; i <= m; i++)
     {
          if (n % i == 0)
               is_prime = false;
     }
     if (is_prime)
     {
          cout << "YES\n";
     }
     else
     {
          cout << "NO\n";
     }

     return 0;
}