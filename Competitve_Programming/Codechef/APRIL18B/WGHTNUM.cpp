#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,w,ans=0,i;
		cin>>n>>w;
		if(w>8 || w<-9)
		{
			cout<<"0\n";
			continue;
		}
		if(w >= 0)
			ans=9-w;
		else
			ans=10-abs(w);

		ll z=1,a=10,b=n-2;
		while(b > 0)
		{
			if(b & 1)
				z=(z*a)%mod;
			b=b>>1;
			a=(a*a)%mod;
		}

		ans*=z;
		ans%=mod;
		cout<<ans<<"\n";
	}
	return 0;
}