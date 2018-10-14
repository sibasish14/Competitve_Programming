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
        ll dest,v,l,r,ans=0;
        cin>>dest>>v>>l>>r;
        ll z=(l-1)/v;
        ll x=(r/v);
        ll y=(dest/v);
        ans=x-z;
        ans=y-ans;
        cout<<ans<<"\n";
    }
    return 0;
}