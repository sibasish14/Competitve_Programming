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
        ll a[n+10];
        for(i=1;i<=n;i++)
            cin>>a[i];
        for(i=2;i<n;i++)
        {
            if(a[i] == 0 && a[i-1] == 1 && a[i+1] == 1)
            {
                a[i+1]=0;
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}