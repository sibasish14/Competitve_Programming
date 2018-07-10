#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,d,i,ans=2;
    cin>>n>>d;
    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n-1;i++)
    {
        if(a[i]+d < a[i+1]-d)
            ans+=2;
        else if(a[i]+d == a[i+1]-d)
            ans++;
    }
    cout<<ans;
	return 0;
}
