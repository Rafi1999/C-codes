#include<stdio.h>
#include<string.h>
int main()
{
    char S[1000000];
    int i,len=0;
    gets(S);
    for(i=0;S[i] != '\0';i++)
        len++;
    printf("%d",len);
    return 0;
}
