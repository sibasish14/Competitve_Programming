#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,q,i,j;
        cin>>n>>q;
        ll a[n],b[n],similar=0;
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            similar+=(a[i] == b[i]);
        }
        ll x,y,z,l,r,c;
        while(q--)
        {
            cin>>x>>y>>z;
            l=(x^similar);
            r=(y^similar);
            c=(z^similar);
            similar=0;
            for(i=l-1;i<r;i++)
                a[i]=c;
            for(i=0;i<n;i++)
                similar+=(a[i] == b[i]);
            cout<<similar<<"\n";
        }
    }
    return 0;
}