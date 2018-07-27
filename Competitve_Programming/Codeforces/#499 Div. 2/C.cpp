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
    int n,m,i;
    cin>>n>>m;
    int a[n],b[n],f=1;
    double ans=0.0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i] == 1)
            f=0;
    }
    for(i=0;i<n;i++)
    {
        cin>>b[i];
        if(b[i] == 1)
            f=0;
    }
    if(!f)
    {
        cout<<-1;
        return 0;
    }
    ans=m;
    ans+=(1.0*ans/(b[0]-1));
    for(i=n-1;i>=1;i--)
    {
        ans+=(1.0*ans/(b[i]-1));
        ans+=(1.0*ans/(a[i]-1));
    }
    ans+=(1.0*ans/(a[0]-1));
    cout<<ans-m;
    return 0;
}
