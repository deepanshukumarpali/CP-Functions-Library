#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define forAuto(i,x) for(auto i: x)
#define forRange(i,l,h) for(ll i=l;i<h;i++)
#define all(x) x.begin(),x.end()
#define append push_back
using Pllll = pair<ll,ll>;


ll distinctWays(vector<ll> coin, ll s)
{
    
    ll dp[s+1];
    memset(dp,0,sizeof(dp));
    
    dp[0]=1;
    forRange(i,1,s+1)
    {
        forAuto(j,coin)
        {
            if(j<=i)
                dp[i]+=dp[i-j];
        }
    }
    
    return (dp[s]);
}
    



int main()
{
    // Example Test Run
    
    // ll s=11;
    // vector<ll> coin={1,5,7};
    // cout<<distinctWays(coin,s)<<endl;

    // output: 16

    return 0;
}
