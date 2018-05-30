#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,i,j,ans=INT64_MAX;
	cin>>n;
	ll s[n],c[n];
	for(i=0;i<n;i++)
		cin>>s[i];
	for(i=0;i<n;i++)
		cin>>c[i];
	ll dp[n][3];

	for(i=0;i<n;i++)
		for(j=0;j<3;j++)
			dp[i][j]=INT32_MAX;

	for(i=0;i<n;i++)
	{
		dp[i][0]=c[i];
		for(j=0;j<i;j++)
		{
			if(s[i] > s[j])
			{
				dp[i][1]=min(dp[i][1],dp[j][0]+c[i]);
				dp[i][2]=min(dp[i][2],dp[j][1]+c[i]);
			}
		}
		ans=min(ans,dp[i][2]);
	}
	if(ans >= 3 && ans <= 300000000)
		cout<<ans;
	else cout<<"-1";
	return 0;
}
