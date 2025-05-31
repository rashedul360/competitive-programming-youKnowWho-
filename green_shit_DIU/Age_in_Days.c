#include <stdio.h>
int main()
{
     int days;
     scanf("%d", &days);
     int year = days / 365;
     int remaining_days = days % 365;
     int month = remaining_days / 30;
     int day = remaining_days % 30;
     printf("%d ano(s)\n", year);
     printf("%d mes(es)\n", month);
     printf("%d dia(s)\n", day);
     return 0;
}