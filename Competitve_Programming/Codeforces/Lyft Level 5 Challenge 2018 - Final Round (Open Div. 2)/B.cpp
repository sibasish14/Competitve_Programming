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
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n,m,i,j=0,k=0;
        map<ll,ll> mp;
        cin>>n>>m;
        ll a[n+m],b[m],c[n],z;
        for(i=0;i<n+m;i++)
            cin>>a[i];
        for(i=0;i<n+m;i++)
        {
            cin>>z;
            if(z)
            {
                b[j]=a[i];
                mp[b[j]]=0;
                j++;
            }
            else
                c[k++]=a[i];
        }
        for(i=0;i<n;i++)
        {
            auto idx1=lower_bound(b,b+m,c[i]);
            if(idx1 == b+m)
                idx1--;
            ll tmp1=(*idx1)-c[i];
            if(idx1 == b)
            {
                mp[(*idx1)]++;
                continue;
            }
            auto idx2=--idx1;
            idx1++;
            ll tmp2=abs((*idx2)-c[i]);
            if(tmp1 < tmp2)
                mp[(*idx1)]++;
            else if(tmp1 >= tmp2)
                mp[(*idx2)]++;
        }
        for(i=0;i<m;i++)
        {
            cout<<mp[b[i]]<<" ";
        }
    }
    return 0;
}