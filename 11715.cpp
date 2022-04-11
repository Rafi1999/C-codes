#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;
int main()
{
    double u,v,a,s,t,n;
    int count = 1;
    while(true)
    {
        cin>>n;
        if(n==0)
            break;
        else if(n==1)
        {
            cin>>u>>v>>t;
            a = (v-u)/t;
            s = ((v+u)/2)*t;
            cout<<"Case "<<count<<": "<<fixed<<setprecision(3)<<s<<" "<<fixed<<setprecision(3)<<a<<endl;
        }
        else if(n==2)
        {
            cin>>u>>v>>a;
            t = (v-u)/a;
            s = ((v+u)/2)*t;
            cout<<"Case "<<count<<": "<<fixed<<setprecision(3)<<s<<" "<<fixed<<setprecision(3)<<t<<endl;
        }
        else if(n==3)
        {
            cin>>u>>a>>s;
            v = sqrt((u*u)+2*a*s);
            t = (v-u)/a;
            cout<<"Case "<<count<<": "<<fixed<<setprecision(3)<<v<<" "<<fixed<<setprecision(3)<<t<<endl;
        }
        else if(n==4)
        {
            cin>>v>>a>>s;
            u = sqrt((v*v)-2*a*s);
            t = (v-u)/a;
            cout<<"Case "<<count<<": "<<fixed<<setprecision(3)<<u<<" "<<fixed<<setprecision(3)<<t<<endl;
        }
        count++;
    }
    return 0;
}
