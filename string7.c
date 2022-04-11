#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int i,j;
    gets(s1);
    gets(s2);
    if(strcmp(s1,s2)>0)
        printf("S1 is larger\n");
    else if(strcmp(s1,s2)<0)
        printf("S1 is smaller\n");
    else
        printf("S1 is equal\n");
}
