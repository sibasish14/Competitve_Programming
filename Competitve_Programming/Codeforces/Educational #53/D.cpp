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
        ll n,T,i,f=1,ans=0;
        cin>>n>>T;
        ll a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        while(f)
        {
            ll sum=0,oneRound=0;
            f=0;
            for(i=0;i<n;i++)
            {
                if(a[i]+sum <= T)
                {
                    sum+=a[i];
                    oneRound++;
                    f=1;
                }
            }
            if(!sum)
                continue;
            ll totRound=T/sum;
            ans+=(totRound*oneRound);
            T-=(totRound*sum);
        }
        cout<<ans;
    }
    return 0;
}