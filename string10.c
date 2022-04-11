#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int i,j,len,len1,len2;
    gets(s1);
    gets(s2);
    len1 = strlen(s1);
    len2 = strlen(s2);
    len = len1+len2;
    for(i=0;i<len1;i++)
    {
        for(j=0;j<len2;j++)
    {
        if(s1[i]>s2[j])
        {
        printf("S1 is larger");break;
        }
        else if(s1[i]<s2[j])
        {
         printf("S1 is smaller");break;
        }
        else
            break;
    }
    break;
    }
}
