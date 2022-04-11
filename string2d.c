#include<stdio.h>
#include<string.h>
int main()
{
    char A[100][30],B[100][30],S[100];
    int i,n,q,flag;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s%s",A[i],B[i]);
    }
    scanf("%d\n",&q);
    while(q--)
    {
        scanf("%s",S);
        flag = -1;
        for(i=0;i<n;i++)
        {
            if(strcmp(A[i],S)==0)
            {
                flag=i;
                break;
            }
        }
        if(flag != -1)
            puts(B[flag]);
        else
            printf("Not found");
    }
    return 0;
}
