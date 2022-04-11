#include<stdio.h>
#include<string.h>
int main()
{
    char S[1000090];
    int i,sum1=0,sum2=0,diff;
    gets(S);
    for(i=0;S[i]!='\0';i++)
    {
        if(S[i] == '0')
        sum1++;
        else if(S[i] == '1')
        sum2++;
    }
    if(sum1>sum2)
        diff = sum1-sum2;
    else
        diff = sum2-sum1;
    printf("%d",diff);
    return 0;
}
