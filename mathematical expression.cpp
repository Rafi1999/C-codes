#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char x,y;
    cin>>a>>x>>b>>y>>c;
    if((x=='+' && y=='=' && a+b==c ) || (x=='-' && y=='=' && a-b==c) || (x=='*' && y=='=' && a*b==c))
        cout<<"Yes"<<endl;
    else if(x=='+' && y=='=' && a+b!=c)
        cout<<a+b<<endl;
    else if(x=='-' && y=='=' && a-b!=c)
        cout<<a-b<<endl;
    else if(x=='*' && y=='=' && a*b!=c)
        cout<<a*b<<endl;
        return 0;
}
