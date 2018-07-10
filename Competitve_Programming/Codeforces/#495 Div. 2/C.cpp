#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll n,i,ans=0;
    cin>>n;
    ll a[n],vis[100010];
    map<ll,ll> mp;
    memset(vis,0,sizeof(vis));
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(i=0;i<n-1;i++)
    {
        mp[a[i]]--;
        if(!mp[a[i]])
            mp.erase(a[i]);
        if(!vis[a[i]])
        {
            vis[a[i]]=1;
            ans+=mp.size();
        }
    }
    cout<<ans;
	return 0;
}
