#include<stdio.h>
#include<string.h>
int main()
{
    char S[1000001];
    int i,sum=0,max=0;
    gets(S);
    for(i=0;S[i]!='\0';i++)
    {
        if(S[i]=='I')
        {
            sum++;
            if(sum>max)
                max=sum;
        }
        else if(S[i]=='D')
        {
            sum--;
            if(sum>max)
                max=sum;
        }
    }
    printf("%dIIII\n",max);
}
