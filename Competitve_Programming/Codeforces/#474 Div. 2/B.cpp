#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cout<<flush;
	ll n,k1,k2,i;
	cin>>n>>k1>>k2;
	ll a[n],b[n],c[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];

	for(i=0;i<n;i++)
		c[i]=abs(a[i]-b[i]);
	ll k=k1+k2;

	while(1)
	{
		if(!k)
			break;
		ll mx=0;
		for(i=1;i<n;i++)
			if(c[mx] < c[i])
				mx=i;
		if(c[mx] == 0)
			break;
		c[mx]--;
		k--;
	}

	ll ans=0;
	if(k == 0)
	{
		for(i=0;i<n;i++)
			ans+=(c[i]*c[i]);
	}
	else
		if(k%2 == 1)
			ans=1;

	cout<<ans;
	return 0;
}
