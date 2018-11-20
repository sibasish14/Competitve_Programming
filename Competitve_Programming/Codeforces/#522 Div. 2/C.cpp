#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n,i,j,k;
        cin>>n;
        ll a[n+10],dp[n+10][6],par[n+10][6];
        memset(par,0,sizeof(par));
        memset(dp,0,sizeof(dp));
        for(i=1;i<=n;i++)
            cin>>a[i];
        for(i=1;i<=5;i++)
            dp[1][i]=1;
        for(i=2;i<=n;i++)
        {
            for(j=1;j<=5;j++)
            {
                for(k=1;k<=5;k++)
                {
                    if(a[i] == a[i-1])
                    {
                        if(dp[i-1][k] && j != k)
                        {
                            dp[i][j]=1;
                            par[i][j]=k;
                        }
                    }
                    else if(a[i] < a[i-1])
                    {
                        if(dp[i-1][k] && j < k)
                        {
                            dp[i][j]=1;
                            par[i][j]=k;
                        }
                    }
                    else if(a[i] > a[i-1])
                    {
                        if(dp[i-1][k] && j > k)
                        {
                            dp[i][j]=1;
                            par[i][j]=k;
                        }
                    }
                }
            }
        }
        vector<ll> ans;
        for(i=1;i<=5;i++)
        {
            if(dp[n][i])
            {
                while(n)
                {
                    ans.push_back(i);
                    i=par[n][i];
                    n--;
                }
                reverse(ans.begin(),ans.end());
                for(auto z:ans)
                    cout<<z<<" ";
                return 0;
            }
        }
        cout<<"-1";
    }
    return 0;
}