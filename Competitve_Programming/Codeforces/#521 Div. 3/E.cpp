#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

map<ll,ll> mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n,i,ans=0,mx=0;
        cin>>n;
        ll a[n+10];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        vector<ll> v;
        for(auto z:mp)
        {
            v.push_back(z.S);
            mx=max(mx,z.S);
        }
        sort(v.begin(),v.end());
        for(i=1;i<=mx;i++)
        {
            ll tot=0;
            ll idx=lower_bound(v.begin(),v.end(),i)-v.begin();
            if(idx == v.size())
                continue;
            tot=i;
            ll z=i*2;
            while(1)
            {
                idx=lower_bound(v.begin()+idx+1,v.end(),z)-v.begin();
                if(idx == v.size())
                    break;
                tot+=z;
                z=z<<1;
            }
            ans=max(ans,tot);
        }
        cout<<ans;
    }
    return 0;
}