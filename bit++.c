#include<stdio.h>
#include<string.h>
void bit(char s[],int n)
{
    int j,i,value=0,sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        for(j=0;j<3;j++)
    {
        if(s[j]=='+')
        {
                        value++;
                        break;

        }
        else if(s[j]=='-')
        {
                        value--;
                        break;
        }
    }

    }
    sum += value;
    printf("%d\n",sum);

}
int main()
{
    int count=0,i,j,n;
    char s[4];
    scanf("%d",&n);
    bit(s,n);
}
