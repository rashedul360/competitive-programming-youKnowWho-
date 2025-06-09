#include <iostream>
#include <math.h>
using namespace std;
int main()
{
     int a, b, c;
     cin >> a >> b >> c;
     int min_num = min(a, min(b, c));
     int max_num = max(a, max(b, c));
     int middle = a + b + c - min_num - max_num;
     cout << min_num << endl;
     cout << middle << endl;
     cout << max_num << endl;
     cout << endl;
     cout << a << endl;
     cout << b << endl;
     cout << c << endl;
     return 0;
}