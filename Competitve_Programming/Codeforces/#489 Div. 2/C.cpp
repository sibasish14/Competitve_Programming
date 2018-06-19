#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef unsigned long long int ll;

ll fpow(ll x,ll y)
{
	ll res=1;
	x=x%mod;
	while(y > 0)
	{
		if(y & 1)
			res=(res*x)%mod;
		y=y>>1;
		x=(x*x)%mod;
	}
	res=res%mod;
	return res;
}

ll fmul(ll a,ll b)
{
	return ((a%mod)*(b%mod))%mod;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k;
	cin>>n>>k;
	if(n==0)
	{
		cout<<0;
		return 0;
	}
	ll ans=(fmul(fpow(2,k),2*n-1) + 1)%mod;
	cout<<ans;
	return 0;
}
