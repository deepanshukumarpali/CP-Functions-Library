#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define forAuto(i,x) for(auto i: x)
#define forRange(i,l,h) for(ll i=l;i<h;i++)
#define all(x) x.begin(),x.end()
#define append push_back



void PrimeFactors(ll n, vector<ll> &factors)
{
    while(n%2==0)
    {
        factors.append(2);
        n/=2;
    }
    
    for(ll i=3;i<=sqrt(n);i+=2)
    {
        while(n%i==0)
        {
            factors.append(i);
            n/=i;
        }
    }
    
    if(n>1) factors.append(n);

}




int main()
{
    // Example Test Run
    
    // vector<ll> factors;
    // PrimeFactors(30,factors);
    
    // forAuto(i,factors)
    // cout<<i<<" ";

    // output: 2 3 5

    return 0;
}
