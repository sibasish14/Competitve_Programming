#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ll n,m,i,j,k,ans=INT64_MAX;
    cin>>n>>m;
    ll p,c;
    vector<ll> v[m+10];
    for(i=0;i<n;i++)
    {
        cin>>p>>c;
        v[p].push_back(c);
    }
    for(i=1;i<=m;i++)
        sort(v[i].begin(),v[i].end());
    for(k=1;k<=n;k++)
    {
        vector<ll> extra;
        ll tmp=0,req=k-v[1].size();
        for(i=2;i<=m;i++)
        {
            ll atleast=max(0LL,(ll)v[i].size()-k+1LL);
            for(j=0;j<atleast;j++)
            {
                tmp+=v[i][j];
                req--;
            }
            // if(req <= 0)
            //     break;
            for(j=atleast;j<v[i].size();j++)
                extra.push_back(v[i][j]);
        }
        sort(extra.begin(),extra.end());
        if(req > 0)
        {
            for(i=0;i<req;i++)
                tmp+=extra[i];
        }
        ans=min(ans,tmp);
    }
    cout<<ans;
    return 0;
}