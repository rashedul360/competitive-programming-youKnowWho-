#include <iostream>
using namespace std;
int main()
{
     long long int n;
     cin >> n;
     long long int sum = 0;
     if (n % 2 == 0)
     {
          cout << n / 2 << endl;
     }
     else
     {
          cout << -(n + 1) / 2 << endl;
     }
     return 0;
}