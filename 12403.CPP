#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    long int n,i,t,s=0;
    char a[1000];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        if(strcmp(a,"donate")==0)
        {
            cin>>t;
            s = s+t;
        }
        if(strcmp(a,"report")==0)
            cout<<s<<endl;
    }
    return 0;
}
