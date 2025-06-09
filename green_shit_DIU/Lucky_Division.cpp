#include <iostream>
using namespace std;
bool lucky_number(int num)
{
     while (num != 0)
     {
          int last_digit = num % 10;
          if (last_digit != 4 && last_digit != 7)
          {
               return false;
          }
          num /= 10;
     }
     return true;
}
bool is_dividable_lucky(int num)
{
     for (int i = 1; i <= num; i++)
     {
          bool lucky_number_found = lucky_number(i);
          if (lucky_number_found)
          {
               if (num % i == 0)
               {
                    return true;
               }
          }
     }
     return false;
}
int main()
{

     int n;
     cin >> n;
     int is_lucky_numer = lucky_number(n);

     if (!is_lucky_numer)
     {
          is_lucky_numer = is_dividable_lucky(n);
     }
     if (is_lucky_numer)
     {
          cout << "YES\n";
     }
     else
          cout << "NO\n";
}