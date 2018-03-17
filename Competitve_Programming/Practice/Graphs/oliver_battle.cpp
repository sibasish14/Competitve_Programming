#include<bits/stdc++.h>
using namespace std;
int arr[1005][1005];
int vis[1005][1005];

int max_tr_fun(int a,int b)
{
	vis[a][b]=1;
	int tmp=1,i,j;
	queue<pair<int,int> > q;
	q.push(make_pair(a,b));
	while(!q.empty())
	{
		int x=q.front().first, y=q.front().second;
		q.pop();
		for(i=-1;i<=1;i++)
		{
			for(j=-1;j<=1;j++)
			{
				if(!vis[x+i][y+j] && arr[x+i][y+j])
				{
					tmp++;
					q.push(make_pair(x+i, y+j));
					vis[x+i][y+j]=1;
				}
			}
		}
	}
	return tmp;

}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,j;
		cin>>n>>m;
		memset(arr,0,sizeof(arr));
		memset(vis,0,sizeof(vis));
		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
				cin>>arr[i][j];

		int mx_tr=0,c=0;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(!vis[i][j] && arr[i][j])
				{
					c++;
					mx_tr=max(mx_tr,max_tr_fun(i,j));
				}
			}
		}
		cout<<c<<" "<<mx_tr<<"\n";
	}
	return 0;
}