#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,n,i,x=0,y=0;
    char s[1000];
    scanf("%d%d\n%s",&a,&b,s);
    for(i=0;s[i]!='-';i++)
        x++;
    for(i+=1;s[i];i++)
        y++;
    if(x==a && y==b)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
