#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,X,f;
    long long int a[1000],min;
    cin>>N;
    for(int k=1; k<=N; k++)
    {
        cin>>X;
        for(int i=1; i<=X; i++)
        {
            cin>>a[i];
        }
        min=a[1]+a[2]+2-1;
        for(int i=1; i<=X; i++)
        {
            for(int j=i+1; j<=X; j++)
            {
                f=a[i]+a[j]+j-i;
                if(f<min)
                {
                    min=f;
                }
            }
        }
          cout<<min<<endl;
    }
    return 0;
}
