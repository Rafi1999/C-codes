#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,x=0;

    while(1)
    {
        cin>>n;

        if(n==0)
            break;
        if(x!=1)
            cout<<"PERFECTION OUTPUT"<<endl;
        x = 1;
            sum = 0;
        for(int i=1;i<=n/2;i++)
        {
            if(n%i==0)
               sum +=i;
        }
        if(n==sum)
        {
           printf("%5d PERFECT\n",n);
        }
        else if(n<sum)
        {
            printf("%5d ABUNDANT\n",n);
        }
        else if(n>sum)
        {
            printf("%5d DEFICIENT\n",n);
        }
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
