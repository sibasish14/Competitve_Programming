#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

ll b[100010],c[100010],a[100010];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll i,n,m;
	cin>>n>>m;
	ll ans=0;
	for(i=2;i<=n+1;i++)
		cin>>a[i];
	a[1]=0,a[n+2]=m;
	for(i=1;i<=n+2;i++)
	{
		b[i]=b[i-1];
		c[i]=c[i-1];
		if(i%2==0)
		{
			b[i]+=(a[i]-a[i-1]);
			ans+=(a[i]-a[i-1]);
		}
		else
			c[i]+=(a[i]-a[i-1]);
	}
	ll z=0;
	for(i=1;i<n+2;i++)
	{
		z=0;
		if(a[i+1]-a[i] > 1)
			z=b[i]+(a[i+1]-a[i]-1)+c[n+2]-c[i+1];
		ans=max(ans,z);
	}
	cout<<ans;
	return 0;
}
