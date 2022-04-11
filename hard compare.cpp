#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d;
    double x,y;
    cin>>a>>b>>c>>d;
    x = log(a)*b;
    y = log(c)*d;
    if(x>y)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;

}
