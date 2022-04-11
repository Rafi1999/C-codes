#include<stdio.h>
int main()
{
    int n,i,j,k,a[100000],max=-1e9,x,y,m,flag=0,con=0;
    scanf("%d",&x);
    for(y=0; y<x; y++)
    {
        scanf("%d",&n);
        //con=n;
        for(i=0; i<n; i++)
            scanf("%d",&a[i]);
        for(m=1; m<=n; m++)
        {
            for(i=0; i<n-m+1; i++)
            {
                for(j=0,k=i; j<m; k++,j++)
                {
                    if(j!=0)
                    {
                        if(a[k]<a[k-1])
                        {
                            flag=1;
                            break;
                        }

                    }

                }
                if(flag==0)
                    con++;
                flag=0;
            }

        }
        printf("%d\n",con);
        con=0;
    }
}
