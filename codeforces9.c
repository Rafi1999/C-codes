#include<stdio.h>
#include<string.h>
int main()
{
    char S[1000010];
    int i,len;
    gets(S);
    for(i=0;S[i]!= '\0';i++)
    {
        if(S[i]==',')
            S[i] = ' ';
    }
    puts(S);
}
