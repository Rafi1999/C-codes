#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int sum = 0;
    for(int i=9;n>0;i*=10)
    {
        sum += n;
        n -= i;
    }
    cout<<sum<<endl;
    return 0;
}
