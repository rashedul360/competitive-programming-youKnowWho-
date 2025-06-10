// https://codeforces.com/problemset/problem/1669/A
#include <iostream>
using namespace std;
int main()
{
     int test;
     cin >> test;
     for (int i = 1; i <= test; i++)
     {
          int rating;
          cin >> rating;

          if (rating >= 1900)
          {
               cout << "Division 1\n";
          }
          if (rating >= 1600 && rating <= 1899)
          {
               cout << "Division 2\n";
          }
          if (rating >= 1400 && rating <= 1599)
          {
               cout << "Division 3\n";
          }
          if (rating <= 1399)
          {
               cout << "Division 4\n";
          }
     }

     return 0;
}