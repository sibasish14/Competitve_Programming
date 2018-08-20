#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;
 
set<ll> s;
 
void precompute()
{
    ll i,j,val;
    for(i=0;i<35-1;i++)
    {
        for(j=i+1;j<35;j++)
        {
            val=pow(2,i)+pow(2,j);
            s.insert(val);
        }
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    precompute();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        auto it=s.lower_bound(n);
        if((*it) == 3)
            ans=abs(n-3);
        else
        {
            it--;
            ll before=(*it);
            ans=abs(n-before);
        }
        if(ans == 0)
        {
            cout<<ans<<"\n";
            continue;
        }
        it++;
        ll after=(*it);
        ans=min(ans,abs(n-after));
        cout<<ans<<"\n";
    }
    return 0;
}