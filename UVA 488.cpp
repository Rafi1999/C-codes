#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x,y;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++)
    {

        cin>>x>>y;
        for(int j=1;j<=y;j++)
        {
            for(int k=1;k<=x;k++)
            {
                for(int l =1;l<=k;l++)
                {
                    cout<<k;
                }
                cout<<endl;
            }
            for(int k = x-1;k>=1;k--)
            {
                for(int l = 1;l<=k;l++)
                {
                    cout<<k;
                }
                cout<<endl;
            }
            cout<<endl;
        }
    }
    return 0;
}
