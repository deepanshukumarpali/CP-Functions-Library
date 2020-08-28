#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define forAuto(i,x) for(auto i: x)
#define forRange(i,l,h) for(ll i=l;i<h;i++)
#define all(x) x.begin(),x.end()
#define append push_back




void divisors(ll n,vector<ll> &div)
{
    forRange(i,1,sqrt(n)+1)
    {
        if(n%i==0)
        {
            div.append(i);
            div.append(n/i);
        }
    }
}




int main()
{
    // Example Test Run
    
    // vector<ll> div;
    // divisors(30,div);
    
    // forAuto(i,div)
    // cout<<i<<" ";

    // output: 1 30 2 15 3 10 5 6 6 5

    return 0;
}
