#include <iostream>
using namespace std;
int main()
{
     char c;
     cin >> c;
     int count = 0;
     for (int i = 65; i <= 90; i++)
     {
          count++;
          int value = c;
          if (i == c)
          {
               break;
          }
     }
     cout << count << endl;
     return 0;
}