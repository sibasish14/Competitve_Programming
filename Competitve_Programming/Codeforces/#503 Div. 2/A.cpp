#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ll n,m,a,b,k,i;
    cin>>n>>m>>a>>b>>k;
    while(k--)
    {
        ll t1,f1,t2,f2,ans=0;
        cin>>t1>>f1>>t2>>f2;
        if(t1 == t2)
            ans=abs(f1-f2);
        else if(t1 == t2 && f1 == f2)
            ans=0;
        else if(f1 >= a && f1 <= b)
        {
            ans+=abs(t2-t1);
            ans+=abs(f2-f1);
        }
        else if(f1 < a)
        {
            ans+=abs(a-f1);
            ans+=abs(t2-t1);
            ans+=abs(a-f2);
        }
        else if(f1 > b)
        {
            ans+=abs(f1-b);
            ans+=abs(t2-t1);
            ans+=abs(f2-b);
        }
        cout<<ans<<"\n";
    }
    return 0;
}