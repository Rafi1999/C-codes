#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000100],temp;
    int i,n,len=0,c;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
        scanf("%c",&s[i]);
        c = strlen(s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='V')
            len=len+5;
        else if(s[i]=='W')
            len=len+2;
        else if(s[i]=='X')
            s[i+1]=0;
        else if(s[i]=='Y')
        {
            s[c]=s[i+1];
            s[i+1]=0;
        }
        else if(s[i]=='Z')
        {
            if(s[i+1]=='V')
            {
                len = len/5;
                if(s[i+1]=='V' || s[i+1]=='W')
                    s[i+1]=0;
            }
            else if(s[i+1]=='W')
            {
                len = len/2;
                if(s[i+1]=='V' || s[i+1]=='W')
                    s[i+1]=0;
            }
        }
        else if(s[len]=='X' || s[len]=='Y' || s[len]=='Z')
            s[len]=0;
    }
    printf("%d",len);
}
