#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll n,k,i,sum=0;
	cin>>n>>k;
	ll dp[n+1],a[n+1],t[n+1];
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
		cin>>t[i];
	dp[0]=0;
	for(i=1;i<=n;i++)
	{
		if(!t[i])
			dp[i]=dp[i-1]+a[i];
		else
		{
			sum+=a[i];
			dp[i]=dp[i-1];
		}
	}
	ll mx=0;
	for(i=1;i<=n-k+1;i++)
		mx=max(mx,dp[i+k-1]-dp[i-1]);
	cout<<sum+mx<<"\n";
	return 0;
}