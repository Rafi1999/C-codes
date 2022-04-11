#include<stdio.h>
int main()
{
    int a,i = 0,x;
    for(a = 0;a<5;a++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
         i+=2;
        }
    }
     printf("%d valores pares",i);
}
