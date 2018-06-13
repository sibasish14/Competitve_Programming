#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll i,n,a,b,c,T;
	cin>>n>>a>>b>>c>>T;
	ll t,ans=0;
	for(i=0;i<n;i++)
	{
		cin>>t;
		if(c>=b)
			ans+=(a+(T-t)*(c-b));
		else
			ans+=a;
	}

	cout<<ans<<"\n";
	return 0;
}