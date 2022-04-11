#include<stdio.h>
int main()
{
    int a[1000],i,j,n,c=1,max=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
           for(j=0,x=0;j<n;j++){
                if(a[i]==a[j])
                   x++;
            }
        if(x>max){
max=x;
c= a[i];
}
    }

    printf("%d",c);

    return 0;

}
