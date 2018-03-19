#include<bits/stdc++.h>
using namespace std;

int dis[100001],vis[100001],n;
struct node
{
	int e,d;
};
typedef struct node node;
vector<node> v[100001];

int bfs(int s)
{
	int i;
	queue<int> q;
	q.push(s);
	for(i=0;i<=n;i++)
	{
		dis[i]=0;
		vis[i]=0;
	}
	vis[s]=1;
	while(!q.empty())
	{
		int z=q.front();
		q.pop();
		for(i=0;i<v[z].size();i++)
		{
			if(!(vis[v[z][i].e]))
			{
				vis[v[z][i].e]=1;
				dis[v[z][i].e]=dis[z]+v[z][i].d;
				q.push(v[z][i].e);
			}
		}
	}
	return int(max_element(dis+1,dis+n+1)-dis);
}

int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{
		node tmp;
		int ui,vi,di,cost;
		cin>>n;
		for(i=1;i<=n;i++)
			v[i].clear();
		for(i=1;i<=n-1;i++)
		{
			cin>>ui>>vi>>di;
			tmp.e=vi;
			tmp.d=di;
			v[ui].push_back(tmp);
			tmp.e=ui;
			v[vi].push_back(tmp);
		}
		int s=bfs(1);
		int a=bfs(s);
		int ans=dis[a];
		if(ans>10000)
			cost=10000;
		else if(ans>1000)
			cost=1000;
		else if(ans>100)
			cost=100;
		else
			cost=0;
		cout<<cost<<" "<<ans<<"\n";

	}

	return 0;
}