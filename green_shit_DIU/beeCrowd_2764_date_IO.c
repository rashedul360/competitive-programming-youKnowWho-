#include <stdio.h>
#include <string.h>
int main()
{
     char c[10];
     scanf("%s", c);
     char day[3] = {c[0], c[1], '\0'};
     char month[3] = {c[3], c[4], '\0'};
     char year[3] = {c[6], c[7], '\0'};
     printf("%s/%s/%s\n", month, day, year);
     printf("%s/%s/%s\n", year, month, day);
     printf("%s-%s-%s\n", day, month, year);
     return 0;
}