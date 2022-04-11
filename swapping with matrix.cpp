#include<bits/stdc++.h>
using namespace std;
void operation(int a[700][700],int x,int y,int n)
{
    int c,r;

    for (int i = 0; i < n; ++i)
    {

        c = a[x - 1][i];
        a[x - 1][i] = a[y - 1][i];
        a[y - 1][i] = c;
    }
    for (int i = 0; i < n; ++i)
    {

        r = a[i][x - 1];
        a[i][x - 1] = a[i][y - 1];
        a[i][y - 1] = r;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
}
int main()
{
    int a[700][700],n,x,y,c,r,i,j;
    cin>>n>>x>>y;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }
    }
     operation(a,x,y,n);
     /*
    for (int i = 0; i < n; ++i)
    {
        c = a[x - 1][i];
        a[x - 1][i] = a[y - 1][i];
        a[y - 1][i] = c;
    }
    for (int i = 0; i < n; ++i)
    {
        r = a[i][x - 1];
        a[i][x - 1] = a[i][y - 1];
        a[i][y - 1] = r;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout<<a[i][j<<" ";
        cout<<endl;
    }*/
}

