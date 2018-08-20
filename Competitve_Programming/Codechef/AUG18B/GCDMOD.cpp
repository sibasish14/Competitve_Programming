#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;
 
ll power(ll x,ll y)
{
    ll res=1;
    x%=mod;
    while(y > 0)
    {
        if(y & 1)
            res=(res*x)%mod;
        y=y>>1;
        x=(x*x)%mod;
    }
    return res;
}
 
ll gcd(ll a,ll b)
{
    if(a == 0)
        return b;
    return gcd(b%a,a);
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n,ans;
        cin>>a>>b>>n;
        ans=power(a,n);
        ans+=power(b,n);
        ans=gcd(ans,(abs(a-b))%mod);
        ans%=mod;
        cout<<ans<<"\n";
    }
    return 0;
}