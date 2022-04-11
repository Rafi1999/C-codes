#include<stdio.h>
int main()
{
    int A[10000],B[10000];
    int n,i,j,flag;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    for(i=0;i<n;i++)
        B[i]=A[i];
    for(i=0;i<n;i++)
        printf("%d",B[i]);

    for(j=n,i=0;j>=0;j--,i++)
    {
        flag=0;
        if(B[i] == A[j])
        {
        flag=1;
        break;
        }
    }
    if (flag==1)
        printf("Yes");
    else
        printf("No");
}
