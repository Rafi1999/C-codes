#include<stdio.h>
int main()
{
    int a,A=0,G=0,D=0;

    while(1)
    {
        scanf("%d",&a);
        if(a==4)
            break;
        else
        {
            if(a==1) A+=1;
            else if(a==2) G+=1;
            else if(a==3) D+=1;
            else continue;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcohol: %d\n",A);
    printf("Gasolina: %d\n",G);
    printf("Diesel: %d\n",D);
    return 0;
}
