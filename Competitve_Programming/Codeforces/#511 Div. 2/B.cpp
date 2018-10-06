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
    ll x[n],y[n];
    vector<ll> v;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
        v.push_back(x[i]+y[i]);
    }
    sort(v.begin(),v.end());
    cout<<v[n-1];
    return 0;
}