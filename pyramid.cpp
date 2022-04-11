#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,i,j,k;
    char s[1000000];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>s;
        int len=strlen(s);
        for(j=len-1; j>=0; j--)
        {
            cout<<s[j]<<" ";
        }
        cout<<endl;
    }
}

