#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

ll sol(ll mid,ll n,ll k)
{
	ll x=n/mid;
	return (ll)ceil(1.0*x/k);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k,m,d,i,l,r,z,ans=0;
	cin>>n>>k>>m>>d;
	for(i=1;i<=d;i++)
	{
		z=0;
		l=1,r=m;
		while(l <= r)
		{
			ll mid=l+(r-l)/2;
			if(sol(mid,n,k) == i)
			{
				z=i*mid;
				l=mid+1;
			}
			else if(sol(mid,n,k) > i)
				l=mid+1;
			else
				r=mid-1;
		}
		ans=max(ans,z);
	}
	cout<<ans;
	return 0;
}
