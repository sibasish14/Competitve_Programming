#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

ll n,m,i;
ll a[100010],b[100010];

bool check(ll mid)
{
    ll tot=0;
    for(i=1;i<=n;i++)
    {
        tot+=max(0LL,a[i]-mid/b[i]);
        if(tot > m)
            return false;
    }
    return true;
}

ll binSearch(ll low,ll high)
{
    while(low < high)
    {
        ll mid=(low+high)/2;
        if(check(mid))
            high=mid;
        else low=mid+1;
    }
    return low;
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
        ll mx=0;
        cin>>n>>m;
        for(i=1;i<=n;i++)
            cin>>a[i];
        for(i=1;i<=n;i++)
        {
            cin>>b[i];
            mx=max(mx,a[i]*b[i]);
        }
        cout<<binSearch(0,mx);
    }
    return 0;
}