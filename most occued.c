#include<stdio.h>
int main()
{
    int a[1000],i,j,n,c=1,max=1,z;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j) continue;
            if(a[i]==a[j]){
                if(i>j) break;
            }
            if(a[i]==a[j])
                c++;
        }
        if(c>max){z=a[i];}
        c=1;
    }
 printf("%d",z);


    return 0;

}
