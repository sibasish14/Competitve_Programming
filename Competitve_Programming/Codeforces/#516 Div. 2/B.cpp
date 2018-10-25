#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

map<ll,ll> mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,i,j;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        if(a == 0)
        {
            cout<<"1\n";
            continue;
        }
        ll z=a,one=0;
        while(z)
        {
            one+=(z%2);
            z/=2;
        }
        cout<<(1LL << one)<<"\n";
    }
    return 0;
}