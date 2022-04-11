#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s;
    cin>>s;
    if(('a'<=s && s<='z') || ('A'<=s && s<='Z'))
    {
        cout<<"ALPHA"<<endl;
        if('A'<=s && s<='Z')
            cout<<"IS CAPITAL"<<endl;
        else
            cout<<"IS SMALL"<<endl;
    }
    else
        cout<<"DIGIT"<<endl;
    return 0;
}
