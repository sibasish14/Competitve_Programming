#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,k,i;
	cin>>n>>k;
	ll a[n];
	set<ll> s;
	map<ll,ll> mp;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		s.insert(a[i]);
		mp[a[i]]=i+1;
	}
	if(s.size() >= k)
	{
		cout<<"YES\n";
		for(auto v:s)
		{
			if(k==0)
				break;
			cout<<mp[v]<<" ";
			k--;
		}	
	}
	else
		cout<<"NO\n";
	return 0;
}
