#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

ll dp[200050];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k,i,ans=0;
    cin>>n>>k;
    ll h[n+1],mn=INT32_MAX,mx=0;
    for(i=1;i<=n;i++)
    {
        cin>>h[i];
        dp[h[i]]++;
        mn=min(mn,h[i]);
        mx=max(mx,h[i]);
    }
    for(i=mx-1;i>=1;i--)
        dp[i]+=dp[i+1];
    while(mx > mn)
    {
        ans++;
        ll z=0;
        while(mx > mn && (z+dp[mx]) <= k)
        {
            z+=dp[mx];
            mx--;
        }
    }
    cout<<ans;
    return 0;
}