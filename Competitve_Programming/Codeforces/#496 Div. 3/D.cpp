#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    ll n=s.size();
    ll i,dp[n+10],last[3],sum=0;
    memset(dp,0,sizeof(dp));
    last[0]=0,last[1]=-1,last[2]=-1;
    for(i=1;i<=n;i++)
    {
        dp[i]=dp[i-1];
        sum+=(s[i-1]-48);
        sum%=3;
        if(last[sum] != -1)
            dp[i]=max(dp[i],dp[last[sum]]+1);
        last[sum]=i;
    }
    cout<<dp[n];
	return 0;
}
