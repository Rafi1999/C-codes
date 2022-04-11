#include<stdio.h>
#include<string.h>
int main()
{
    char X[100000],Y[100000];
    gets(X);
    gets(Y);
    if(strcasecmp(X,Y)<=0)
        printf("%s",X);
    else
        printf("%s",Y);
}
