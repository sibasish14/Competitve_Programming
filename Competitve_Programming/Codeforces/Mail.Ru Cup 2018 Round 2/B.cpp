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
        ll n,m,l,i,z,x,y,ans=0;
        cin>>n>>m>>l;
        ll a[n+10],vis[n+10];
        memset(vis,0,sizeof(vis));
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i] > l)
            {
                vis[i]=1;
            }
        }
        for(i=1;i<=n;)
        {
            if(a[i] > l)
            {
                ans++;
                while(a[i] > l && i <= n)
                    i++;
            }
            while(a[i] <= l && i <= n)
                i++;
        }
        while(m--)
        {
            cin>>z;
            if(z == 1)
            {
                cin>>x>>y;
                a[x]+=y;
                if(a[x] > l && !vis[x])
                {
                    vis[x]=1;
                    if(vis[x-1] == 1 && vis[x+1] == 1)
                        ans--;
                    else if(vis[x-1] == 0 && vis[x+1] == 0)
                        ans++;
                }
            }
            else
            {
                cout<<ans<<"\n";
            }
        }
    }
    return 0;
}