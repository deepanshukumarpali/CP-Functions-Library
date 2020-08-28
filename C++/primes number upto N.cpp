#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define forAuto(i,x) for(auto i: x)
#define forRange(i,l,h) for(ll i=l;i<h;i++)
#define all(x) x.begin(),x.end()
#define append push_back




void primeN(ll n, vector<ll> &primes)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    
    ll p=2;
    while(p*p<=n)
    {
        if(prime[p])
        {
            for(ll i=p*p;i<=n;i+=p) prime[i]=false;
        }
        p+=1;
    }
    
    forRange(i,0,n+1)
    if(prime[i]) primes.append(i);
}




int main()
{
    // Example Test Run
    
    // vector<ll> primes;
    // primeN(30,primes);
    
    // forAuto(i,primes)
    // cout<<i<<" ";

    // output: 2 3 5 7 11 13 17 19 23 29

    return 0;
}
