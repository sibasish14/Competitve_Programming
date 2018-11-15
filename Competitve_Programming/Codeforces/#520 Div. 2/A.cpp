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
        ll n,i,ans=0,tmp=1;
        cin>>n;
        ll a[n+10];
        a[0]=0;
        a[n+1]=1001;
        for(i=1;i<=n;i++)
            cin>>a[i];
        for(i=0;i<=n;i++)
        {
            if(a[i] == a[i+1]-1)
            {
                tmp++;
            }
            else
            {
                if(tmp >= 3)
                    ans=max(tmp-2,ans);
                tmp=1;
            }
        }
        ans=max(ans,tmp-2);
        cout<<ans;
    }
    return 0;
}