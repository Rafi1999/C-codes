#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int len, i;
    for(i = 0; i < 5; i++)
        scanf("%c", &str[i]);
        str[i]='\0';
    //gets(str);
    len = strlen(str);
    printf("%d", len);
    printf("\n");




    return 0;
}
