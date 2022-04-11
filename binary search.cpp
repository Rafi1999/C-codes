#include <iostream>
int main()
{
    int n,m,i,s,high,low,mid,flag=0;
    scanf("%d %d",&n,&m);
    int a[n+1];
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
                flag=1;
                break;
            }
            if(a[mid]>s)
                low = mid+1;
            else
                high = mid-1;
        }
        if(flag==0)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;

}
