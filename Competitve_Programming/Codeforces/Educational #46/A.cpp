#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,i,j;
	cin>>n;
	int ans=0,f,vis[n]={0};
	string z[n],y[n];
	for(i=0;i<n;i++)
	{
		cin>>z[i];
	}
	sort(z,z+n);
	for(i=0;i<n;i++)
	{
		cin>>y[i];
	}
	sort(y,y+n);
	int c=0;
	for(i=0;i<n;i++)
	{
		f=0;
		for(j=0;j<n;j++)
		{
			if(z[i] == y[j] && !vis[j])
			{
				vis[j]=1;
				c++;
				f=1;
				break;
			}
		}
	}	
	ans=n-c;
	cout<<ans;
	return 0;
}
