#include<stdio.h>
#include<string.h>
int main()
{
    char S[100000];
    int i,count=0,flag=0;
    scanf("%s",S);
    for(i=0;S[i];i++)
        count++;
    for(i=0;i<count;i++)
    {
        if(S[i]!=S[count-i-1])
            flag=1;
    }
    if(flag==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;

}

