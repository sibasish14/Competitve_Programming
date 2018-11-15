#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

vector<ll> adj[200010];
int vis[200010];
vector<ll> ans;
map<ll,ll> mp;

bool comp(ll a,ll b)
{
    return mp[a] < mp[b];
}

void bfs(ll s)
{
    queue<ll> q;
    q.push(s);
    vis[s]=1;
    ans.push_back(s);
    ll i;
    while(!q.empty())
    {
        ll z=q.front();
        q.pop();
        for(i=0;i<adj[z].size();i++)
        {
            if(!vis[adj[z][i]])
            {
                vis[adj[z][i]]=1;
                q.push(adj[z][i]);
                ans.push_back(adj[z][i]);
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,x,y;
    cin>>n;
    ll seq[n];
    for(i=0;i<n-1;i++)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(i=0;i<n;i++)
    {
        cin>>seq[i];
        mp[seq[i]]=i+1;
    }
    for(i=1;i<=n;i++)
        sort(adj[i].begin(),adj[i].end(),comp);
    bfs(1);
    for(i=0;i<n;i++)
    {
        // cout<<ans[i]<<" "<<seq[i]<<"\n";
        if(ans[i] != seq[i])
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}