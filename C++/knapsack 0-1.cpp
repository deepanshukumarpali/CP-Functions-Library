#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define forAuto(i,x) for(auto i: x)
#define forRange(i,l,h) for(ll i=l;i<h;i++)
#define all(x) x.begin(),x.end()
#define append push_back



ll knapsack(vector<ll> val,vector<ll> weight,ll max_w)
{
    ll n=val.size();

    ll dp[1005][1005];
    memset(dp,0,sizeof(dp));
    
    forRange(cur,1,n+1)
    forRange(w,1,max_w+1)
    {
        if(weight[cur-1]>w)
            dp[cur][w]=dp[cur-1][w];
        else
            dp[cur][w]=max(dp[cur-1][w-weight[cur-1]] + val[cur-1], dp[cur-1][w]);
    }
    
    return (dp[n][max_w]);
    
}




int main()
{
    // Example Test Run
    
    // ll max_w=4;
    // vector<ll> val={1,2,3};
    // vector<ll> weight={4,5,1};
    
    // cout<<knapsack(val,weight,max_w)<<endl;

    // output: 3

    return 0;
}
