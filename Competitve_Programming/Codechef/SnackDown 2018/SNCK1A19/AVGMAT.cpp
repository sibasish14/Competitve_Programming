#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

ll t,n,m,i,j;
char ch[400][400];
ll dist[400];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin>>t;
    while(t--)
    {
        vector<pair<ll,ll> > v;
        cin>>n>>m;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                cin>>ch[i][j];
                if(ch[i][j] == '1')
                    v.push_back({i,j});
            }
        }
        memset(dist,0,sizeof(dist));
        for(i=0;i<v.size()-1;i++)
        {
            for(j=i+1;j<v.size();j++)
            {
                ll z=abs(v[i].F-v[j].F)+abs(v[i].S-v[j].S);
                dist[z]++;
            }
        }
        for(i=1;i<=n+m-2;i++)
            cout<<dist[i]<<" ";
        cout<<"\n";
    }
    return 0;
}