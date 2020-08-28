#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define forAuto(i,x) for(auto i: x)
#define forRange(i,l,h) for(ll i=l;i<h;i++)
#define all(x) x.begin(),x.end()
#define append push_back

ll gcd(ll a,ll b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}


ll nCr(ll n,ll r)
{
    ll p=1,k=1,m;
    r=min(n-r,r);

    if(r!=0)
    {
      while(r)
      {
          p*=n;
          k*=r;
          m=gcd(p,k);
          p/=m;
          k/=m;
          n-=1;
          r-=1;
      }
    }
    else p=1;
    
    return p;
}




int main()
{
    // Example Test Run

    // cout<<nCr(5,2)<<endl;

    // output: 10

    return 0;
}
