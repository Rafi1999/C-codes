#include<stdio.h>
#include<string.h>
int main()
{
    char S[20000],T[10000];
    gets(S);
    gets(T);
    strcat(S," ");
    strcat(S,T);
    printf("%s",S);
    return 0;
}
