#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

map<ll,ll> m1,m2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,x,i;
    cin>>n>>x;
    ll a[n],f=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        m1[a[i]]++;
        if(m1[a[i]] >= 2)
        {
            cout<<0;
            return 0;
        }
    }
    for(i=0;i<n;i++)
    {
        m2[(a[i] & x)]++;
        if(m2[(a[i] & x)] >= 2)
            f=1;
        if(m1[(a[i] & x)] >= 1 && (a[i] & x) != a[i])
        {
            cout<<1;
            return 0;
        }
    }
    if(f)
        cout<<2;
    else cout<<-1;
    return 0;
}
