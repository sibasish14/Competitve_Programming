#include<bits/stdc++.h>
using namespace std;

int arr[21][21],n,ans;
int vis[21][21],can_go[4][2]={{1,0},{-1,0},{0,1},{0,-1}};

void dfs(int a,int b)
{
	int i,x,y;
	if(a==n-1 && b==n-1)
	{
		ans++;
		return;
	}
	vis[a][b]=true;
	for(i=0;i<4;i++)
	{
		x=a+can_go[i][0];
		y=b+can_go[i][1];
		if(x>=n || x<0 || y>=n || y<0)
			continue;
		if(vis[x][y] || arr[x][y]==1)
			continue;
		dfs(x,y);
		vis[x][y]=false;
	}
}

int main()
{
	int t,i,j;
	cin>>t;
	while (t--)
	{
		memset(vis,false,sizeof(vis));
		cin>>n;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>arr[i][j];
		ans=0;
		dfs(0,0);
		cout<<ans<<"\n";
	}
	return 0;
}