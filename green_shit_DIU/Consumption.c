#include <stdio.h>
int main()
{
     int n;
     float m;
     scanf("%d %f", &n, &m);
     printf("%.3f km/l\n", ((float)n / m));
     return 0;
}