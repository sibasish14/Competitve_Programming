#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k,i,j,ans=INT_MAX;
    cin>>n>>k;
    string s;
    cin>>s;
    map<ll,ll> mp;
    for(i=0;i<n;i++)
        mp[s[i]-65]++;
    for(i=0;i<k;i++)
    {
        ans=min(ans,mp[i]);
    }
    cout<<ans*k;
    return 0;
}