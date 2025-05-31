#include <iostream>
#include <string>
using namespace std;
int main()
{
     char str[100];
     cin >> str;
     char str2[100];
     int len_str = strlen(str);
     int j = 0;
     for (int i = len_str - 1; i >= 0; i--)
     {

          str2[i] = str[j];
          j++;
     };
     int is_palindrome = false;
     for (int i = 0; i < len_str; i++)
     {
          if (str[i] == str2[i])
          {
               is_palindrome = true;
          }
          else
          {
               is_palindrome = false;
          }
     }
     cout << str2 << endl;
     if (is_palindrome)
     {
          cout << "YES\n";
     }
     else
     {
          cout << "NO\n";
     }
}