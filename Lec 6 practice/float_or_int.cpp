#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
     double num;
     cin >> num;
     int num_org = num;
     double fraction = num - double(num_org);
     if (fraction == 0)
     {
          cout << "int " << num_org << endl;
     }
     else
     {
          cout << "float " << num_org << " " << fraction << endl;
     }
     return 0;
}