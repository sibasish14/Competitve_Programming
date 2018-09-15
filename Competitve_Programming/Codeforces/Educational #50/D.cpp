#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,m,i,j,sum=0,ans=0;
    cin>>n;
    ll a[n],asum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cin>>m;
    ll b[m],bsum=0;
    for(i=0;i<m;i++)
    {
        cin>>b[i];
        sum-=b[i];
    }
    if(sum)
    {
        cout<<-1;
        return 0;
    }
    i=0,j=0;
    while(i<n)
    {
        ans++;
        asum=a[i++],bsum=b[j++];
        while(asum != bsum)
        {
            if(asum < bsum)
                asum+=a[i++];
            else bsum+=b[j++];
        }
    }
    cout<<ans;
    return 0;
}