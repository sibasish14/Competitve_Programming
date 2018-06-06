#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

vector<ll> v[1010];
ll connect[1010][1010],d[2][1010],n;

void bfs(ll s,int z)
{
	ll i;
	for(i=1;i<=n;i++)
		d[z][i]=INT64_MAX;
	d[z][s]=0;
	queue<ll> q;
	q.push(s);
	while(!q.empty())
	{
		s=q.front();
		q.pop();
		for(i=0;i<v[s].size();i++)
		{
			if(d[z][v[s][i]] > d[z][s]+1)
			{
				d[z][v[s][i]]=d[z][s]+1;
				q.push(v[s][i]);
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll m,s,t,i,j,x,y,ans=0;
	cin>>n>>m>>s>>t;
	for(i=0;i<m;i++)
	{
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
		connect[x][y]=1;
		connect[y][x]=1;
	}
	bfs(s,0);
	bfs(t,1);
	ll mn=d[0][t];
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(d[0][i]+d[1][j]+1 >= mn && d[0][j]+d[1][i]+1 >= mn && !connect[i][j])
				ans++;
		}
	}
	cout<<ans;
	return 0;
}
