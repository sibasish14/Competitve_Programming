#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,sum=0;
    cin>>n;
    ll a[n],pos=0,neg=0,mx=INT64_MIN,mn=INT64_MAX;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i] >= 0)
            pos=1;
        if(a[i] <= 0)
            neg=1;
        sum+=abs(a[i]);
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    if(n == 1)
    {
        cout<<a[0];
        return 0;
    }
    if(pos && neg)
        cout<<sum;
    else if(!neg)
        cout<<sum-2*mn;
    else cout<<sum+2*mx;
    return 0;
}