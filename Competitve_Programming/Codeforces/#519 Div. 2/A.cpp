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
        int n,i,elo=0,awr=0;
        cin>>n;
        int a[n],ans=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            ans=max(ans,a[i]);
            elo+=a[i];
        }
        while(awr <= elo)
        {
            awr=0;
            for(i=0;i<n;i++)
                awr+=(ans-a[i]);
            ans++;
        }
        ans--;
        cout<<ans;
    }
    return 0;
}