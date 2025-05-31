#include <stdio.h>
#include <math.h>
int main()
{
     double a, b, c;
     scanf("%lf %lf %lf", &a, &b, &c);
     double d = b * b - 4 * a * c;
     double d1 = ((-b) + sqrt(d)) / 2 * a;
     double d2 = ((-b) - sqrt(d)) / 2 * a;
     printf("R1 = %lf\n", (d1 / 100));
     printf("R2 = %lf\n", (d2 / 100));
     return 0;
}