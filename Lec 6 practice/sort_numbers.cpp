#include <iostream>
#include <math.h>
using namespace std;

int main()
{
     int a, b, c;
     cin >> a >> b >> c;
     int min_result = min(a, min(b, c));
     int max_result = max(a, max(b, c));
     int middle = a + b + c - (min_result + max_result);
     cout << min_result << endl;
     cout << middle << endl;
     cout << max_result << endl;
     cout << endl;
     cout << a << endl;
     cout << b << endl;
     cout << c << endl;

     return 0;
}