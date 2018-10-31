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
        ll n,i,j,cnt=0;
        cin>>n;
        ll a[n+1],b[n+1],vis[n+1];
        memset(vis,0,sizeof(vis));
        for(i=1;i<=n;i++)
            cin>>a[i];
        j=1;
        for(i=1;i<=n;i++)
        {
            cin>>b[i];
            cnt=0;
            if(vis[b[i]])
            {
                cout<<"0 ";
                continue;
            }
            vis[a[j]]=1;
            cnt++;
            while(a[j] != b[i] && j <= n)
            {
                j++;
                cnt++;
                vis[a[j]]=1;
            }
            j++;
            cout<<cnt<<" ";
        }
    }
    return 0;
}