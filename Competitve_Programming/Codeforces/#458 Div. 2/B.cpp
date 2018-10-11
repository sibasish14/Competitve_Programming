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
    ll n,i,f=0;
    cin>>n;
    ll a[n];
    map<ll,ll> mp;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(mp[a[i]]%2)
        {
            cout<<"Conan\n";
            return 0;
        }
    }
    cout<<"Agasa\n";
    return 0;
}