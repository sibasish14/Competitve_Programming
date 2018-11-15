#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

vector<ll> prime(100010,1);

bool check(ll n)
{
    ll i;
    for(i=2;i*i<=n;i++)
    {
        if(n%i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;
        for(i=2;i<=100000;i++)
        {
            if(prime[i])
            {
                for(j=i*2;j<=100000;j+=i)
                {
                    prime[j]=0;
                }
            }
        }
        if(check(n))
        {
            cout<<"1";
            return 0;
        }
        if(n%2 == 0)
        {
            cout<<n/2;
            return 0;
        }
        ll ans=0;
        for(i=3;i*i<=n;i++)
        {
            if(n%i==0 && prime[i])
            {
                n-=i;
                ans++;
                break;
            }
        }
        ans+=(n/2);
        cout<<ans;
    }
    return 0;
}