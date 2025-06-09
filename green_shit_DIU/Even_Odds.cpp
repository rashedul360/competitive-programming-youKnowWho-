#include <iostream>
using namespace std;
int main()
{
     long long int n, m;
     cin >> n >> m;
     long long int odd_count = (n + 1) / 2;
     if (m <= odd_count)
          cout << 2 * m - 1 << endl;
     if (m > odd_count)
          cout << 2 * (m - odd_count) << endl;
     return 0;
}