#include <iostream>

using namespace std;
int main()
{
     int n, m, a, b;
     cin >> n >> m >> a >> b;
     int regular_amount = n * a;
     int special_amount = (m * b) + a;

     int min_amount = min(regular_amount, special_amount);
     cout << regular_amount << " " << special_amount << endl;
     return 0;
}