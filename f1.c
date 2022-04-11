#include<stdio.h>
#include<stdlib.h>
void loop(n)
{
    int j;
    for(j=1;j<n;j++)
    {
         printf("%d ",j);
    }
    printf("%d\n",j);

}
int main()
{
    int n;
    scanf("%d",&n);
    loop(n);
    return 0;
}
