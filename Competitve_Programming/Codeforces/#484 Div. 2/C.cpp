#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

vector<ll> adj[100010];
ll ans=0,cnt[100010]={1};

void dfs(ll node,ll par)
{
	cnt[node]=1;
	for(auto v:adj[node])
	{
		if(v != par)
		{
			dfs(v,node);
			cnt[node]+=cnt[v];
		}
	}
	if(cnt[node]%2 == 0)
		ans++;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   	ll n,i,u,v;
   	cin>>n;
   	for(i=0;i<n-1;i++)
   	{
   		cin>>u>>v;
   		adj[u].push_back(v);
   		adj[v].push_back(u);
   	}
   	dfs(1,0);
   	if(n%2==1)
   		cout<<"-1";
   	else
   		cout<<ans-1;
	return 0;
}
