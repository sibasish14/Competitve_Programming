#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

ll get(ll x,ll y)
{
	string a,b;
	a=to_string(x),b=to_string(y);
	ll u=a.size(),v=b.size(),z=0;
	for(char ch:a)
	{
		while(b[z]!=ch && z<v)
			z++;
		if(z==v)
			return INT64_MAX;
		z++;
	}
	return v-u;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,i,ans=INT64_MAX;
	cin>>n;
	for(i=1;i*i<=n;i++)
		ans=min(ans,get(i*i,n));
	if(ans==INT64_MAX)
		cout<<"-1";
	else
		cout<<ans;
	return 0;
}
