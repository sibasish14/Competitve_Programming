#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
#define pb push_back
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,q,i;
        cin>>n>>q;
        ll b[n+10];
        for(i=1;i<=n-1;i++)
            cin>>b[i];
        ll pref1[n+10],pref2[n+10];
        memset(pref1,0,sizeof(pref1));
        memset(pref2,0,sizeof(pref2));
        pref1[1]=b[1];
        for(i=2;i<=n-1;i++)
        {
            if(i & 1)
                pref1[i]=pref1[i-1]+b[i];
            else pref1[i]=pref1[i-1]-b[i];
        }
        pref2[1]=(-b[1]);
        for(i=2;i<=n-1;i++)
        {
            if(i & 1)
                pref2[i]=pref2[i-1]-b[i];
            else pref2[i]=pref2[i-1]+b[i];
        }
        while(q--)
        {
            ll x,y;
            cin>>x>>y;
            if(x > y)
                swap(x,y);
            if(x == y)
            {
                cout<<"UNKNOWN\n";
                continue;
            }
            if(x+1 == y)
            {
                cout<<b[x]<<"\n";
                continue;
            }
            if((y-x) & 1)
            {
                if(x & 1)
                    cout<<pref1[y-1]-pref1[x-1]<<"\n";
                else cout<<pref2[y-1]-pref2[x-1]<<"\n";
            }
            else cout<<"UNKNOWN\n";
        }
    }
    return 0;
}