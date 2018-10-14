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
    int t;
    cin>>t;
    while(t--)
    {
        ll s,a,b,c,ans=0;
        cin>>s>>a>>b>>c;
        ll buy=s/c;
        ans=buy+(buy/a)*b;
        cout<<ans<<"\n";
    }
    return 0;
}