#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using Vll = vector<ll>;
#define forAuto(i,x) for(auto i: x)
#define forRange(i,l,h) for(ll i=l;i<h;i++)
#define all(x) x.begin(),x.end()
#define append push_back




void seive(ll n, Vll &primes)
{
    bool flag[n+1];
    memset(flag,true,sizeof(flag));
    
    ll p=2;
    while(p*p<=n)
    {
        if(flag[p])
        {
            for(ll i=2*p;i<=n;i+=p)
                flag[i]=false;
        }
        p+=1;
    }
    forRange(i,2,n+1)
    if(flag[i]) primes.append(i);
}


void segmentedSeive(ll n, Vll &primes)
{
    ll segment=floor(sqrt(n))+1;
    seive(segment,primes);
    
    Vll segPrimes;
    bool flag[segment+1];
    
    ll low,high;
    low=segment+1;
    high=low+segment;
    
    // for first sqrt(n) simple normal seive
    
    // after sqrt(n) iter for each segment of size [sqrt(n)] and mark multiples
    // of primes below sqrt(n) for simple seive
    
    
    while(low<=n)
    {
        memset(flag,true,sizeof(flag));
        high=min(n,high);
        
        forAuto(p,primes)
        {
            ll first=(low/p)*p;
            if(first<low) first+=p;
            
            for(ll i=first;i<=high;i+=p)
                flag[i-low]=false;
        }
        
        forRange(i,low,high+1)
        if(flag[i-low]) segPrimes.append(i);
        
        low=high+1;
        high=low+segment;
    }
    
    
    forAuto(i,segPrimes)
    primes.append(i);
}




int main()
{
    // Example Test Run
    
    // vector<ll> primes;
    // segmentedSeive(30,primes);
    
    // forAuto(i,primes)
    // cout<<i<<" ";

    // output: 2 3 5 7 11 13 17 19 23 29

    return 0;
}
