#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<fixed<<setprecision(10);
    ll n,k,i,j,z;
    cin>>n>>k;
    ll a[n+10];
    double ans=0.0;
    for(i=1;i<=n;i++)
        cin>>a[i];
    ll sum[n+10];
    sum[0]=0;
    for(i=1;i<=n;i++)
        sum[i]=sum[i-1]+a[i];
    for(i=k,z=1;i<=n;i++,z++)
    {
        for(j=i;j<=n;j++)
            ans=max(ans,1.0*(sum[j]-sum[z-1])/(j-z+1));
    }
    cout<<ans;
	return 0;
}
