#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,len,freq[26],pos;
    gets(s);
    len = strlen(s);
    for(i=0;i<26;i++)
        freq[i]=0;
    for(i=0;i<len;i++)
    {
        pos=s[i]-'a';
        freq[pos]++;
    }
    for(i=0;i<26;i++)
      if(freq[i]>0)
        printf("%c: %d\n",'a'+i,freq[i]);
}
