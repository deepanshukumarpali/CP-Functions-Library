#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define forAuto(i,x) for(auto i: x)
#define forRange(i,l,h) for(ll i=l;i<h;i++)
#define all(x) x.begin(),x.end()
#define append push_back



ll LIS(vector<ll> a)
{
    ll n=a.size();
    ll dp[n];

    forRange(i,0,n)
    {
        dp[i]=1;
        forRange(j,0,i)
        {
            if(a[j]<a[i])
                dp[i]=max(dp[i],dp[j]+1);
        }
    }
    
    return (*max_element(dp,dp+n));

}




int main()
{
    // Example Test Run
    
    // vector<ll> a={4,7,2,6,8,0};
    
    // cout<<LIS(a)<<endl;

    // output: 2 3 5 7 11 13 17 19 23 29

    return 0;
}
