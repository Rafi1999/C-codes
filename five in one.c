#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdbool.h>
int findmax(int a[],int n)
{
    int m=-1e9,i;
    for(i=1; i<=n; i++)
    {
        if(m<a[i])
            m=a[i];
    }
    return m;
}
int findmin(int a[],int n)
{
    int m=1e9,i;
    for(i=1; i<=n; i++)
    {
        if(m>a[i])
            m=a[i];
    }
    return m;
}
int findprime(int a[],int n)
{
    int count=0,m,i;
    for(i=1; i<=n; i++)
    {
        if(a[i]%2!=0)
            count++;
    }
    return count;
}
int reverse(int n)
{
    int x,y=0;
    while(n>0)
    {
        x = n%10;
        y = y*10+x;
        n = n/10;
    }
    return y;
}
bool isp(int n)
{
    return(n== reverse(n));
}
int findp(int a[],int n)
{
    int count=0,i;
    for(i=1; i<=n; i++)
    {
        if(a[i]<10 || isp(a[i]))
            count++;
    }
    return count;
}
int findd(int a[],int n)
{
    int b[1001],j,i,pos,max=-1,count=0;
    for(i=1; i<=n; i++)
    {
        count=0;
        for(j=1; j<=(n/2); j++)
        {
           // printf("%d\n",j);
            if(a[i]%j ==0)
            {
                count++;
            }
        }
        b[i]=count;
    }
    for(i=1; i<=n; i++)
    {
        if(b[i]>=max)
        {
            max = b[i];
            pos = a[i];
        }
    }
    return pos;

}
int main()
{
    int a[1001],n,max,min,prime,p,d,i;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        scanf("%d",&a[i]);
    max = findmax(a,n);
    min = findmin(a,n);
    prime = findprime(a,n);
    p = findp(a,n);
    d = findd(a,n);
    printf("The maximum number : %d\n",max);
    printf("The minimum number : %d\n",min);
    printf("The number of prime numbers : %d\n",prime);
    printf("The number of palindrome numbers : %d\n",p);
    printf("The number that has the maximum number of divisors : %d\n",d);

}
