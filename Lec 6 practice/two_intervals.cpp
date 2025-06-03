#include <iostream>
#include <math.h>
using namespace std;
int main()
{
     long long int l1, r1, l2, r2;
     cin >> l1 >> r1 >> l2 >> r2;
     int left_end_point = max(l1, l2);
     int right_end_point = min(r1, r2);
     if (left_end_point <= right_end_point)
     {
          cout << left_end_point << " " << right_end_point << endl;
     }
     else
     {
          cout << -1 << endl;
     }
     return 0;
}