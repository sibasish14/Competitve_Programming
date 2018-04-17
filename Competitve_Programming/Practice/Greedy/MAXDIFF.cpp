#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,i,sum1=0,sum2=0,sum=0,ans;
		cin>>n>>k;
		ll a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		sort(a,a+n);
		for(i=0;i<k;i++)
			sum1+=a[i];
		for(i=n-1;i>=n-k;i--)
			sum2+=a[i];
		ans=max(abs(sum1-(sum-sum1)),abs(sum2-(sum-sum2)));
		cout<<ans<<"\n";
	}
	return 0;
}