#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll n,k,l,i,j;
	cin>>n>>k>>l;
	vector<ll> v(n*k);
	for(i=0;i<n*k;i++)
		cin>>v[i];
	sort(v.begin(), v.end());
	ll idx=upper_bound(v.begin(), v.end(),v[0]+l)-v.begin();
	if(idx < n)
	{
		cout<<"0";
		return 0;
	}
	ll ans=0,z=0;
	for(i=0;i<n;i++)
	{
		ans+=v[z++];
		for(j=0;j<k-1;j++)
		{
			if(idx-z > n-i-1)
				z++;
			else
				break;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
