#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        vector<ll> P[55];
        vector<ll> factors[55];
        int vis[55];
        memset(vis,0,sizeof(vis));
        int n,i,j,k,f=0;
        cin>>n;
        int a[n+1];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(vis[a[i]])
                continue;
            else
            {
                vis[a[i]]=1;
                for(j=0;j<15;j++)
                {
                    if(a[i]%prime[j] == 0)
                    {
                        factors[a[i]].push_back(prime[j]);
                        P[prime[j]].push_back(a[i]);
                    }
                }
            }
        }
        memset(vis,0,sizeof(vis));
        for(i=1;i<=n;i++)
        {
            int q=a[i];
            if(vis[q])
                continue;
            vis[q]=1;
            f=0;
            int x=0,y=0,z=0;
            if(factors[q].size() == 1)
                x=y=z=factors[q][0];
            else if(factors[q].size() == 2)
            {
                x=factors[q][0];
                y=z=factors[q][1];
            }
            else if(factors[q].size() == 3)
            {
                x=factors[q][0];
                y=factors[q][1];
                z=factors[q][2];
            }
            for(j=0;j<15;j++)
            {
                if(x != prime[j] && y != prime[j] && z != prime[j] && P[prime[j]].size())
                {
                    for(k=0;k<P[prime[j]].size();k++)
                    {
                        int tmp=P[prime[j]][k];
                        if(tmp%x != 0 && tmp%y != 0 && tmp%z != 0)
                        {
                            f=1;
                            break;
                        }
                    }
                }
                if(f)
                    break;
            }
            if(!f)
                break;
        }
        if(n > 1)
        {
            if(!f)
            {
                if(a[1] == a[2] && a[1] == 47)
                    a[1]=43;
                else a[1]=47;
                cout<<"1\n";
            }
            else cout<<"0\n";
        }
        if(n == 1) cout<<"0\n";
        for(i=1;i<=n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}