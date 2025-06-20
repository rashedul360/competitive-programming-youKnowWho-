// https://codeforces.com/problemset/problem/110/A
#include <iostream>
using namespace std;
int main()
{

     long long int n;
     cin >> n;
     int count = 0;
     while (n != 0)
     {
          int last_digit = n % 10;
          if (last_digit == 4 || last_digit == 7)
          {
               count++;
          }

          n /= 10;
     };
     bool is_lucky = false;
     while (count != 0)
     {
          int last_digit = count % 10;
          if (last_digit == 4 || last_digit == 7)
          {
               is_lucky = true;
          }
          else
          {
               is_lucky = false;
               break;
               ;
          }

          count /= 10;
     }
     if (is_lucky)
     {
          cout << "YES\n";
     }
     else
          cout << "NO\n";

     return 0;
}