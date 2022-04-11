#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10000];
    cin>>n;
    for(int i=1,j=0;i<=n;i++)
    {
        if(n%i==0)
        {
            a[j]=i;
            j++;
        }
    }
    for(int j=0;j<n;j++)
        cout<<a[j]<<endl;
}
