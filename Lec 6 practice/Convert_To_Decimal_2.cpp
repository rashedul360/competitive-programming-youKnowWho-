#include <iostream>
#include <math.h>
using namespace std;
int binary_maker(int n)
{
     int m = n;
     int binary = 0;
     while (m != 0)
     {
          int result = m / 2;
          int reminder = m % 2;
          binary = binary * 10 + reminder;
          m /= 2;
     }
     return binary;
}
int main()
{
     int test;
     cin >> test;
     for (int i = 1; i <= test; i++)
     {

          int n;
          cin >> n;
          int binary = binary_maker(n);
          int binary_length = 0;
          int original_binary = binary;
          int copy_binary = binary;
          while (copy_binary != 0)
          {
               copy_binary /= 10;
               binary_length++;
          }

          int reversed = 0;
          int devisor = 1;
          for (int j = 1; j <= binary_length; j++)
          {
               int last_digit = binary % 10;
               reversed = reversed * 10 + last_digit;
               binary /= 10;
               devisor *= 10;
          }
          int sum = 0;
          for (int j = binary_length; j >= 0; --j)
          {
               int power = j - 1;
               int last_digit = original_binary % 10;
               sum += (last_digit * pow(2, power));
               original_binary /= 10;
          }
          cout << sum << endl;
     };

     return 0;
}