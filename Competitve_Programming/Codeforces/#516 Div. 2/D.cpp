#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

char arr[2010][2010];
ll dx[4]={1,-1,0,0};
ll dy[4]={0,0,1,-1};
ll dist[2010][2010];

void bfs(ll sx,ll sy,ll d)
{
    ll i,j;
    dist[sx][sy]=d;
    queue<pair<ll,ll> > q;
    q.push({sx,sy});
    while(!q.empty())
    {
        auto z=q.front();
        q.pop();
        ll x=z.F;
        ll y=z.S;
        for(i=0;i<4;i++)
        {
            ll nx=x+dx[i];
            ll ny=y+dy[i];
            if(arr[nx][ny] == '.')
            {
                if(ny >= y)
                {
                    if(dist[nx][ny] > dist[x][y])
                    {
                        dist[nx][ny]=dist[x][y];
                        q.push({nx,ny});
                    }
                }
                else
                {
                    if(dist[nx][ny] > dist[x][y]+1)
                    {
                        dist[nx][ny]=dist[x][y]+1;
                        q.push({nx,ny});
                    }
                }
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m,r,c,x,y,i,j;
    cin>>n>>m>>r>>c>>x>>y;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            dist[i][j]=INT64_MAX;
            cin>>arr[i][j];
        }
    }
    ll L=0,R=0,ans=0;
    bfs(r,c,0);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            L=dist[i][j];
            R=j-c+L;
            if(L <= x && R <= y)
                ans++;
        }
    }
    cout<<ans;
    return 0;
}