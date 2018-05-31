#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,i;
	cin>>n;
	ll a[n],b[n],ans[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		b[i]=0;
	}
	map<ll,ll> mp;
	for(i=0;i<n;i++)
	{
		ll z=a[i];
		while(1)
		{
			if(mp.find(z) != mp.end())
			{
				b[mp[z]]=1;
				mp.erase(mp.find(z));
				z*=2;
			}
			else
			{
				mp[z]=i;
				break;
			}
		}
		a[i]=z;
	}
	ll c=0,j=0;
	for(i=0;i<n;i++)
	{
		if(b[i]==0)
		{
			c++;
			ans[j++]=a[i];
		}
	}
	cout<<c<<"\n";
	for(i=0;i<j;i++)
		cout<<ans[i]<<" ";
	return 0;
}
