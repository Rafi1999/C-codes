#include<stdio.h>
#include<string.h>
int main()
{
    char S[100010];
    int i,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&S);
        for(j=0;S[j]!='\0';j++)
        {
            if(S[j]==0 && S[j+1]==0)
               {
                   printf("Bad\n");
                   break;
               }
            else if(S[j]==1 && S[j+1]==1)
            {
                printf("Bad\n");
                   break;
            }
            else
                {
                    printf("Good\n");
                    break;
                }
                break;
        }
    }
}
