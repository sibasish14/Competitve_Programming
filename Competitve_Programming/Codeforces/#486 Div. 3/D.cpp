#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll n,i,a;
	set<ll> s;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		s.insert(a);
	}
	for(auto v : s)
	{
		for(i=1;i<=2e9;i*=2)
		{
			if(s.find(v+i)!=s.end() && s.find(v+2*i)!=s.end())
			{
				cout<<"3\n";
				cout<<v<<" "<<v+i<<" "<<v+2*i;
				return 0;
			}
		}
	}
	for(auto v : s)
	{
		for(i=1;i<=2e9;i*=2)
		{
			if(s.find(v+i)!=s.end())
			{
				cout<<"2\n";
				cout<<v<<" "<<v+i;
				return 0;
			}
		}
	}
	cout<<"1\n";
	cout<<*(s.begin());
	return 0;
}
