#include <iostream>
using namespace std;
int main()
{
     int n;
     cin >> n;
     int arr[n];
     for (int i = 0; i < n; i++)
     {
          cin >> arr[i];
     }
     int even_count = 0;
     int odd_count = 0;
     int positive_count = 0;
     int neg_count = 0;
     for (int i = 0; i < n; i++)
     {

          if (arr[i] % 2 == 0)
               even_count++;
          if ((arr[i] % 2) == 1)
               odd_count++;
          if (arr[i] > 0)
               positive_count++;
          if (arr[i] < 0)
          {
               neg_count++;
               if ((-arr[i] % 2) == 1)
                    odd_count++;
          }
     }
     cout << "Even: " << even_count << endl;
     cout << "Odd: " << odd_count << endl;
     cout << "Positive: " << positive_count << endl;
     cout << "Negative: " << neg_count << endl;

     return 0;
}