#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k,i,x,y;
    cin>>n>>k;
    vector<ll> a(n),b(n);
    for(i=0;i<n;i++)
    {
    	cin>>a[i];
    	b[i]=a[i];
    }
    sort(b.begin(),b.end());
    map<ll,ll> mp;
    for(i=0;i<k;i++)
    {
    	cin>>x>>y;
    	x--;
    	y--;
    	if(a[x] > a[y])
    		mp[x]++;
    	if(a[x] < a[y])
    		mp[y]++;
    }
    for(i=0;i<n;i++)
    {
    	ll tmp=lower_bound(b.begin(), b.end(),a[i]) - b.begin();
    	cout<<max(0LL,tmp-mp[i])<<" ";
    }

	return 0;
}
