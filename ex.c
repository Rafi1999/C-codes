#include<stdio.h>
#include<conio.h>
int rec_ncr(int ,int );

void main()
{
int n,r;
printf("Enter n and r");
scanf("%d%d",&n,&r);
printf("The value of %dC%d is %d",n,r,rec_ncr(n,r));
}

int rec_ncr(int n,int r)
{
if(r==0|r==n)
  return 1;
else
  return rec_ncr(n-1,r-1)+rec_ncr(n-1,r);
}
