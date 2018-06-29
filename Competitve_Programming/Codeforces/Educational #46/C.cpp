#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,i,l,r;
	cin>>n;
	vector<pair<ll,ll> > v;
	for(i=0;i<n;i++)
	{
		cin>>l>>r;
		v.push_back({l,1});
		v.push_back({r+1,-1});
	}
	sort(v.begin(), v.end());
	ll cnt[n+10]={0},c=0;
	for(i=0;i<v.size()-1;i++)
	{
		c+=v[i].second;
		if(v[i].first != v[i+1].first)
			cnt[c]+=(v[i+1].first-v[i].first);		
	}
	for(i=1;i<=n;i++)
		cout<<cnt[i]<<" ";
	return 0;
}
