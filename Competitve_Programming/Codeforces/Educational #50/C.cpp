#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

ll dp[20][20][2];
vector<ll> num;

ll digit_dp(ll pos,ll cnt,ll f)
{
    if(cnt > 3) return 0;
    if(pos == num.size())
    {
        if(cnt <= 3) return 1;
        return 0;
    }
    if(dp[pos][cnt][f] != -1)
        return dp[pos][cnt][f];
    ll res=0,mx,i;
    if(!f)
        mx=num[pos];
    else mx=9;
    for(i=0;i<=mx;i++)
    {
        ll tmp_f=f;
        ll tmp_cnt=cnt;
        if(!f && i < mx)
            tmp_f=1;
        if(i != 0)
            tmp_cnt++;
        if(tmp_cnt <= 3)
            res+=digit_dp(pos+1,tmp_cnt,tmp_f);
    }
    return dp[pos][cnt][f]=res;
}

ll solve(ll n)
{
    num.clear();
    memset(dp,-1,sizeof(dp));
    while(n)
    {
        num.push_back(n%10);
        n/=10;
    }
    reverse(num.begin(),num.end());
    return digit_dp(0,0,0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        cout<<solve(r)-solve(l-1)<<"\n";
    }
    return 0;
}