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
	ll a[n+10],mn=INT64_MAX;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		mn=min(mn,a[i]);
	}
	ll z=mn/n;
	for(i=1;i<=n;i++)
		a[i]-=(z*n);
	while(1)
	{
		for(i=1;i<=n;i++)
		{
			if(a[i] <= ans)
			{
				cout<<i;
				return 0;
			}
			ans++;
		}
	}
	return 0;
}
