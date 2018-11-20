#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

map<ll,ll> mp;
set<ll> s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n,k,i,mx=0;
        cin>>n>>k;
        ll a[n+10],ans=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
            s.insert(a[i]);
        }
        for(auto z:mp)
            mx=max(mx,z.S);
        ll req=ceil(1.0*mx/k);
        req=req*k;
        for(auto it=s.begin();it!=s.end();it++)
            ans+=(req-mp[*it]);
        cout<<ans;
    }
    return 0;
}