#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

ll h,n;
ll l[200010],r[200010],desc_zero[200010],gap[200010];

ll check(ll a,ll b)
{
    return (gap[a]-gap[b-1]) < h;
}

ll binary_search(ll idx,ll low,ll high)
{
    while(low < high)
    {
        ll mid=(low+high+1)/2;
        if(check(mid,idx))
            low=mid;
        else high=mid-1;
    }
    return low;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll i,ans=0;
    cin>>n>>h;
    for(i=1;i<=n;i++)
    {
        cin>>l[i]>>r[i];
        desc_zero[i]=desc_zero[i-1]+(r[i]-l[i]);
    }
    for(i=1;i<=n;i++)
        gap[i]+=(gap[i-1]+(l[i+1]-r[i]));
    for(i=1;i<=n;i++)
    {
        ll tmp=h;
        ll idx=binary_search(i,i-1,n-1);
        tmp+=(desc_zero[idx+1]-desc_zero[i-1]);
        ans=max(ans,tmp);
    }
    cout<<ans;
    return 0;
}