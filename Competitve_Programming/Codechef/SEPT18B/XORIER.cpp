#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,even=0,odd=0;
        cin>>n;
        ll a[n];
        unordered_set<ll> s;
        set<ll> s_odd,s_even;
        map<ll,ll> mp;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            s.insert(a[i]);
            if(a[i]%2)
            {
                odd++;
                s_odd.insert(a[i]);
            }
            else
            {
                even++;
                s_even.insert(a[i]);
            }
            mp[a[i]]++;
        }
        ll ans=even*(even-1)/2;
        ans+=(odd*(odd-1)/2);
        auto it=s.begin();
        for(;it!=s.end();it++)
        {
            ll z=mp[(*it)];
            if(z > 1)
            {
                ans-=(z*(z-1)/2);
            }
        }
        for(auto it:s_odd)
        {
            ll x=(it);
            ll y=x+2;
            if(mp[y] >= 1 && (y^x) == 2)
            {
                ans-=(mp[y]*mp[x]);
            }
        }
        for(auto it:s_even)
        {
            ll x=(it);
            ll y=x+2;
            if(mp[y] >= 1 && (y^x) == 2)
            {
                ans-=(mp[y]*mp[x]);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}