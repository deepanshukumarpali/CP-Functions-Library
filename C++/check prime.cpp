#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define forAuto(i,x) for(auto i: x)
#define forRange(i,l,h) for(ll i=l;i<h;i++)
#define all(x) x.begin(),x.end()




bool isPrime(ll n)
{
    if(n<=1) return false;
    if (n<=3) return true;
    if(n%2==0 or n%3==0) return false;
    
    ll i=5;
    while(i*i<=n)
    {
        if(n%i==0 or n%(i+2)==0) return false;
        i+=6;
    }
    return true;
}





int main()
{
    // Example Test Run
    
    // cout<<isPrime(31)<<endl;

    // output: 1

    return 0;
}
