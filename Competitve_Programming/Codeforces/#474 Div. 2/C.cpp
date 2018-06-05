#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll x,d,ans=1,z,i;
	cin>>x>>d;
	vector<ll> v;

	while(x > 0)
	{
		z=0;
		while((1<<(z+1)) - 1 <= x)
			z++;
		for(i=0;i<z;i++)
			v.push_back(ans);
		ans+=d;
		x-=((1<<z) - 1);
	}
	cout<<v.size()<<"\n";
	for(auto p:v)
		cout<<p<<" ";
	return 0;
}
