#include<stdio.h>
int main()
{
    int a,i,c=0,r=0,s=0,n,sum;
    double x,y,z;
    char j[2];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %s",&a,&j);
        if(j[0]=='C')
            c+=a;
        else if(j[0]=='R')
            r+=a;
        else if(j[0]=='S')
            s+=a;
    }
    sum = c+r+s;
    x = (c/(sum*1.0))*100.00;
    y = (r/(sum*1.0))*100.00;
    z = (s/(sum*1.0))*100.00;
    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2lf %%\n",x);
    printf("Percentual de ratos: %.2lf %%\n",y);
    printf("Percentual de sapos: %.2lf %%\n",z);
    return 0;

}
