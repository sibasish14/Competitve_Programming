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
    ll n,r,i,j,k,ones=0;
    cin>>n>>r;
    ll a[n+1],ans[n+1],tmp[n+1];
    memset(ans,0,sizeof(ans));
    memset(tmp,0,sizeof(tmp));
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        ones+=a[i];
    }
    for(i=1;i<=n;i++)
    {
        if(a[i])
        {
            j=i;
            for(k=1;k<=r && j>=1;k++)
                ans[j--]++;
            j=i+1;
            for(k=2;k<=r && j<=n;k++)
                ans[j++]++;
        }
    }
    for(i=1;i<=n;i++)
    {
        tmp[i]=ans[i];
        if(!ans[i])
        {
            cout<<"-1";
            return 0;
        }
    }
    for(i=1;i<=n;i++)
    {
        ll f=1;
        if(a[i])
        {
            j=i;
            for(k=1;k<=r && j>=1;k++)
                tmp[j--]--;
            j=i+1;
            for(k=2;k<=r && j<=n;k++)
                tmp[j++]--;
            for(k=1;k<=n;k++)
            {
                if(!tmp[k])
                {
                    f=0;
                    break;
                }
            }
            if(f)
            {
                ones--;
                for(k=1;k<=n;k++)
                    ans[k]=tmp[k];
            }
            for(k=1;k<=n;k++)
                tmp[k]=ans[k];
        }
    }
    cout<<ones;
    return 0;
}