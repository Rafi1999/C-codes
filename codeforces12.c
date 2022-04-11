#include<stdio.h>
#include<string.h>
int main()
{
    char S[100010];
    int i,n,j,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",S);
        for(j=0;S[j]!='\0';j++)
        {
            if(S[j]=='0' && S[j+1]=='1' && S[j+2]=='0')
                flag=1;
            else if(S[j]=='1' && S[j+1]=='0' && S[j+2]=='1')
                flag=1;
        }
        if(flag==1)
                printf("Good\n");
            else
                printf("Bad\n");
            flag=0;
        }
        return 0;
}
