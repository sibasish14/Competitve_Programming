#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ll n,i,j;
    cin>>n;
    ll p[1010];
    for(i=0;i<n;i++)
        cin>>p[i];
    ll z=0;
    for(i=1;i<=n;i++)
    {
        map<ll,ll> mp;
        z=i;
        j=0;
        mp[z]++;
        // cout<<z<<" ";
        while(1)
        {
            z=p[z-1];
            mp[z]++;
            if(mp[z] == 2)
            {
                cout<<z<<" ";
                break;
            }
        }
    }
    return 0;
}