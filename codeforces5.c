#include<stdio.h>
#include<string.h>
int main()
{
    char A[100000],B[100000],C[2000000];
    gets(A);
    gets(B);
    int lena,lenb,i;
    strcpy(C,A);
    lena = strlen(A);
    lenb = strlen(B);
    printf("%d %d\n",lena,lenb);
    printf("%s\n",strcat(C,B));
    for(i=0,A[0]=B[0];C[i]!= '\0';i++)
    {
     printf("%c",A[i]);
    }
    printf(" ");
    for(i=0,B[0]=A[0];B[i]!= '\0';i++)
    {
         printf("%c",B[i]);
    }
    return 0;
}
