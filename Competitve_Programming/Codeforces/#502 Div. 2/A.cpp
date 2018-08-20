#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ll n,i,sum=0,j,z,x;
    cin>>n;
    vector<pair<ll,ll> > v;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<4;j++)
        {
            cin>>z;
            sum+=z;
        }
        v.push_back({sum,i+1});
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    vector<ll> ans;
    ll k=0;
    for(i=0;i<v.size();i++)
    {
        if(v[i].second == 1)
        {
            k=v[i].first;
            break;
        }
    }
    // cout<<k<<"\n";
    for(i=0;i<v.size();i++)
    {
        if(v[i].first == k)
        {
            x=i;
            break;
        }
    }
    for(i=0;i<v.size();i++)
        if(v[i].first == k)
            ans.push_back(v[i].second);
    sort(ans.begin(),ans.end());
    for(i=0;i<ans.size();i++)
    {
        if(ans[i] == 1)
        {
            cout<<x+i+1;
            break;
        }
    }
    return 0;
}