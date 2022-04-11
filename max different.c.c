#include<stdio.h>
int main()
{
    int A[100000],i,j,N,max=-1e9;
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0,j=1; i<N,j<N; i++,j++)
    {
      if(abs(A[i]-A[j])>max)
        max=abs(A[i]-A[j]);

    }
    printf("%d\n",max);


    return 0;
}
