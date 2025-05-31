#include <iostream>
using namespace std;
int main()
{
     char x;
     cin >> x;
     if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
     {
          cout << "ALPHA\n";
          if (x >= 'A' && x <= 'Z')
          {
               cout << "IS CAPITAL\n";
          }
          else
          {
               cout << "IS SMALL\n";
          }
     }
     if (x >= '0' && x <= '9')
     {
          cout << "IS DIGIT\n";
     }
     return 0;
}