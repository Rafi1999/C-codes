#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(true)
    {
        cin>>a>>b>>c;
        long long int  as = a*a;
        long long int  bs = b*b;
        long long int  cs = c*c;
        if(a==0 && b==0 && c==0)
            break;
        if((as == (bs+cs))||(bs == (as+cs))||(cs == (bs+as)))
            cout<<"right"<<endl;
        else
            cout<<"wrong"<<endl;
    }
    return 0;
}
