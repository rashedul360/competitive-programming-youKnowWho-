#include <iostream>
#include <math.h>
using namespace std;
int main()
{
     int n, m, a;
     cin >> n >> m >> a;

     long long c = ceil((double)n / a);
     long long d = ceil((double)m / a);
     long long result = c * d;
     cout << result << endl;
     return 0;
}