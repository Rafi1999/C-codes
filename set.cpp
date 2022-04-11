#include <bits/stdc++.h>
using namespace std;
void allPossibleSubset(int a[],int n)
{
    cout<<"0";
    int count = pow(2,n);
    for(int i=0;i<count;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i & (1<<j))>0)
                cout<<a[j]<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    allPossibleSubset(a,n);
    return 0;
}
