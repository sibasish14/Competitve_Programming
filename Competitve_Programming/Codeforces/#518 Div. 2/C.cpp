#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

vector<ll> adj[200];
vector<pair<ll,ll> > ans[200];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n,m,i,k,x,y;
        cin>>n>>m;
        for(i=0;i<m;i++)
        {
            cin>>x>>y;
            if(x < y)
                swap(x,y);
            adj[x].push_back(y);
        }
        k=1;
        for(i=1;i<=n;i++)
        {
            if(adj[i].size())
            {
                for(auto z:adj[i])
                {
                    ans[i].push_back({k,i});
                    ans[z].push_back({k,z});
                    k++;
                }
            }
            else
            {
                ans[i].push_back({k,i});
                k++;
            }
        }
        for(i=1;i<=n;i++)
        {
            cout<<ans[i].size()<<"\n";
            for(auto z:ans[i])
                cout<<z.F<<" "<<z.S<<"\n";
        }
    }
    return 0;
}