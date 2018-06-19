#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef unsigned long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll l,r,x,y,i;
	cin>>l>>r>>x>>y;
	ll prod=x*y,c=0,w;
	set<ll> s;
	for(i=1;i<=sqrt(y);i++)
	{
		if(y%i==0)
		{
			s.insert(i);
			s.insert(y/i);
		}
	}
	for(auto z:s)
	{
		if(l <= z && z <= r)
		{
			w=prod/z;
			if(l <= w && w <= r && __gcd(z,w) == x)
				c++;
		}
	}
	cout<<c;
	return 0;
}
