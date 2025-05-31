#include <iostream>
using namespace std;
int main()
{

     string f1, s1, f2, s2;
     cin >> f1 >> s1 >> f2 >> s2;
     int flag = 0;
     if (s1 == s2)
          flag = 1;
     if (flag == 1)
     {
          cout << "ARE Brothers\n";
     }
     else
     {
          cout << "NOT\n";
     }

     return 0;
}