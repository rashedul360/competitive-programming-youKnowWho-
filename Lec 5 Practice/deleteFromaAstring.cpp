/* delete from a string
     take string s of lowercase character as a input. now delete first character and print it.
     string size: 1<=s<=10;
     example: hello
     output : ello
*/

#include <iostream>
using namespace std;
int main()
{
     char s[10] = "hello";
     char ss[10];
     for (int i = 1; i < 10; i++)
     {
          ss[i - 1] = s[i];
     }
     printf("%s", ss);

     return 0;
}