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
	ll a[n+10],k,arr[n+10];
	vector<ll> v[m],tmp;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		v[a[i]%m].push_back(i);
	}
	k=n/m;
	for(i=0;i<2*m;i++)
	{
		j=i%m;
		while(v[j].size() > k)
		{
			tmp.push_back(v[j].back());
			v[j].pop_back();
		}
		while(v[j].size() < k && tmp.size() > 0)
		{
			v[j].push_back(tmp.back());
			tmp.pop_back();
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<v[i].size();j++)
		{
			arr[v[i][j]]=i;
		}
	}
	ll ans=0,z,x;
	for(i=1;i<=n;i++)
	{
		z=a[i];
		x=0;
		if(z%m < arr[i])
			x=arr[i]-z%m;
		else if(z%m > arr[i])
			x=m-z%m+arr[i];
		ans+=x;
		a[i]=z+x;
	}
	cout<<ans<<"\n";
	for(i=1;i<=n;i++)
		cout<<a[i]<<" ";
	return 0;
}
