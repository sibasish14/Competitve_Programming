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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,days=0;
        cin>>n;
        ll a[n+1],pref[n+1];
        for(i=1;i<=n;i++)
            cin>>a[i];
        pref[1]=a[1];
        for(i=2;i<=n;i++)
            pref[i]=a[i]+pref[i-1];
        ll sum=0,pos=1;
        while(pos < n)
        {
            days++;
            pos+=pref[pos];
            if(pos >= n)
                break;
            sum=pref[pos];
        }
        cout<<days<<"\n";
    }
    return 0;
}