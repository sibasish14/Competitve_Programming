#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,m,i,ans=0;
		cin>>n>>k>>m;
		ll a[n],b[n],c[k],d[m];
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
		{
			cin>>b[i];
			a[i]=a[i]-b[i];
			ans+=a[i];
		}
		sort(a,a+n);
		multiset<ll> ms;
		for(i=0;i<k;i++)
		{
			cin>>c[i];
			ms.insert(c[i]);
		}
		for(i=0;i<m;i++)
		{
			cin>>d[i];
			ms.insert(d[i]);
		}
		multiset<ll>:: iterator it;
		for(i=0;i<n;i++)
		{
			if(!(ms.empty() || *ms.begin()>a[i]))
			{
				it=ms.upper_bound(a[i]);
				it--;
				ans-=(*it);
				ms.erase(it);
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}