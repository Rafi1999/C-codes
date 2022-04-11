#include<bits/stdc++.h>
using namespace std;
int main()
{
    char S;
    int N,X;
    cin>>S;
    cin>>N;
    for(int i=0;i<N;i++)
    {
        cin>>X;
        for(int j=0;j<X;j++)
        {
            if(S=='+')
                cout<<'+';
            else if(S=='-')
                cout<<'-';
            else if(S=='*')
                cout<<'*';
            else if(S=='/')
                cout<<'/';
        }
        cout<<endl;
    }
}
