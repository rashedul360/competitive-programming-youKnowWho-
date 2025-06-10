#include <stdio.h>
int main()
{
     float basic_salary;
     float festival_allowance = 1, house_rant = 1;
     scanf("%f", &basic_salary);
     if (basic_salary <= 10000)
     {
          float festival_percent = 0.20;
          float house_rant_percent = 0.80;
          festival_allowance = basic_salary * festival_percent;
          house_rant = basic_salary * house_rant_percent;
     }
     else if (basic_salary >= 10001 && basic_salary <= 20000)
     {
          float festival_percent = 0.25;
          float house_rant_percent = 0.9;
          festival_allowance = basic_salary * festival_percent;
          house_rant = basic_salary * house_rant_percent;
     }
     else
     {
          float festival_percent = 0.30;
          float house_rant_percent = 0.95;
          festival_allowance = basic_salary * festival_percent;
          house_rant = basic_salary * house_rant_percent;
     }
     float gross_salary = basic_salary + festival_allowance + house_rant;

     printf("gross salary is = %.3f\n", gross_salary);
     return 0;
}