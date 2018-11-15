#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

map<ll,ll> mp;
map<ll,char> ans;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,j,k,z,f;
    cin>>n;
    ll a[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        mp[a[i]]=i;
        ans[i]='A';
    }
    ans[mp[n]]='B';
    for(i=n;i>=1;i--)
    {
        z=mp[i];
        j=z-i;
        k=z+i;
        f=0;
        while(j >= 1 || k <= n)
        {
            if(f)
                break;
            if(j >= 1 && ans[j] == 'B' && (mp[i]-j)%i == 0)
                f=1;
            if(k <= n && ans[k] == 'B' && (k-mp[i])%i == 0)
                f=1;
            j-=i;
            k+=i;
        }
        if(!f)
            ans[mp[i]]='B';
    }
    for(i=1;i<=n;i++)
        cout<<ans[i];
    return 0;
}