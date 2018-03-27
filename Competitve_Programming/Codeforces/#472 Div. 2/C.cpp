#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;

int main()
{
	ll n,u,i;
	cin>>n>>u;
	vector<ld> v(n+1);
	v[n]=1e15;
	for(i=0;i<n;i++)
		cin>>v[i];
	ld ans=-1.0;
	for(i=0;i<n-2;i++)
	{
		ll k=lower_bound(v.begin(),v.end(),v[i]+u) - v.begin();
		if(v[k] > v[i]+u)
			k--;
		if(k-i >= 2)
		{
			ld tmp=(v[k]-v[i+1])/(v[k]-v[i]);
			ans=max(ans,tmp);
		}
	}
	cout<<fixed;
	cout<<setprecision(10)<<ans<<"\n";

	return 0;
}