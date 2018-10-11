#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m,i,j,k,prod=1;
    cin>>n>>m;
    ll a[n],b[m],ans=INT64_MAX,tmp=0;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    for(i=0;i<n;i++)
    {
        tmp=INT64_MIN;
        for(j=0;j<n;j++)
            if(j != i)
                for(k=0;k<m;k++)
                    tmp=max(tmp,a[j]*b[k]);
        ans=min(ans,tmp);
    }
    cout<<ans;
    return 0;
}