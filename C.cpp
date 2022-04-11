#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,a[10000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int flag = 0;
    int min = a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>min)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[j]>a[i])
                {
                    for(int k = i+1;k<n;k++)
                    {
                        if(a[k]>a[j])
                            flag++;
                    }
                }
            }
        }
        else
            flag = 0;
    }
    if(flag!=0)
        cout<<"Yes\n";
    else
        cout<<"No\n";
}
