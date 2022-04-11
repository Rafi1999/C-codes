#include<stdio.h>
#include<string.h>
int main()
{
    char S[1001],T[1001];
    int i,j,n,len1,len2,m;
    scanf("%d\n",&n);
        for(i=0;i<n;i++)
    {
     scanf("%s %s",S,T);
     len1 = strlen(S);
     len2 = strlen(T);
     if(len1>len2)
        m = len2;
     else
        m = len1;
    for(j=0;j<m;j++)
    {
        printf("%c%c",S[j],T[j]);
    }
    if(len1<len2)
    {
        for(j=m;j<len2;j++)
    printf("%c",T[j]);
    }
    else if(len1>len2)
    {
        for(j=1;j<len1;j++)
    printf("%c",S[j]);
    }
    printf("\n");
    }
    return 0;

}

