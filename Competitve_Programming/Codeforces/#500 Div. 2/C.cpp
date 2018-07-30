#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i;
    cin>>n;
    ll a[2*n+10];
    for(i=0;i<2*n;i++)
        cin>>a[i];
    sort(a,a+2*n);
    ll ans=(a[n-1]-a[0])*(a[2*n-1]-a[n]);
    for(i=1;i<n;i++)
        ans=min(ans,(a[2*n-1]-a[0])*(a[i+n-1]-a[i]));
    cout<<ans;
    return 0;
}
