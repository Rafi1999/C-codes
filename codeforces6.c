#include<stdio.h>
#include<string.h>
int main()
{
    char S[1000090];
    int i,sum=0,count;
    gets(S);
    for(i=0;S[i] != '\0';i++)
    {
        count = S[i]-'0';
        sum = sum+count;
    }
    printf("%d\n",sum);
    return 0;
}
