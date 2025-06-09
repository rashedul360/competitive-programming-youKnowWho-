#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
     int n;
     cin >> n;
     int arr[n];
     for (int i = 1; i <= n; i++)
     {
          cin >> arr[i - 1];
     }
     double sum = 0;
     for (int i = 0; i < n; i++)
     {
          sum += arr[i];
     }

     cout << fixed << setprecision(12) << sum / n << endl;

     return 0;
}
