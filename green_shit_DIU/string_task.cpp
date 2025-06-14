// https://codeforces.com/problemset/problem/118/A
#include <iostream>
using namespace std;
bool is_vowel(char str)
{

     if (str == 'A' || str == 'E' || str == 'I' || str == 'O' || str == 'U' || str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u' || str == 'Y' || str == 'y')
     {
          return true;
     }
     else
          return false;
}
int main()
{
     string str;
     cin >> str;
     string result = "";
     for (int i = 0; i < str.length(); i++)
     {
          if (!is_vowel(str[i]))
          {
               result += ".";
               result += tolower(str[i]);
          }
     }
     cout << result << endl;
     return 0;
}