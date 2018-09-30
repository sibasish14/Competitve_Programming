#include<bits/stdc++.h>
#define mod 1000000007
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
        int n,i,x,y,ans=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>x>>y;
            if((y-x) > 5)
                ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}