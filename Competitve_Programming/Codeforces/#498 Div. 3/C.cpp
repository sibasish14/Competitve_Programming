#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,j;
    cin>>n;
    ll a[n],ans=0,sum1[n+10],sum3[n+10];
    memset(sum1,0,sizeof(sum1));
    memset(sum3,0,sizeof(sum3));
    for(i=0;i<n;i++)
        cin>>a[i];
    if(n == 1)
    {
        cout<<0;
        return 0;
    }
    if(n == 2)
    {
        if(a[0] == a[1])
            cout<<a[0];
        else
            cout<<0;
        return 0;
    }
    sum1[0]=0,sum3[n+1]=0;
    for(i=1,j=n;i<=n,j>=1;i++,j--)
    {
        sum1[i]=sum1[i-1]+a[i-1];
        sum3[j]=sum3[j+1]+a[j-1];
    }
    for(i=1,j=n;i<j;)
    {
        if(sum1[i] > sum3[j])
            j--;
        else if(sum1[i] < sum3[j])
            i++;
        if(i < j)
        {
            if(sum1[i] == sum3[j])
            {
                ans=max(ans,sum1[i]);
                i++;
            }
        }
    }
    cout<<ans;
	return 0;
}
