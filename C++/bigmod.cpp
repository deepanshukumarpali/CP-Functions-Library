#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define forAuto(i,x) for(auto i: x)
#define forRange(i,l,h) for(ll i=l;i<h;i++)
#define all(x) x.begin(),x.end()




ll bigmod(ll a,ll b, ll c)
{
    if(b==0) return 1;
    if(b%2) return (a%c * bigmod(a,b-1,c))%c;
    else
    {
        ll x=bigmod(a,b/2,c);
        return (x*x)%c;
    }
}





int main()
{
    // Example Test Run
    
    // cout<<bigmod(2,10,100)<<endl;

    // output: 10

    return 0;
}
