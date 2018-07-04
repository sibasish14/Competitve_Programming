#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
    cin>>t;
    while(t--)
    {
        ll n,k,i,j,ans=0;
        cin>>n>>k;
        ll dp[n+10];
        memset(dp,0,sizeof(dp));
        string s;
        cin>>s;
        for(i=1;i<n;i++)
        {
            if(s[i] != s[i-1])
                dp[i]=dp[i-1]+1;
            else
                dp[i]=dp[i-1];
        }
        for(i=k;i<n;i++)
            ans+=(dp[i]-dp[i-k]);
        cout<<ans<<"\n";
    }
	return 0;
}
