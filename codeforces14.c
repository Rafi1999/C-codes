#include<stdio.h>
#include<string.h>
int main()
{
    char S[1000],p,R[1000];
    int i;
    gets(S);
    for(i=0;S[i]!='\0';i++)
    {
        if(S[i]>=65 && S[i]<=90)
            S[i]=S[i]+32;
        else if(S[i]>=97 && S[i]<=122)
            S[i]=S[i]-32;
    }
    printf("%s",S);
}
