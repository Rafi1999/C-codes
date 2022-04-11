#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin>>n;
    bool f = false;
    for(long long int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            f = 1;
    }
    if(f == true || n == 1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}

