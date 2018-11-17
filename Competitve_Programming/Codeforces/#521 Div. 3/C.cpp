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
    while(t--)
    {
        ll n,i,ans=0,x,sum=0;
        cin>>n;
        vector<pair<ll,ll> > v;
        vector<ll> res;
        for(i=1;i<=n;i++)
        {
            cin>>x;
            sum+=x;
            v.push_back({x,i});
        }
        sort(v.begin(),v.end());
        for(i=0;i<v.size()-1;i++)
        {
            ll z=sum-v[i].F-v[n-1].F;
            if(z == v[n-1].F)
            {
                ans++;
                res.push_back(v[i].S);
            }
        }
        ll z=sum-v[n-2].F-v[n-1].F;
        if(z == v[n-2].F)
        {
            ans++;
            res.push_back(v[n-1].S);
        }
        cout<<ans<<"\n";
        for(i=0;i<res.size();i++)
            cout<<res[i]<<" ";
    }
    return 0;
}