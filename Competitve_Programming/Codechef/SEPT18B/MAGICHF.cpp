#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,s,i,a,b;
        cin>>n>>x>>s;
        ll arr[n+1];
        for(i=1;i<=n;i++)
            arr[i]=i;
        for(i=0;i<s;i++)
        {
            cin>>a>>b;
            swap(arr[a],arr[b]);
        }
        for(i=1;i<=n;i++)
        {
            if(arr[i] == x)
            {
                cout<<i<<"\n";
                break;
            }
        }
    }
    return 0;
}