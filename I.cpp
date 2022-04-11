#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10000],n,cost = 0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(i=j)
                j=j+1;
            if(a[i]==a[j])
                cost++;
        }
    }
    cout<<cost<<endl;
    return 0;
}
