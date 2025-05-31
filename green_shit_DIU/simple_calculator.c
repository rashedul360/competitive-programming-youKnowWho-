#include <stdio.h>
int main()
{
     int a, b;
     float c;
     float sum = 0;
     scanf("%d %d %f", &a, &b, &c);
     sum += ((float)b * c);
     scanf("%d %d %f", &a, &b, &c);
     sum += ((float)b * c);
     printf("VALOR A PAGAR: R$ %.2f\n", sum);
     return 0;
}