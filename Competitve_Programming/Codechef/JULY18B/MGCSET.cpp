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
        ll n,m,i,c=0;
        cin>>n>>m;
        ll a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%m == 0) c++;
        }
        cout<<(ll)pow(2,c)-1LL<<"\n";
    }
	return 0;
}
