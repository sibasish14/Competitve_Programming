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
    ll n,i,j,k;
    cin>>n;
    ll a[n+1],b[n+1],ans[n+1];
    vector<ll> v;
    for(i=1;i<n;i++)
        cin>>a[i];
    for(i=1;i<n;i++)
        cin>>b[i];
    ll f=0;
    for(k=0;k<4;k++)
    {
        ans[1]=k;
        for(i=1;i<n;i++)
        {
            f=0;
            for(j=0;j<4;j++)
            {
                if((ans[i]|j) == a[i] && (ans[i]&j) == b[i])
                {
                    f=1;
                    ans[i+1]=j;
                    break;
                }
            }
            if(!f)
                break;
        }
        if(f)
        {
            cout<<"YES\n";
            for(i=1;i<=n;i++)
                cout<<ans[i]<<" ";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}