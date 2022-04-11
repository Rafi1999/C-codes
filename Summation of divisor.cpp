#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    long long int n,sum=0,s;
    cin>>n;
    if(n==1){
        cout<<"1";}
    else
    {
        s=sqrt(n);
        sum=n+1;
        for(int i=2; i<=s; i++)
        {
            if(n%i==0)
            {
                sum+=i;
                if(n/i!=i)
                    sum+= n/i;
            }
        }
        cout<<sum;
    }
}
