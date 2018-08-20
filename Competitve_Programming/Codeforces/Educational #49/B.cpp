#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ll n,q,i,j,ans=0,x,y;
    cin>>n>>q;
    for(i=0;i<q;i++)
    {
        cin>>x>>y;
        if(n == 1 || (x == 1 & y == 1))
        {
            cout<<"1\n";
            continue;
        }
        ll sum=x+y;
        ll f=sum%2;
        if(!f)
        {
            ll half=(n*n)/2;
            ll f=1,s=1+((n%2)?n/2+1:n/2);
            // cout<<f<<" "<<s<<"\n";
            if(x%2)
            {
                ans=f+(n*(x/2));
                ans+=((y%2)?(y/2):(y/2-1));
            }
            else
            {
                ans=s+(n*(x/2-1));
                // cout<<ans<<" ";
                ans+=((y%2)?(y/2):(y/2-1));
            }
        }
        else
        {
            ll half=(n*n)/2+((n%2)?2:1);
            ll f=half;
            ll s=f+n/2;
            // cout<<f<<" "<<s<<"\n";
            if(x%2)
            {
                ans=f+(n*(x/2));
                // cout<<ans<<" ";
                ans+=((y%2)?(y/2):(y/2-1));
            }
            else
            {
                ans=s+(n*(x/2-1));
                ans+=((y%2)?(y/2):(y/2-1));
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}