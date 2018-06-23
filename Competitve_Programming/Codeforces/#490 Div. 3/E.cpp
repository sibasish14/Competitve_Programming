#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

vector<ll> adj[5010];
ll vis[5010],vis1[5010],c;

void dfs(ll s)
{
	vis[s]=1;
	for(ll i=0;i<adj[s].size();i++)
		if(!vis[adj[s][i]])
			dfs(adj[s][i]);
}

void DFS(ll s)
{
	vis1[s]=1;
	c++;
	for(ll i=0;i<adj[s].size();i++)
		if(!vis1[adj[s][i]] && !vis[adj[s][i]])
			DFS(adj[s][i]);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,m,s,ans=0,x,y,i;
	cin>>n>>m>>s;
	for(i=0;i<m;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
	}
	dfs(s);
	vector<pair<ll,ll> > tmp;
	for(i=1;i<=n;i++)
	{
		c=0;
		if(!vis[i])
		{
			memset(vis1,0,sizeof(vis1));
			DFS(i);
			tmp.push_back(make_pair(c,i));
		}
	}
	sort(tmp.begin(), tmp.end());
	reverse(tmp.begin(), tmp.end());
	for(auto z:tmp)
	{
		if(!vis[z.second])
		{
			ans++;
			dfs(z.second);
		}
	}
	cout<<ans;
	return 0;
}

 