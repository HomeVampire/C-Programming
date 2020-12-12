/*reverse a word */
#include<stdio.h>
#include<string.h>
 
int main() 
{
   char msg[100];
   char str[100];
   int i = 0, j = 0;
   gets(msg);
   while (msg[i] != '\0') 
   {
      if (msg[i] != ' ') 
	  {
         str[j] = msg[i];
         j++;
      } 
	  else 
	  {
         str[j] = '\0';
         printf("%s", strrev(str));
         printf(" ");
         j = 0;
      }
      i++;
   }
 
   str[j] = '\0';
   printf("%s", strrev(str));
 
   return 0;
}
