#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,s,i,ans=0;
    cin>>n>>s;
    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    if(n == 1)
    {
        cout<<abs(s-a[0]);
        return 0;
    }
    sort(a,a+n);
    ll z=n/2,x=0;
    x=lower_bound(a,a+n,s)-a;
    // cout<<x<<" "<<z<<"\n";
    if(x < z)
    {
        for(i=x;i<=z;i++)
        {
            ans+=abs(s-a[i]);
        }
        cout<<ans;
    }
    else if(x > z)
    {
        if(a[x] != s)
            x--;
        for(i=z;i<=x;i++)
        {
            ans+=abs(s-a[i]);
        }
        cout<<ans;
    }
    else
    {
        cout<<abs(s-a[x]);
    }
    return 0;
}