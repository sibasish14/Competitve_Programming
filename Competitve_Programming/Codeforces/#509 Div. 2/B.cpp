#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a,b,x,y,i;
    cin>>a>>b>>x>>y;
    ll g=__gcd(x,y);
    x/=g;
    y/=g;
    ll mn=a/x;
    mn=min(mn,b/y);
    cout<<mn;
    return 0;
}