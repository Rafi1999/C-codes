#include<stdio.h>
#include<string.h>
int main()
{
   int i,n,freq[1000]={0};
   char s[10000];
   scanf("%d",&n);
   for(i=0;i<=n;i++)
      scanf("%c",&s[i]);
      s[i]='\0';
   for(i=0;i<27;i++)
   freq[s[i]-'a']++;
   for(i=0;i<27;i++)
   {
       if(freq[i]>0)
        printf("%c",i+'a');
   }
   printf("\n");
   return 0;
}
