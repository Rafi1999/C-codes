#include<stdio.h>
int main()
{
    int a[1000],n,m,i,s,high,low,mid,flag=0;
    cin>>n>>m;
       for(i=1; i<=n; i++)
           scanf("%d",&a[i]);
    high = n-1;
    low = 0;
    while(m--)
    {
        scanf("%d",&s);
        while(low<=high)
        {
            mid = low + (high - low)/2;
            if(a[mid]==s)
            {
                flag=mid-1;
                break;
            }
            if(a[mid]>s)
                low = mid+1;
            else
                high = mid-1;
        }
        if(flag!=0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;

}
