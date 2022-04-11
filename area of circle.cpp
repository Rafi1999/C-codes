#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double r,a;
    const float pie = 3.141592653;
    cin>>r;
    a = pie * r*r;
    cout<<fixed<<setprecision(9);
    cout<<a<<endl;
    return 0;
}
