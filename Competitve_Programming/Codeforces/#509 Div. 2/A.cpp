#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,ans=0;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=n-1;i>0;i--)
    {
        ans+=(a[i]-a[i-1]-1);
    }
    cout<<ans;
    return 0;
}