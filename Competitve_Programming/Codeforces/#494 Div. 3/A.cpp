#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i;
    cin>>n;
    ll a[n+10],cnt[105];
    for(i=0;i<105;i++)
        cnt[i]=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cnt[a[i]]++;
    }
    ll ans=0;
    for(i=0;i<105;i++)
        ans=max(ans,cnt[i]);
    cout<<ans;
	return 0;
}
