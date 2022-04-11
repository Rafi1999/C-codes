#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    cout<<n;
    while(1)
    {
        cout<<" ";
        count++;
        if(n==1)
            {
                break;
            }
        else if(n%2!=0)
        {
            n = 3*n+1;
            cout<<n;
        }
        else
        {
            n = n/2;
            cout<<n;
        }
    }
    cout<<endl;
    cout<<count<<endl;
    return 0;
}
