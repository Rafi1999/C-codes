#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int len,pos,freq[94],i;
    gets(s);
    len=strlen(s);
    for(i=0;i<94;i++)
        freq[i]=0;
    for(i=0;i<len;i++)
    {
        pos = s[i]-' ';
        freq[pos]++;
    }
    for(i=0;i<94;i++)
        if(freq[i]>0)
        printf("%c: %d\n",' '+i,freq[i]);
}
