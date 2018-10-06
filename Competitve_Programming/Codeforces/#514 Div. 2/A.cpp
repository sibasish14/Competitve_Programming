#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,L,a,i,ans=0;
    cin>>n>>L>>a;
    ll t[n],l[n];
    if(n == 0)
    {
        cout<<L/a<<"\n";
        return 0;
    }
    for(i=0;i<n;i++)
    {
        cin>>t[i]>>l[i];
    }
    ans=(L-(t[n-1]+l[n-1]))/a;
    for(i=1;i<n;i++)
    {
        ll gap=t[i]-(t[i-1]+l[i-1]);
        ans+=(gap/a);
    }
    ans+=(t[0]/a);
    cout<<ans<<"\n";
    return 0;
}