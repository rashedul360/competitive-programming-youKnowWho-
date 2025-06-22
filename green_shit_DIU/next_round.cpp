// https://codeforces.com/problemset/problem/158/A
#include <iostream>
using namespace std;
int main()
{
     int n, k;
     cin >> n >> k;
     int arr[n];
     int count = 0;
     for (int i = 0; i < n; i++)
     {
          cin >> arr[i];
     }
     int k_pos_value = arr[k - 1];
     for (int i = 0; i < n; i++)
     {
          if (arr[i] >= k_pos_value && arr[i] > 0)
          {
               count++;
          }
     }
     cout << count << endl;
     return 0;
}