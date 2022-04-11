#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c,d,z;
    cin>>a>>b>>c>>d;
    z=((((a%100)*(b%100))%100)*(((c%100)*(d%100))%100))%100;
    if(z<10)
        cout<<"0"<<z<<endl;
    else
        cout<<z<<endl;
    return 0;
}
