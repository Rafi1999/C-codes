#include<bits/stdc++.h>
using namespace std;
int main()
{
     int x,i=2;
     cin>>x;
     for(i=2;x>1;)
     {
         while(x%i==0)
     {
         cout<<i;
         x = x/i;
     }
     i++;
     }

}
