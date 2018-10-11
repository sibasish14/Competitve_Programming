#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

ll a[2010],one[2010],two[2010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,j,ans=0,tmp,tmp1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        one[i]=one[i-1]+(a[i] == 1);
        two[i]=two[i-1]+(a[i] == 2);
    }
    for(i=1;i<=n;i++)
    {
        tmp1=0,tmp=0;
        for(j=0;j<=i;j++)
        {
            ll z=one[j]-one[0]+two[i]-two[j];
            tmp1=max(tmp1,z);
        }
        tmp+=tmp1;
        tmp1=0;
        for(j=i;j<=n;j++)
        {
            ll z=one[j]-one[i]+two[n]-two[j];
            tmp1=max(tmp1,z);
        }
        tmp+=tmp1;
        ans=max(ans,tmp);
    }
    cout<<ans;
    return 0;
}