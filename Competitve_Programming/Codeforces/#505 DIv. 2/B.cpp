#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

vector<ll> v;
ll n,a[200000],b[200000];

void check(ll k)
{
    ll i;
    for(i=1;i<n;i++)
    {
        if(a[i]%k == 0 || b[i]%k == 0)
            continue;
        return;
    }
    cout<<k;
    exit(0);
}

void factors(ll x)
{
    v.clear();
    ll i;
    for(i=2;i*i<=x;i++)
    {
        ll z=0;
        while(x%i == 0)
        {
            x/=i;
            z++;
        }
        if(z)
            v.push_back(i);
    }
    if(x > 1)
        v.push_back(x);
    for(auto z:v)
    {
        check(z);
        // cout<<z<<" ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll i,j;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i]>>b[i];
    factors(a[0]);
    factors(b[0]);
    cout<<-1;
    return 0;
}