#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i;
    cin>>i;
    cout<<i/365<<" years\n"<<(i%365)/30<<" months\n"<<(i%365)%30<<" days\n";
    return 0;
}
