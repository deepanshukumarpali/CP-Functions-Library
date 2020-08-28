#include <bits/stdc++.h>

using namespace std;
using ll = long long;
#define forAuto(i,x) for(auto i: x)
#define forRange(i,l,h) for(ll i=l;i<h;i++)
#define all(x) x.begin(),x.end()
#define append push_back
using Pllll = pair<ll,ll>;



void DJ(ll s, ll n)
{
    vector<ll> dist(n+1);
    
    forRange(i,0,n+1) dist[i]=LONG_MAX;
    dist[s]=0;
    
    priority_queue<Pllll, vector <Pllll> , greater<Pllll> > qu;
    qu.push({dist[s],s});
    
    while(not qu.empty())
    {
        Pllll ele=qu.top();
        qu.pop();
        ll u=ele.second;
        //cout<<u;nl;
        forAuto(i,adj[u])
        {
            ll v=i.second,w=i.first;
            if(dist[v]>dist[u]+w)
            {
                dist[v]=dist[u]+w;
                qu.push({dist[v],v});
            }
        }
    }
}



int main()
{
    // Example Test Run
    
    // N/A

    // output: N/A

    return 0;
}
