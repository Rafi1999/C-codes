#include<stdio.h>
int main()
{
    int n=3,a,b,c;
    for(a=n;a<=n;a++)
    {
        for(b=n-1;b<n;b++)
        {
            for(c=n-2;c<=n;c++)
            {
                printf("* * *\n",a,b,c);
            }
        }
    }


}
