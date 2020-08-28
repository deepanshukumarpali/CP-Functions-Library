#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define forAuto(i,x) for(auto i: x)
#define forRange(i,l,h) for(ll i=l;i<h;i++)
#define all(x) x.begin(),x.end()
#define append push_back
using Pllll = pair<ll,ll>;


ll minCoins(vector<ll> coin, ll s)
{
    ll n=coin.size();
    ll dp[n+1][s+1];
    
    forRange(i,0,n+1)
    forRange(j,0,s+1)
    dp[i][j]=INT_MAX-1;
    
    forRange(i,1,n+1)
    dp[i][0]=0;
    
    forRange(i,0,s+1)
    if(i%coin[0]==0)
        dp[1][i]=i/coin[0];
    
    forRange(i,2,n+1)
    forRange(j,1,s+1)
    {
        if(coin[i-1]>j)
            dp[i][j]=dp[i-1][j];
        else
            
            dp[i][j]=min(dp[i-1][j],1+dp[i][j-coin[i-1]]);
        
    }
    return (dp[n][s]>=INT_MAX-1?-1:dp[n][s]);
    //print(INT_MAX);
    //nl;
    
    
    
    
}



int main()
{
    // Example Test Run
    
    // ll s=11;
    // vector<ll> coin={1,5,7};
    // cout<<minCoins(coin,s)<<endl;

    // output: 3

    return 0;
}
