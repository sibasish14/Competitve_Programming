#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,i;
    cin>>n;
    if(n == 1 || n == 2)
    {
        cout<<"No";
        return 0;
    }
    cout<<"Yes\n";
    cout<<n/2<<" ";
    for(i=2;i<=n;i+=2)
        cout<<i<<" ";
    cout<<"\n"<<n-n/2<<" ";
    for(i=1;i<=n;i+=2)
        cout<<i<<" ";
    return 0;
}