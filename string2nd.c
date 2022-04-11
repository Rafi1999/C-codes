#include<stdio.h>
#include<string.h>
int main()
{
    char A[100][30],B[100][30],S[100];
    int i,n,q,j,flag;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",A[i]);
        scanf("%s",B[i]);
    }
    scanf("%d",&q);
    while(q--)
    {
        scanf("%s",S);
        flag = - 1;
        for(i=0;i<n;i++)
        {
            if(strcmp(A[i],S))
            {
                flag=i;
                break;
            }
        }
            if(flag != -1)
            puts(B[flag]);
            else
                puts("Not found");
    }
    return 0;
}
