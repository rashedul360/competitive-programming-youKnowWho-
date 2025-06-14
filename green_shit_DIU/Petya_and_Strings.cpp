// https://codeforces.com/problemset/problem/112/A
#include <iostream>
#include <string>
using namespace std;
int main()
{
     string a, b;
     cin >> a >> b;

     for (int i = 0; i < a.length(); i++)
     {
          if ((int)a[i] >= 97 && (int)a[i] <= 122)
          {
               int capital_case_asci = (int)a[i] - 32;
               a[i] = (char)capital_case_asci;
          };
          if ((int)b[i] >= 97 && (int)b[i] <= 122)
          {
               int capital_case_asci = (int)b[i] - 32;
               b[i] = (char)capital_case_asci;
          };
     }

     if (a < b)
     {
          cout << -1 << endl;
     }
     else if (b < a)
     {
          cout << 1 << endl;
     }
     else if (a == b)
     {
          cout << 0 << endl;
     }

     return 0;
}
