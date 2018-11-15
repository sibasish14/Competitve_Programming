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
    // cin>>t;
    while(t--)
    {
        ll n,i,ans=0;
        cin>>n;
        for(i=2;i<=n;i++)
        {
            ll cnt=n/i;
            ans+=((cnt*(cnt+1)/2)-1)*4;
        }
        cout<<ans;
    }
    return 0;
}