#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,ans=0;
    cin>>n;
    string a,b;
    cin>>a>>b;
    if(n%2)
        if(a[n/2] != b[n/2])
            ans++;
    for(i=0;i<n/2;i++)
    {
        if(a[i] == b[i] && a[n-i-1] == b[n-i-1])
            continue;
        if(a[i] == b[n-i-1] && a[n-i-1] == b[i])
            continue;
        if(a[i] == a[n-i-1] && b[i] == b[n-i-1])
            continue;
        if(a[i] == b[i] || a[n-i-1] == b[n-i-1] || a[i] == b[n-i-1] || a[n-i-1] == b[i] || b[i] == b[n-i-1])
            ans++;
        else ans+=2;
    }
    cout<<ans;
	return 0;
}
