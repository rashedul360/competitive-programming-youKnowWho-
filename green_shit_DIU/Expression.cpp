#include <iostream>
using namespace std;
int main()
{
     int a, b, c;
     cin >> a >> b >> c;
     int arr[6];
     arr[0] = a + b + c;
     arr[1] = a * b * c;
     arr[2] = a * (b * c);
     arr[3] = (a + b) * c;
     arr[4] = a * (b + c);
     arr[5] = (a * b) + c;
     long long int max = arr[0];
     for (int i = 0; i < 6; i++)
     {
          if (max < arr[i])
          {
               max = arr[i];
          }
     }
     cout << max << endl;
     return 0;
}