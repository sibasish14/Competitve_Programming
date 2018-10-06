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
        int n,k,i,ans=0;
        cin>>n>>k;
        int x[k];
        for(i=0;i<k;i++)
            cin>>x[i];
        ans=x[0];
        ans=max(ans,n-x[k-1]+1);
        if(k == 1)
        {
            cout<<ans<<"\n";
            continue;
        }
        for(i=1;i<k;i++)
        {
            int z=(x[i]-x[i-1]+1);
            if(z%2)
                z=(z/2)+1;
            else z/=2;
            ans=max(ans,z);
        }
        cout<<ans<<"\n";
    }
    return 0;
}