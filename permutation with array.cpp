#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100000],b[100000],n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int j=0;j<n;j++)
        cin>>b[j];
    int flag = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                flag++;
                b[j]=0;
                break;
            }
        }
    }
    if(flag==n)
        cout<<"yes";
    else
        cout<<"no";
}
