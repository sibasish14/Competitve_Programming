#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ll n,ans,i,z;
    cin>>n;
    if(n <= 3)
    {
        for(i=1;i<=n;i++)
            cout<<i<<" ";
        return 0;
    }
    z=n/2+1;
    if(n%2 == 0)
        for(i=1;i<=n/2;i++,z++)
            cout<<z<<" ";
    else
        for(i=1;i<=n/2+1;i++,z++)
            cout<<z<<" ";
    z=1;
    for(i=1;i<=n/2;i++,z++)
        cout<<z<<" ";
    return 0;
}