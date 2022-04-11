#include <stdio.h>
#include <string.h>
int main()
{
   char s[1000100],t[1000100];
   int i,j,len;
   gets(s);
   for(i=0,j=0;s[i]!='\0';i++)
   {
       if(s[i]!=' ')
       {
           t[j]=s[i];
           j++;
       }
       else
       {
           t[j]='\0';
           printf("%s",strrev(t));
           printf(" ");
           j=0;
       }
   }
   t[j]='\0';
   printf("%s",strrev(t));

   return 0;
}
