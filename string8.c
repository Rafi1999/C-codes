#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int len;
    gets(s1);
    gets(s2);
    strcat(s1," ");
    strcat(s1,s2);
    printf("Full name is : %s",s1);
}
