#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

int main()
{
    
    
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,k;
        int vis[55];
        cin>>n;
        int a[100];
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        memset(vis,0,sizeof(vis));
        int z=0,f=0;
        for(i=1;i<=n;i++)
        {
            if(vis[i]) continue;
            f=0;
            for(j=1;j<=n;j++)
            {
                if(__gcd(a[i],a[j]) == 1 && i != j)
                {
                    f=1;
                    vis[i]=1;
                    vis[j]=1;
                    break;
                }
            }
            if(!f)
            {
                z=i;
                break;
            }
        }
        if(n!=1)
        if(!f)
        {
            if(a[z] != 47)
                a[z]=47;
            else a[z]=43;
            cout<<"1\n";
        }
        else cout<<"0\n";
        if(n==1)
        cout<<"0"<<endl;
        for(i=1;i<=n;i++)
            cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}