#include <iostream>

using namespace std;

int main()
{
     int n, m;

     while (cin >> n >> m)
     {

          int min_num = min(n, m);
          int max_num = max(n, m);
          if (n <= 0 || m <= 0)
          {
               break;
          }
          int sum = 0;
          for (int i = min_num; i <= max_num; i++)
          {
               cout << i << " ";
               sum += i;
          }
          cout << "Sum=" << sum << endl;
     }

     return 0;
}