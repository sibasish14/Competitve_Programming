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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i,j;
        cin>>n>>k;
        ll a[n+1],ans=0;
        map<ll,ll> mp;
        set<ll> s;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
            s.insert(a[i]);
        }
        sort(a,a+n);
        ll x=a[n-k];
        auto it=s.lower_bound(x);
        while(it != s.end())
        {
            ans+=(mp[*it]);
            it++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}