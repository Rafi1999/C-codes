#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int i,j,len1,len2;
    i = strlen(s1);
    len2 = strlen(s2);
    gets(s1);
    gets(s2);
        for(j = 0;j<=len2; j++ , i++)
        s1[i]=s2[j];
    printf("%s\n",s1);
}
