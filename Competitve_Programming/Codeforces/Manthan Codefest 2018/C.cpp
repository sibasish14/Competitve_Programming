#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i,j,ans=0;
    cin>>n;
    string a,b;
    cin>>a>>b;
    for(i=0;i<n-1;i++)
    {
        if(a[i] != b[i] && a[i+1] != b[i+1] && a[i] != a[i+1])
        {
            ans++;
            swap(a[i],a[i+1]);
            i++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i] != b[i])
            ans++;
    }
    cout<<ans;
    return 0;
}