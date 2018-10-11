#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

map<ll,ll> mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k,i;
    cin>>n>>k;
    for(i=1;i<=k;i++)
    {
        mp[n%i]++;
        if(mp[n%i] >= 2)
        {
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
}