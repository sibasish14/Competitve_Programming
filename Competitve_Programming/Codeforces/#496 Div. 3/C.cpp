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
    map<ll,ll> mp;
    ll a[n],ans=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto z:mp)
    {
        mp[z.first]--;
        for(i=0;i<35;i++)
        {
            if(pow(2,i) <= z.first)
                continue;
            if(mp[pow(2,i)-z.first]>=1)
            {
                ans+=z.second;
                break;
            }
        }
        mp[z.first]++;
    }
    cout<<n-ans;
	return 0;
}
