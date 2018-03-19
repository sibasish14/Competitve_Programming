#include<bits/stdc++.h>
using namespace std;

vector<int> adj[1005];
int dis[1005]={0},vis[1005]={0};


void bfs(int s)
{
	int i;
	queue<int> q;
	q.push(s);
	vis[s]=1;
	while(!q.empty())
	{
		int tmp=q.front();
		q.pop();
		for(i=0;i<adj[tmp].size();i++)
		{
			if(!vis[adj[tmp][i]])
			{
				vis[adj[tmp][i]]=1;
				dis[adj[tmp][i]]=dis[tmp]+1;
				q.push(adj[tmp][i]);
			}
		}
	}
}

int main()
{
	int n,u,v,i;
	cin>>n;
	for(i=0;i<n-1;i++)
	{
		cin>>u>>v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	bfs(1);
	int m=INT_MAX,in,p,q;
	cin>>q;
	while(q--)
	{
		cin>>p;
		if(dis[p]<m)
		{
			m=dis[p];
			in=p;
		}
	}
	cout<<in<<"\n";
	return 0;
}