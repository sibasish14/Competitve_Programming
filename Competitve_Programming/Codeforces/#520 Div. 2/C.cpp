#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

ll pref[100010];

ll fast_expo(ll a,ll b)
{
    ll res=1;
    while(b > 0)
    {
        if(b & 1)
            res=(res*a)%mod;
        b=b>>1;
        a=(a*a)%mod;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n,q,i;
        cin>>n>>q;
        string s;
        cin>>s;
        for(i=1;i<=n;i++)
            pref[i]=pref[i-1]+(s[i-1] == '1');
        while(q--)
        {
            ll l,r,one=0,zero=0,ans=0;
            cin>>l>>r;
            one=pref[r]-pref[l-1];
            zero=(r-l+1)-one;
            ans=fast_expo(2,one)-1;
            ans=(ans+(ans*(fast_expo(2,zero)-1))%mod)%mod;
            cout<<ans<<"\n";
        }
    }
    return 0;
}