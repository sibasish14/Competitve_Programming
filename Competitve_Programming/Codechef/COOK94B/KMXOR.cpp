#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;
 
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k,i,z=0;
		cin>>n>>k;
		vector<ll> v;
		if(k==1)
		{
			for(i=0;i<n;i++)
				cout<<"1 ";
			cout<<"\n";
			continue;
		}
		if(k==2)
		{
			for(i=0;i<n-1;i++)
				cout<<"1 ";
			cout<<"2\n";
			continue;
		}
		if(k==3)
		{
			for(i=0;i<n-1;i++)
				cout<<"1 ";
			if(n%2==1)
				cout<<"3\n";
			else
				cout<<"2\n";
			continue;
		}
		for(i=0;i<=29;i++)
			if((1<<i) <= k)
				z=i;
		if(n==1)
		{
			cout<<k<<"\n";
			continue;
		}
		v.push_back((1<<z));
		v.push_back((1<<z)-1);
		n-=2;
		if(n%2==1)
			v[1]^=1;
		for(i=0;i<n;i++)
			v.push_back(1);
		for(i=0;i<v.size();i++)
			cout<<v[i]<<" ";
		cout<<"\n";
	}   
	return 0;
}