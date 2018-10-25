#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n,m,k,l;
        cin>>n>>m>>k>>l;
        ll atleast=l+k;
        ll z=ceil(1.0*(l+k)/m);
        m=m*z;
        if(m <= n)
            cout<<z;
        else cout<<"-1";
    }
    return 0;
}