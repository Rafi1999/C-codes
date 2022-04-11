#include<bits/stdc++.h>
long long binary_function(decimal)
{
    long long binary=0,r=1,t=1;
    while(decimal!=0)
    {
        r = decimal%2;
        decimal = decimal/2;
        binary = binary + r*t;
        t = t*10;
    }
    return binary;

}
int main()
{
    long long decimal;
    scanf("%llu",&decimal);
    string s = string(binary_function(decimal));
    s.be
}
