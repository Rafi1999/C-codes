#include<stdio.h>
#include<string.h>
int main()
{
    char s[101000];
    int i,j;
    gets(s);
    for(s[i]='=';s[i]!='&';i++)
    {
        if(s[i]=='=')
            printf("%s",s);
    }
}
