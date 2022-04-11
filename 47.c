#include<stdio.h>
int main()
{
    int a,b,c,d,x,y;
    scanf("%d %d %d %d",&a,&c,&b,&d);
    x = b-a;
    if (x<0)
    {
        x = 24 + (b-a);
    }
    y = d-c;
    if (y<0)
    {
        y = 60 + (d-c);
        x--;
    }
    if ((a == b) && (c == d))
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",x,y);
    return 0;
}
