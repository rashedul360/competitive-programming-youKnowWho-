#include <stdio.h>
#include <math.h>
int main()
{
     float n, m;
     double l, k;
     scanf("%f", &n);
     scanf("%f", &m);
     scanf("%lf %lf", &l, &k);
     printf("A = %.6f, B = %.6f\n", (n), (m));
     printf("C = %.6lf, D = %.6lf\n", (l), (k));
     printf("A = %.1f, B = %.1f\n", n, m);
     printf("C = %.1lf, D = %.1lf\n", l, k);
     printf("A = %.2f, B = %.2f\n", n, m);
     printf("C = %.2lf, D = %.2lf\n", l, k);
     printf("A = %.3f, B = %.3f\n", n, m);
     printf("C = %.3lf, D = %.3lf\n", l, k);
     printf("A = %.3e, B = %.3e\n", n, m);
     printf("C = %.3e, D = %.3e\n", l, k);
     printf("A = %d, B = %d\n", (int)(ceil)(n), (int)(m));
     printf("C = %d, D = %d\n", (int)(l), (int)(k));
     return 0;
}