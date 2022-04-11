#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a[2000]={},l=0,r=0,c=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='L')
            l++;
        if(s[i]=='R')
            r++;
        if(l==r)
        {
            c++;
            a[i]=1;
        }
    }
    cout<<c<<endl;
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
        if(a[i]==1)
            cout<<endl;
    }
}
