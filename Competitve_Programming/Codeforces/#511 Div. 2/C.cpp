#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

ll done[15000010],mp[15000010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,j,ans=0;
    cin>>n;
    ll a[n],g;
    for(i=0;i<n;i++)
        cin>>a[i];
    g=a[0];
    for(i=1;i<n;i++)
        g=__gcd(g,a[i]);
    for(i=0;i<n;i++)
    {
        a[i]/=g;
        mp[a[i]]++;
    }
    for(i=2;i<=15000010;i++)
    {
        ll tmp=0;
        if(done[i])
            continue;
        for(j=i;j<=15000010;j+=i)
        {
            done[j]=1;
            tmp+=mp[j];
        }
        ans=max(ans,tmp);
    }
    ans=n-ans;
    if(ans >= n)
        cout<<"-1\n";
    else cout<<ans<<"\n";
    return 0;
}