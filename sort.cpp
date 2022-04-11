#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d[3];
    cin>>a>>b>>c;
    d[0]=a;
    d[1]=b;
    d[2]=c;
    sort(d,d+3);
    cout<<d[0]<<endl<<d[1]<<endl<<d[2]<<endl;
    cout<<endl<<a<<endl<<b<<endl<<c<<endl;
    return 0;
}
