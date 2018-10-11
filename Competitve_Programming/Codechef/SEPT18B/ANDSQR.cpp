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
        ll n,q,i,j;
        cin>>n>>q;
        ll a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        while(q--)
        {
            ll l,r,ans=0;
            cin>>l>>r;
            l--;
            r--;
            for(i=l;i<=r;i++)
            {
                ll z=a[i];
                if((ll)sqrt(z)*(ll)sqrt(z) == z)
                    ans++;
                for(j=i+1;j<=r;j++)
                {
                    z=(z&a[j]);
                    if((ll)sqrt(z)*(ll)sqrt(z) == z)
                        ans++;
                }
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}