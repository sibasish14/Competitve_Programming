#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,ans=0,sum=0;
    cin>>n;
    while(n)
    {
        n=(n>>1);
        ans++;
    }
    cout<<ans;
    return 0;
}