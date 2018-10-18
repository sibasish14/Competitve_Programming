#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

ll fact[100010];

void preprocess()
{   ll i;
    fact[0]=1;
    for(i=1;i<=100000;i++)
        fact[i]=(i*fact[i-1])%mod;
}

ll fast_expo(ll a,ll b)
{
    ll ans=1;
    while(b)
    {
        if(b & 1)
            ans=(ans*a)%mod;
        b=b>>1;
        a=(a*a)%mod;
    }
    return ans;
}

ll calc(ll n)
{
    ll m=n/2,ans;
    ll z=fast_expo(2LL,m);
    ans=(((fact[2*m]*fast_expo(z,mod-2))%mod)*(fast_expo(fact[m],mod-2)))%mod;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t,i;
    cin>>t;
    preprocess();
    while(t--)
    {
        map<ll,ll> mp;
        ll n,ans=1,a;
        cin>>n;
        vector<ll> v;
        for(i=0;i<n;i++)
        {
            cin>>a;
            mp[a]++;
        }
        for(auto z:mp)
            v.push_back(z.S);
        reverse(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            if(v[i]%2 == 0)
                ans=(ans*calc(v[i]))%mod;
            else
            {
                ans=(ans*calc(v[i]-1))%mod;
                if(i < v.size()-1)
                {
                    ans=(ans*(v[i]*v[i+1])%mod)%mod;
                    v[i+1]--;
                    v[i]=0;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}