#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;
     int m = n;
     int length = 0;
     while (m != 0)
     {
          m /= 10;
          length++;
     }
     int k = 0;
     int p = n;

     for (int i = 0; i < length; i++)
     {
          // 1234 -> 4321;
          int last_digit = p % 10;
          k = k * 10 + last_digit;
          p = p / 10;
     }

     if (k == n)
     {
          cout << k << endl;
          cout << "YES\n";
     }
     else
     {
          cout << k << endl;
          cout << "NO\n";
     }
     return 0;
}