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
    ll a[n];
    map<ll,ll> mp;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    ll k=0;
    for(auto z:mp)
        k=max(k,z.second);
    cout<<n-k;
	return 0;
}