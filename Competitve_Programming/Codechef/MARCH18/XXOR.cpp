#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,q,i,j;
    cin>>n>>q;
    ll a[n+10];
    for(i=0;i<n;i++)
        cin>>a[i];
 
    vector<vector<ll>> v(n,vector<ll>(31,0));
    for(i=0;i<n;i++)//convert to binary
    {
        ll z=a[i];
        ll c=0;
        while(z)
        {
            v[i][c++]=z%2;
            z/=2;
        }
    }
    ll dp[31][n];
    for(i=0;i<31;i++)//function for prefix-sum
    {
        for(j=0;j<n;j++)
        {
            if(j==0)
                dp[i][j]=v[j][i];
            else
                dp[i][j]=dp[i][j-1]+v[j][i];
        }
    }
    while(q--)
    {
        ll l,r,size,add[31]={0},ans=0;
        cin>>l>>r;
        size=r-l+1;
        for (i=0;i<31;i++)
        {
            ll tmp=0;
            if(l==1)
                tmp=dp[i][r-1];
            else
                tmp=dp[i][r-1]-dp[i][l-2];
            if(size%2)
            {
                if(tmp>(size/2))//if count of '1' is more
                    ans+=0;
                else
                    ans+=(1*pow(2,i));
            }
            else
            {
                if(tmp>=(size/2))//if count of '1' is more
                    ans+=0;
                else
                    ans+=(1*pow(2,i));
            }
        }
 
        cout<<ans<<"\n";
    }
    return 0;
}