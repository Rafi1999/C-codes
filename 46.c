#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d %d",&a,&b);
   x = b - a;
   if (x<0)
   {
       x = 24 + (b-a);
   }
   if (a == b)
   {
       printf("O JOGO DUROU 24 HORA(S)\n");
   }
   else printf("O JOGO DUROU %d HORA(S)\n",x);
   return 0;
}

