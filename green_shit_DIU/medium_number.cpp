// https://codeforces.com/problemset/problem/1760/A
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
     int t;
     cin >> t;
     for (int i = 1; i <= t; i++)
     {

          int a, b, c;
          cin >> a >> b >> c;
          int min_num = min(a, min(b, c));
          int max_num = max(a, max(b, c));
          int total = a + b + c;
          int middle = total - min_num - max_num;
          cout << middle << endl;
     }
     return 0;
}