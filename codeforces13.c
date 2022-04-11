#include<stdio.h>
#include<string.h>
int main()
{
    char S[1090],P[1090];
    int i,flag;
    gets(S);
    strcpy(P,S);
    strrev(P);
    for(i=0;S[i]!='\0';i++)
    {
        flag=0;
        if(P[i]!=S[i])
            flag=1;
            break;
    }
    if(flag==0)
        printf("YES");
    else
        printf("NO");

    return 0;


}
