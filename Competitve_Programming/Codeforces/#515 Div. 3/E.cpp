#include<bits/stdc++.h>
#define mod 998244353
#define F first
#define S second
using namespace std;
typedef long long int ll;

ll fast_expo(ll a,ll b,ll m)
{
    ll ans=1;
    while(b)
    {
        if(b & 1)
            ans=(ans*a)%mod;
        b=b>>1;
        a=(a*a)%m;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m,i,ans=0;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    ll pref_1[200010];
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    while(n < m)
    {
        a+=('0');
        n++;
    }
    while(m < n)
    {
        b+=('0');
        m++;
    }
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    pref_1[0]=(b[i]-48);
    for(i=1;i<m;i++)
        pref_1[i]=pref_1[i-1]+(b[i]-48);
    for(i=0;i<n;i++)
    {
        if(a[i] == '1')
        {
            ans=ans+pref_1[i]*fast_expo(2,n-i-1,mod);
            ans%=mod;
        }
    }
    cout<<ans;
    return 0;
}