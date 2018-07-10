#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll n,m,i,j;
    cin>>n>>m;
    ll x,y;
    for(i=0;i<m;i++)
        cin>>x>>y;
    for(i=0;i<n;i++)
        cout<<(i & 1);
	return 0;
}
