#include<stdio.h>
#include<string.h>
int main()
{
    char S[1001],T[1001],M[1001];
    int i,j,k,n;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
     scanf("%s %s",S,T);
    for(j=0;S[j]!='\0';j++)
    {
        printf("%c%c",S[j],T[j]);
        break;
    }
    for(j=1;S[j]!='\0';j++)
    printf("%c",S[j]);
    for(j=1;T[j]!='\0';j++)
    printf("%c",T[j]);
    printf("\n");
    }

    return 0;
}
