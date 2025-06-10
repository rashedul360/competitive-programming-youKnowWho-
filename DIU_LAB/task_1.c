#include <stdio.h>
int main()
{
     int a, b;
     float c, d;
     scanf("%d %d %f %f", &a, &b, &c, &d);
     printf("%d %d\n", (a + b), (a - b));
     printf("%f %f\n", (c + d), (c - d));

     return 0;
}
