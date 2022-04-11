#include<stdio.h>
int main()
{
    int a,x,y,n,c=0;
    scanf("%d",&n);
    for(a=0;a<n;a++)
    {
        scanf("%d %d",&x,&y);
        if(x==y)
        {
            c=0;
            printf("%d\n",c);
        }
        else if(x<y)
        {
            for(x=x+1,c=0;x<y;x++)
            {
                if(x%2==1 || x%2==-1)
                    c+=x;
            }
            printf("%d\n",c);
        }
        else if(x>y)
        {
            for(y=y+1,c=0;y<x;y++)
            {
                if(y%2==1 || y%2==-1)
                    c+=y;
            }
            printf("%d\n",c);
        }
    }
    return 0;
}
