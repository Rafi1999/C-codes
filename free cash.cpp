#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count = 1,cash = 1;
    int h,m;
    cin>>n;
    cin>>h>>m;
    while(--n)
    {
        int h1,m1;
        cin>>h1>>m1;
        if(h==h1 && m==m1)
        {
            count++;
            if(count>cash)
                cash = count;
        }
        else
        {
            count=1;
        }
        h = h1;
        m = m1;
    }
    cout<<cash<<endl;
    return 0;
}
