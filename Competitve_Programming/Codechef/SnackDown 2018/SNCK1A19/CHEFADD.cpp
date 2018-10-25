#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

ll dp[35][35][35][2];
vector<ll> C;

vector<ll> bits(ll n)
{
    vector<ll> v;
    while(n)
    {
        v.push_back(n%2);
        n/=2;
    }
    return v;
}

ll count_bits(ll n)
{
    ll cnt=0;
    while(n)
    {
        cnt+=(n%2);
        n/=2;
    }
    return cnt;
}

ll solve(ll pos,ll a,ll b,ll carry)
{
    if(a < 0 || b < 0)
        return 0;
    if(pos == C.size())
    {
        if(!a && !b && !carry)
            return 1;
        return 0;
    }
    if(dp[pos][a][b][carry] != -1)
        return dp[pos][a][b][carry];
    ll ans=0;
    if(C[pos] == 0)
    {
        if(carry)
            ans=solve(pos+1,a-1,b,1)+solve(pos+1,a,b-1,1);
        else ans=solve(pos+1,a-1,b-1,1)+solve(pos+1,a,b,0);
        return dp[pos][a][b][carry]=ans;
    }
    else
    {
        if(carry)
            ans=solve(pos+1,a-1,b-1,1)+solve(pos+1,a,b,0);
        else ans=solve(pos+1,a-1,b,0)+solve(pos+1,a,b-1,0);
        return dp[pos][a][b][carry]=ans;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll cntA=count_bits(a);
        ll cntB=count_bits(b);
        C=bits(c);
        memset(dp,-1,sizeof(dp));
        cout<<solve(0,cntA,cntB,0)<<"\n";
    }
    return 0;
}