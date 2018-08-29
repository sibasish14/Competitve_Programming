#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

vector<ll> adj[200010];
ll par[200010],dis[200010];

void dfs(ll s,ll p=-1,ll d=0)
{
    dis[s]=d;
    par[s]=p;
    for(auto z:adj[s])
    {
        if(z != p)
        {
            dfs(z,s,d+1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,x,y,ans=0;
    set<pair<ll,ll> > s;
    cin>>n;
    for(i=0;i<n-1;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(1);
    for(i=1;i<=n;i++)
    {
        if(dis[i] > 2)
        {
            s.insert({-dis[i],i});
        }
    }
    while(!s.empty())
    {
        ll a=s.begin()->second;
        ll b=par[a];
        ans++;
        auto it=s.find({-dis[b],b});
        if(it != s.end())
            s.erase(it);
        for(auto z:adj[b])
        {
            auto it=s.find({-dis[z],z});
            if(it != s.end())
                s.erase(it);
        }   
    }
    cout<<ans;
    return 0;
}