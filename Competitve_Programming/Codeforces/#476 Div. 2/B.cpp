#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll k,n,i,j,m;
	cin>>n>>k;
	string ch[150];
	ll cnt[150][150];
	for(i=0;i<n;i++)
		cin>>ch[i];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cnt[i][j]=0;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n-k;j++)
		{
			ll f=1;
			for(m=0;m<k;m++)
			{
				if(ch[i][j+m]=='#')
				{
					f=0;
					break;
				}
			}
			if(f)
				for(m=0;m<k;m++)
					cnt[i][j+m]++;
		}
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<=n-k;i++)
		{
			ll f=1;
			for(m=0;m<k;m++)
			{
				if(ch[i+m][j]=='#')
				{
					f=0;
					break;
				}
			}
			if(f)
				for(m=0;m<k;m++)
					cnt[i+m][j]++;
		}
	}

	ll r=1,c=1,max=0;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(max <= cnt[i][j])
			{
				max=cnt[i][j];
				r=i+1;
				c=j+1;
			}
		}
	}
	cout<<r<<" "<<c;
	return 0;
}
