#include <iostream>
using namespace std;
int main()
{
     char x;
     cin >> x;
     if (x >= 'A' && x <= 'Z')
     {
          int a = (int)x;
          int b = a + 32;
          cout << (char)b << endl;
     }
     if ((x >= 'a' && x <= 'z'))
     {
          int a = (int)x;
          int b = a - 32;
          cout << (char)b << endl;
     }
     return 0;
}