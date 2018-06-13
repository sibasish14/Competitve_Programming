#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

vector<ll> v(1000010);

void least()
{
	ll n=1000010,i,j;
	v[1]=1;
	for(i=2;i<=n;i++)
	{
		if(v[i]==0)
		{
			v[i]=i;
			for(j=2*i;j<=n;j+=i)
				if(v[j]==0)
					v[j]=i;
		}
	}
}

ll count(ll x)
{
	ll z=0;
	set<ll> distinct;
	// cout<<x<<"\n";
	while(x!=1)
	{
		distinct.insert(v[x]);
		x/=v[x];
		// cout<<v[x]<<" ";
	}
	// cout<<"\n";
	z=distinct.size();
	return z;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	least();
	while(t--)
	{
		ll n,m,i,j,ans=0;
		cin>>n>>m;
		for(i=n;i<m;i++)
		{
			ans+=count(i);
			// cout<<count(i)<<" ";
		}
		cout<<ans<<"\n";
	}
	return 0;
}
