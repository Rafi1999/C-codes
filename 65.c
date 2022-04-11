#include<stdio.h>
int main()
{
    int a,i;
    int p = 0,n = 0,e = 0,odd = 0;
    for(a = 0;a<5;a++)
    {
        scanf("%d",&i);
        if(i>0){
            p++;
        }
        if(i<0){
            n++;
        }
        if(i%2==0){
            e++;
        }
        if(i%2!=0){
            odd++;
        }
    }
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",n);


}

