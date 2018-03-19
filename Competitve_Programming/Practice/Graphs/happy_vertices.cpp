#include<bits/stdc++.h>
using namespace std;

bool vis[100005];
int c=0,f=0;
vector<int> adj[100005];

void dfs(int s)
{
	int i;
	vis[s]=true;
	for(i=0;i<adj[s].size();i++)
	{
		if(!vis[adj[s][i]])
		{
			if(f==0)
			{
				if(adj[s].size() < adj[adj[s][i]].size()-1)
				{
					c++;
				}
				f=1;
			}
			else
			{
				if(adj[s].size() < adj[adj[s][i]].size())
			    	c++;
			}
			dfs(adj[s][i]);
		}
	}
}

int main()
{
	memset(vis,false,sizeof(vis));
	int n,e,i,u,v;
	cin>>n>>e;
	for(i=1;i<=e;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	for(i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			dfs(i);
		}
		f=0;
	}
	cout<<c<<"\n";
	return 0;
}