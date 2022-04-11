#include<stdio.h>
int main()
{
    int i,j,m, n,a[100000],b[100000],c=0;
    scanf("%d%d\n",&n,&m);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<m; i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0,j=0; i<n; i++)
    {
        if(b[j]==a[i])
        {
            c++;
            j++;
        }
    }
    if(c==m)
        printf("YES");
    else
        printf("NO");

    return 0;
}
