#include<bits/stdc++.h>
#define mod 998244353
using namespace std;
typedef long long int ll;

ll ncr[1010][1010],dp[1010],a[1010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll n,i,j,ans=0;
    cin>>n;
    for(i=0;i<=1000;i++)
    {
        ncr[i][0]=ncr[i][i]=1;
        for(j=1;j<i;j++)
            ncr[i][j]=(ncr[i-1][j-1]+ncr[i-1][j])%mod;
    }
    for(i=1;i<=n;i++)
        cin>>a[i];
    dp[n+1]=1;
    for(i=n;i>=1;i--)
    {
        if(a[i] > 0)
        {
            for(j=a[i]+i+1;j<=n+1;j++)
            {
                dp[i]+=dp[j]*ncr[j-i-1][a[i]];
                dp[i]%=mod;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        ans=(ans+dp[i])%mod;
    }
    cout<<ans;
	return 0;
}
