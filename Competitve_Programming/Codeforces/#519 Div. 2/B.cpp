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
        int n,i,j,f=1;
        cin>>n;
        int a[n+1],x[n+1];
        a[0]=0;
        for(i=1;i<=n;i++)
            cin>>a[i];
        vector<ll> v;
        for(i=1;i<=n;i++)
        {
            f=1;
            memset(x,0,sizeof(x));
            for(j=0;j<i;j++)
                x[j]=a[j+1]-a[j];
            for(j=1;j<=n;j++)
            {
                if(a[j] != a[j-1]+x[(j-1)%i])
                {
                    f=0;
                    break;
                }
            }
            if(f)
                v.push_back(i);
        }
        cout<<v.size()<<"\n";
        for(auto z:v)
            cout<<z<<" ";
    }
    return 0;
}