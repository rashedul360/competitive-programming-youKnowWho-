#include <iostream>
using namespace std;
int main()
{
     int days;
     cin >> days;
     int year = days / 365;
     int remaining_days = days % 365;
     int month = remaining_days / 30;
     int day = remaining_days % 30;
     cout << year << " years\n";
     cout << month << " months\n";
     cout << day << " days\n";
     return 0;
}