#include <iostream>
using namespace std;
int main()
{
     int arr[8];
     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] >> arr[6] >> arr[7];
     int arr2[7];
     for (int i = 0; i <= 7; i++)
     {
          int middle = 8 / 2;
          if (arr[i] == middle)
          {
               continue;
          }
          arr2[i] = arr[i];
     }
     for (int i = 0; i <= 7; i++)
     {
          int middle = 7 / 2;
          if (arr[i] == middle)
          {
               continue;
          }
          if (i == middle)
          {
               arr2[i] = arr[i - 1];
          }
          else
          {
               arr2[i] = arr[i];
          }
     }
     for (int i = 0; i < 7; i++)
     {
          cout << arr2[i] << " ";
     }

     return 0;
}