#include<bits/stdc++.h>
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
        ll n,k,i;
        cin>>n>>k;
        ll a[n],sumb=0,sumc=0;
        vector<ll> b;
        vector<ll> c;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(i%2 == 0)
                b.push_back(a[i]);
            else
                c.push_back(a[i]);
        }
        if(sumc > sumb)
            cout<<"YES\n";
        else
        {
            sort(b.begin(),b.end(),greater<ll>());
            sort(c.begin(),c.end());
            ll mn = min((ll)b.size(),min((ll)c.size(),k));
            for(i=0;i<mn;i++)
                if(b[i] > c[i])
                    swap(b[i],c[i]);
            for(i=0;i<b.size();i++)
                sumb+=b[i];
            for(i=0;i<c.size();i++)
                sumc+=c[i];   
            if(sumc > sumb)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}
