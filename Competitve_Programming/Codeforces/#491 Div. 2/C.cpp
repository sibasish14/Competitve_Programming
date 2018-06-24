#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,i,ans=0;
	cin>>n;
	ll l=1,r=n,z=n;
	while(l<=r)
	{
		ll mid=(l+r)/2;
		ll x=0,y=n;
		while(y)
		{
			x+=min(y,mid);
			y-=min(y,mid);
			y-=y/10;
		}
		if(x*2 >= n)
		{
			r=mid-1;
			ans=mid;
		}
		else
			l=mid+1;
	}
	cout<<ans;
	return 0;
}
