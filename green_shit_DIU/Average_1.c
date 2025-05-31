#include <stdio.h>
#include <math.h>
int main()
{
     double a, b;
     scanf("%lf %lf", &a, &b);
     float avg = (a * 3.5 + b * 7.5) / (3.5 + 7.5);
     printf("MEDIA = %.5f\n", avg);
     return 0;
}