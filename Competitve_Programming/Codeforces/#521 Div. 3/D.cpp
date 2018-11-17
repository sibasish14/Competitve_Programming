#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

map<ll,ll> mp;
vector<ll> ans;
vector<ll> tmp;
ll n,k,i;

bool check(ll mid)
{
    ll tot=0;
    tmp.clear();
    for(auto z:mp)
    {
        tot+=(z.S/mid);
        for(i=0;i<(z.S/mid);i++)
            tmp.push_back(z.F);
    }
    if(tot >= k)
        return true;
    return false;
}

void binSearch(ll low,ll high)
{
    while(low <= high)
    {
        ll mid=(low+high)/2;
        if(check(mid))
        {
            ans=tmp;
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
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
        cin>>n>>k;
        ll a[n+10],mx=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        for(auto z:mp)
            mx=max(mx,z.S);
        binSearch(1,mx);
        for(i=0;i<k;i++)
            cout<<ans[i]<<" ";
    }
    return 0;
}