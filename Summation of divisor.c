#include<bits/stdc++.h>
using namespace std;
int main()
{
    int input;
    cin>>input;
    int maxD = (int)Math.sqrt(input);
    int sum=1;
    for(int i = 2; i <= maxD; i++)
    {
        if(input % i == 0)
        {
            sum += i;
            int d = input/i;
            if(d!=i)
                sum+=d;
        }
    }
    cout<<sum;
}
