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




int main()
{
    // Example Test Run

    cout<<gcd(4,8)<<endl;

    // output: 4

    return 0;
}
