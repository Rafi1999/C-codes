#include<stdio.h>
int main()
{
    int a[100000],i,j,k,n,m,max,x;
    scanf("%d",&x);
    for(m=0; m<x; m++)
    {
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(k=1; k<=n; k++)
        {
            for(i=0; i<n-k+1; i++)
            {
                max=a[i];
                for(j=0; j<k; j++)
                {
                    if(max<a[i+j])
                    {
                        max=a[i+j];
                    }



                }
                printf("%d ",max);

            }

        }
        printf("\n");
    }
}
