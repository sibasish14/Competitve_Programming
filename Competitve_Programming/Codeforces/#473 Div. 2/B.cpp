#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
	ll n,k,m,i,j,x,ans=0,z;
	cin>>n>>k>>m;
	string s;
	map<string,ll> mp;
	ll a[100005],tmp[100005];
	
	for(i=1;i<=n;i++)
	{
		cin>>s;
		mp[s]=i;
	}
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=k;i++)
	{
		cin>>x;
		vector<ll> v;
		ll mn=1e18;
		while(x--)
		{
			cin>>z;
			v.push_back(z);
		}
		for(auto j:v)
			mn=min(mn,a[j]);
		for(auto j:v)
			tmp[j]=mn;
	}
	for(i=0;i<m;i++)
	{
		cin>>s;
// 		cout<<tmp[mp[s]]<<" ";
		ans+=tmp[mp[s]];
	}
	cout<<ans<<"\n";
	return 0;
}
