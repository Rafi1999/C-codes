#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    char s[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j =0; j<n; j++)
            cin>>s[i][j];
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
           if (s[i][j] == '#' && s[i - 1][j] == '#' && s[i + 1][j] == '#'&& s[i][j - 1] == '#'&& s[i][j + 1] == '#')
            {
                s[i][j] = s[i - 1][j] = s[i + 1][j] = s[i][j - 1] = s[i][j + 1] = '.';
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i][j]!='.')
                flag=1;
        }
    }
    if(flag==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;

}
