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
	ll a[4]={100,20,10,5};

	for(i=0;i<5;i++)
	{
		if(n >= a[i])
		{
			ans+=n/a[i];
			n=n-(n/a[i])*a[i];
		}
	}
	if(n)
		ans+=n;
	cout<<ans;
	return 0;
}
