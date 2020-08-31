#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using Vll = vector<ll>;
#define forAuto(i,x) for(auto i: x)
#define forRange(i,l,h) for(ll i=l;i<h;i++)
#define all(x) x.begin(),x.end()
#define append push_back



void seive(ll n, set<ll> &primes)
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
    if(flag[i]) primes.insert(i);
}

void GoldbachConjecture(ll n)
{
    set<ll> primes;
    seive(n,primes);
    
    forAuto(p1,primes)
    {
        ll p2=n-p1;
        
        if(primes.find(p2)!=primes.end())
        {
            cout<<p1<<" "<<p2<<endl;
            return;
        }
    }
}

int main()
{
    // Example Test Run
    
    // GoldbachConjecture(10);

    // output: 3 7

    return 0;
}
