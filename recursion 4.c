#include<stdio.h>
#include<math.h>

int size;

int main()
{

    long long int arr[100000], max, i;
    scanf("%d", &size);
    for(i = 0; i < size; i++)
    {
        scanf("%lld", &arr[i]);
    }

    max = getMaxElement(arr);
    printf("%lld\n", max);
    return 0;
}

int getMaxElement(long long int a[])
{
    static int i = 0, max = -1e9; ;
    if(i < size)   // till the last element
    {
        if(max < a[i])
        max = a[i];

        i++;    // to check the next element in the next iteration
        getMaxElement(a);   // recursive call
    }
    return max;
}
