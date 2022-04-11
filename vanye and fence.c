#include<stdio.h>
int main()
{
    int n,h,i,a,sum=0,count=0,widt=0,wid=0;
    scanf("%d %d",&n,&h);
    for(i=0;i<n;i++)
    {
        scanf("%a",&a);
        if(a<=(2*h) && a>=1)
            widt=count+1;
        else
            wid=count+2;
    }
    printf("%d",widt+wid);
}
