#include <stdio.h>
#include <string.h>
int main()
{

     char word[100];
     scanf("%s", word);
     int count = 0, count2 = 0;
     int length = strlen(word);
     for (int i = 0; i < length; i++)
     {
          if (word[i] >= 'a' && word[i] <= 'z')
               count++;
          if (word[i] >= 'A' && word[i] <= 'Z')
               count2++;
     }

     if (count2 > count)
     {
          for (int i = 0; i < length; i++)
          {
               if (word[i] >= 'a' && word[i] <= 'z')
               {
                    int asci_value = (int)word[i] - 32;
                    word[i] = (char)asci_value;
               }
          }
     }
     else
     {
          for (int i = 0; i < length; i++)
          {

               if (word[i] >= 'A' && word[i] <= 'Z')
               {
                    int asci_value = (int)word[i] + 32;
                    word[i] = (char)asci_value;
               }
          }
     }

     puts(word);
     return 0;
}
