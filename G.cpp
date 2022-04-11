#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n,flag=0;
    cin>>s>>n;
    int a[10000],b[10000];
    for(int i =0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        a[i] = x;
        b[i] = y;
    }
    for(int i=0;i<n;i++)
    {
        if(s>x)
        {
            s = s+y;
        }
        else
        {
            flag=1;
        }
    }
    if(flag ==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
