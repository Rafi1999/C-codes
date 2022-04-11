#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],s[1000];
    int len,i;
    for(i=0;i<5;i++)
        scanf("%c",&str[i]);
    str[i] = '\0';
    for(i=0;i<5;i++)
    {
        s[i]=str[i];
    }
    s[i]='\0';
    printf("New ");
    for(i=0;i<5;i++)
    {
        printf("%c",s[i]);
    }
    printf("\n");
}
