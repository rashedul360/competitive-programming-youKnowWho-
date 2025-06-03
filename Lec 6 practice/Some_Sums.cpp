#include <iostream>
using namespace std;
int summation(int n)
{
     int sum = 0;
     while (n != 0)
     {
          int last_digit = n % 10;
          n = n / 10;
          sum += last_digit;
     }
     return sum;
}
int main()
{
     long long int n, a, b;
     cin >> n >> a >> b;
     int result = 0;
     for (int i = 1; i <= n; i++)
     {
          int sum = summation(i);
          if (sum >= a && sum <= b)
          {
               result += i;
          }
     }
     cout << result << endl;
}