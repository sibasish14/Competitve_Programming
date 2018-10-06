#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

ll prime[1000010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i;
    cin>>n;
    if(n == 1)
    {
        cout<<"1";
        return 0;
    }
    if(n == 2)
    {
        cout<<"1 2";
        return 0;
    }
    if(n == 3)
    {
        cout<<"1 1 3";
        return 0;
    }
    ll x=1,z=2,ans=x;
    for(i=0;i<n;i++)
    {
        if(x > n)
        {
            x=z;
            ans=x;
            z*=2;
            if(n-i == 3)
            {
                cout<<ans<<" "<<ans<<" "<<ans*3;
                return 0;
            }
        }
        cout<<ans<<" ";
        x+=z;
    }
    return 0;
}