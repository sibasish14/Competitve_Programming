#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

map<ll,ll> mp;
set<ll> s;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m,d,i,j;
    cin>>n>>m>>d;
    ll a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    j=1;
    while(!s.empty())
    {
        ll start=*s.begin();
        mp[start]=j;
        s.erase(s.begin());
        while(s.upper_bound(start+d) != s.end())
        {
            auto z=s.upper_bound(start+d);
            mp[*z]=j;
            start=*z;
            s.erase(z);
        }
        if(s.empty()) break;
        j++;
    }
    cout<<j<<"\n";
    for(i=0;i<n;i++)
        cout<<mp[a[i]]<<" ";
    return 0;
}