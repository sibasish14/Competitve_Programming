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
        ll n,i;
        cin>>n;
        ll a[n];
        map<ll,ll> mp;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        vector<ll> v1,v2;
        for(auto z:mp)
        {
            if(z.second >= 2)
                v1.push_back(z.first);
            if(z.second >= 4)
            {
                v2.push_back(z.first);
                break;
            } 
        }
        if(v2.size())
        {
            for(i=0;i<4;i++)
                cout<<v2[0]<<" ";
            cout<<"\n";
            continue;
        }
        ll l,b,x,y;
        double value=1.0*INT32_MAX;
        for(i=0;i<v1.size()-1;i++)
        {
            x=v1[i],y=v1[i+1];
            double tmp=4.0*(x+y)*(x+y)/(x*y*1.0);
            if(tmp < value)
            {
                value=tmp;
                l=x;
                b=y;
            }
        }
        cout<<l<<" "<<l<<" "<<b<<" "<<b<<"\n";
    }
    return 0;
}