 #include<bits/stdc++.h>
typedef long long ll;
using namespace std;

bool checkPrimeNumber(ll);

int main()
{
    ll n,a;
    cin >> n;
    for(ll i=0; i<n; i++)
    {
        cin>>a;
        if (checkPrimeNumber(a))
            cout <<"YES"<<endl;
        else
            cout <<"NO"<<endl;
    }
    return 0;
}

bool checkPrimeNumber(ll a)
{
    bool isPrime = true;

    // 0 and 1 are not prime numbers
    if (a == 0 || a == 1)
        isPrime = false;
    else
        for (ll i = 2; i <= a / 2; ++i)
            if (a % i == 0)
            {
                isPrime = false;
                break;
            }
    return isPrime;
}
