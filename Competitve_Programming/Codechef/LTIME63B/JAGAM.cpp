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
        ll n,z1,z2,i,a;
        cin>>n>>z1>>z2;
        map<ll,ll> mp;
        for(i=0;i<n;i++)
        {
            cin>>a;
            mp[a]=1;
            mp[-a]=1;
        }
        if(mp[z1] == 1 || mp[z2] == 1)
        {
            cout<<"1\n";
            continue;
        }
        if(!z1 || !z2)
        {
            cout<<"2\n";
            continue;
        }
        int tie=0;
        for(auto z:mp)
        {
            if(z.second == 1)
            {
                // cout<<z.first<<" ";
                if(mp[z1-z.first] == 0 && mp[z2-z.first] == 0)
                    tie=1;
            }
        }
        if(tie)
            cout<<"0\n";
        else cout<<"2\n";
    }   
    return 0;
}