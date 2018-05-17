#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,w,i;
    cin>>n>>w;
    ll a[n],dp[n+1];
    for(i=0;i<n;i++)
    	cin>>a[i];
    for(i=0;i<n+1;i++)
    	dp[i]=0;

    for(i=1;i<n+1;i++)
    	dp[i]+=(dp[i-1]+a[i-1]);
    sort(dp,dp+n+1);
    ll mn=dp[0],mx=dp[n],ans1=0,ans2=0;	
    // cout<<mn<<" "<<mx<<"\n";
    ans1=-mn,ans2=w-mx;
    if(ans1 <= ans2)
    	cout<<ans2-ans1+1<<"\n";
    else
    	cout<<"0";

	return 0;
}
