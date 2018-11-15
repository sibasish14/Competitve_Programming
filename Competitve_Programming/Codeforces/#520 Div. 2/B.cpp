#include<bits/stdc++.h>
#define mod 1000000007
#define F first
#define S second
using namespace std;
typedef long long int ll;

set<ll> s;
vector<ll> factors;
vector<ll> least(1000010);
map<ll,ll> mp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    // cin>>t;
    while(t--)
    {
        ll n,i,j,ans=1,steps=0;
        cin>>n;
        least[1]=1;
        for(i=2;i<=1000000;i++)
        {
            if(!least[i])
            {
                least[i]=i;
                for(j=2*i;j<=1000000;j+=i)
                {
                    if(!least[j])
                        least[j]=i;
                }
            }
        }
        ll x=n;
        while(x != 1)
        {
            factors.push_back(least[x]);
            s.insert(least[x]);
            mp[least[x]]++;
            x/=least[x];
        }
        if(factors.size() == s.size())
        {
            cout<<n<<" 0";
            return 0;
        }
        for(auto it=s.begin();it!=s.end();it++)
            ans*=(*it);
        ll f=1,mx=0;
        for(auto z:mp)
        {
            if(z.S%2)
            {
                f=0;
            }
            mx=max(mx,z.S);
        }
        x=mx;
        while(f)
        {
            x=0;
            for(auto z:mp)
            {
                if(z.S%2 == 0)
                    mp[z.F]/=2;
                if(mp[z.F]%2 == 1)
                    f=0;
                x=max(x,mp[z.F]);
            }
            steps++;
        }
        if(x == 1)
        {
            cout<<ans<<" "<<steps;
            return 0;
        }
        i=0;
        while(x > (ll)pow(2,i))
            i++;
        if(i) steps++;
        ll y=(ll)pow(2,i);
        while(y%2 == 0)
        {
            y/=2;
            steps++;
        }
        cout<<ans<<" "<<steps;
    }
    return 0;
}