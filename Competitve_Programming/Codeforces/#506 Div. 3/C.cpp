#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

ll prel[300010],prer[300010],sul[300010],sur[300010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i;
    cin>>n;
    ll l[n+10],r[n+10],ans=0;
    for(i=1;i<=n;i++)
        cin>>l[i]>>r[i];
    prel[0]=sul[n+1]=0;
    prer[0]=sur[n+1]=INT32_MAX;
    for(i=1;i<=n;i++)
    {
        prel[i]=max(prel[i-1],l[i]);
        prer[i]=min(prer[i-1],r[i]);
    }
    for(i=n;i>=1;i--)
    {
        sul[i]=max(sul[i+1],l[i]);
        sur[i]=min(sur[i+1],r[i]);
    }
    for(i=1;i<=n;i++)
        ans=max(ans,max(0LL,min(prer[i-1],sur[i+1])-max(prel[i-1],sul[i+1])));
    cout<<ans;
    return 0;
}