#include<stdio.h>

void sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

}
void print(int a[],int n)
{
    int i;
       for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
int main()
{
    int a[1000],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,n);
    print(a,n);
    return 0;
}
