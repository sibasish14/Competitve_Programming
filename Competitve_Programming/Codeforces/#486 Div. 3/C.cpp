#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll k,n,i,j;
	cin>>k;
	vector<pair<ll,pair<ll,ll> > > v;
	for(i=0;i<k;i++)
	{
		cin>>n;
		ll a[n],sum=0;
		for(j=0;j<n;j++)
		{
			cin>>a[j];
			sum+=a[j];
		}
		for(j=0;j<n;j++)
			v.push_back(make_pair(sum-a[j],make_pair(i+1,j+1)));
		sum=0;
	}
	sort(v.begin(), v.end());
	for(i=0;i<v.size()-1;i++)
	{
		if(v[i].first == v[i+1].first && v[i].second.first != v[i+1].second.first)
		{
			cout<<"YES\n";
			cout<<v[i].second.first<<" "<<v[i].second.second<<"\n";
			cout<<v[i+1].second.first<<" "<<v[i+1].second.second<<"\n";
			return 0;
		}
	}
	cout<<"NO\n";
	return 0;
}
