#include <iostream>
#include <cstring>
#include <string>
#include <math.h>
using namespace std;
int main()
{

     char c[100];
     cin >> c;
     int index = 0;
     char sign = ' ';
     for (int i = 0; i < strlen(c); i++)
     {
          if (c[i] == '+')
          {
               sign = '+';
               index = i;
          }
          else if (c[i] == '-')
          {
               sign = '-';
               index = i;
          }
          else if (c[i] == '*')
          {
               sign = '*';
               index = i;
          }
          else if (c[i] == '/')
          {
               sign = '/';
               index = i;
          }
     }
     char char_a[100], char_b[100];
     for (int i = 0; i <= index - 1; i++)
     {
          char_a[i] = c[i];
     }
     int s = 0;
     for (int i = index + 1; i <= strlen(c) - 1; i++)
     {
          char_b[s] = c[i];
          s++;
     }

     if (sign == '+')
     {
          cout << stod(char_a) + stod(char_b) << endl;
     }
     if (sign == '-')
     {
          cout << stod(char_a) - stod(char_b) << endl;
     }
     if (sign == '*')
     {
          cout << (long long int)(stod(char_a) * stod(char_b)) << endl;
     }
     if (sign == '/')
     {

          int sum = (stod(char_a) / stod(char_b));
          cout << sum << endl;
     }
     return 0;
}