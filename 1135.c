#include<stdio.h>
int main()
{
    int a,n,i=0,j=0,k=0;
    scanf("%d",&a);
    for(n=0,i=0;n<a;n++,i+=3)
    {
        i+=1;
        j=i+1;
        k=j+1;
        printf("%d %d %d PUM\n",i,j,k);
    }
}
