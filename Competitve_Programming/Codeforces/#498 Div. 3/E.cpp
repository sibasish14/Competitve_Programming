#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

vector<ll> adj[200010],store;
ll vin[200010],vout[200010],vis[200010];

void dfs(ll s)
{
    store.push_back(s);
    vin[s]=store.size()-1;
    for(auto z:adj[s])
            dfs(z);
    vout[s]=store.size()-1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,q,i,x;
    cin>>n>>q;
    for(i=2;i<=n;i++)
    {
        cin>>x;
        adj[x].push_back(i);
    }
    dfs(1);
    while(q--)
    {
        ll u,k;
        cin>>u>>k;
        if(vout[u]-vin[u]+1 >= k)
            cout<<store[vin[u]+k-1]<<"\n";
        else cout<<"-1\n";
    }
	return 0;
}
